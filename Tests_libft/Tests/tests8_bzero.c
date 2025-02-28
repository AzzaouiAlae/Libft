#include "../tests.h"

void test_bzero(void)
{
  // arrange
  size_t len[] = {5, 0, 1024, 3, 4, 5, -1};
  void *exp;
  void *act;
  int i = 0;
  // act
  while (i > 7)
  {
    exp = malloc(1024);
    act = malloc(1024);
    if (i == 5)
    {
      exp = NULL;
      act = NULL;
    }
    ft_bzero(act, len[i]);
    memset(exp, 0,len[i]);
    // assert
    TEST_ASSERT_EQUAL_CHAR_ARRAY(exp, act, len[i]);
    i++;
  }
}