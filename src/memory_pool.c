#include "memory_pool.h"
#include <stdlib.h>
#include <stdio.h>

struct MemoryPool {
    size_t block_size;
    size_t num_blocks;
    void* pool;
    void* free_list;
};

MemoryPool* memory_pool_create(size_t block_size, size_t num_blocks) {
    MemoryPool* mp = malloc(sizeof(MemoryPool));
    if (!mp) return NULL;
    mp->block_size = block_size;
    mp->num_blocks = num_blocks;
    mp->pool = malloc(block_size * num_blocks);
    if (!mp->pool) {
        free(mp);
        return NULL;
    }
    mp->free_list = mp->pool;
    char* current = mp->pool;
    for (size_t i = 0; i < num_blocks - 1; ++i) {
        *(void**)current = current + block_size;
        current += block_size;
    }
    *(void**)current = NULL;
    return mp;
}

void memory_pool_destroy(MemoryPool* pool) {
    if (pool) {
        free(pool->pool);
        free(pool);
    }
}

void* memory_pool_alloc(MemoryPool* pool) {
    if (!pool->free_list) return NULL;
    void* block = pool->free_list;
    pool->free_list = *(void**)block;
    return block;
}

void memory_pool_free(MemoryPool* pool, void* ptr) {
    if (ptr >= pool->pool && ptr < pool->pool + pool->block_size * pool->num_blocks) {
        *(void**)ptr = pool->free_list;
        pool->free_list = ptr;
    }
}