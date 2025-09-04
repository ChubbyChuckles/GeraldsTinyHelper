#ifndef UNITY_H
#define UNITY_H

#include <stdio.h>
#include <string.h>

// Basic Unity macros
#define TEST_ASSERT_EQUAL(a, b) if ((a) != (b)) { printf("FAIL: %s != %s\n", #a, #b); }
#define TEST_ASSERT_TRUE(condition) if (!(condition)) { printf("FAIL: %s\n", #condition); }
#define TEST_ASSERT_FALSE(condition) if (condition) { printf("FAIL: %s\n", #condition); }

// Test runner
void UnityBegin();
void UnityEnd();
void UnityDefaultTestRun();

#endif