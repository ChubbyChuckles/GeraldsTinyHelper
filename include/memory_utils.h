#ifndef MEMORY_UTILS_H
#define MEMORY_UTILS_H

#include <stddef.h>

void* safe_malloc(size_t size);
void* safe_calloc(size_t nmemb, size_t size);
void* safe_realloc(void* ptr, size_t size);
void safe_free(void* ptr);

#endif