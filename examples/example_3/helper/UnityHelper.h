#ifndef UNITYHELPER_H
#define UNITYHELPER_H

#include "Types.h"

void AssertEqualExampleStruct(const EXAMPLE_STRUCT_T expected, const EXAMPLE_STRUCT_T actual, const unsigned short line);

#define UNITY_TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T(expected, actual, line, message)   AssertEqualExampleStruct(expected, actual, line);

#define TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T(expected, actual)                        UNITY_TEST_ASSERT_EQUAL_EXAMPLE_STRUCT_T(expected, actual, __LINE__, NULL);

#endif /* UNITYHELPER_H */
