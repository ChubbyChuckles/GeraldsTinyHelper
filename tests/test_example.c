#include "unity.h"

void test_example() {
    TEST_ASSERT_TRUE(1 == 1);
}

int main() {
    UnityBegin();
    test_example();
    UnityEnd();
    return 0;
}