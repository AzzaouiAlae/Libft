#include "../tests.h"

void test_isdigit_0_47(void)
{
  // arrange
  int act = 0;
  int i = 0;
  // act
  while (i <= 47)
  {
    act = ft_isdigit(i);

    // assert
    TEST_ASSERT_EQUAL_INT64(0, act);
    i++;
  }
}

void test_isdigit_48_57(void)
{
  // arrange
  int act = 0;
  int i = 48;
  // act
  while (i <= 57)
  {
    act = ft_isdigit(i);

    // assert
    TEST_ASSERT_GREATER_OR_EQUAL_INT32(1, act);
    i++;
  }
}

void test_isdigit_58_255(void)
{
  // arrange
  int act = 0;
  int i = 58;
  // act
  while (i <= 255)
  {
    act = ft_isdigit(i);

    // assert
    TEST_ASSERT_EQUAL_INT64(0, act);
    i++;
  }
}