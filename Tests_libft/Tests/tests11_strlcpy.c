#include "../tests.h"

void test_strlcpy(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 5;

  // act
  dst = malloc(1024);
  memset(dst, 0, 1024);

  src = "Hello";
  dst_return = ft_strlcpy(dst, src, n);

  // assert
  TEST_ASSERT_EQUAL_INT64(n, dst_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("Hell", dst, n);
  free(dst);
}

void test_strlcpy_10(void)
{
  // arrange
  char *dst = "rrrrrr^@^@^@^@^@^@^@^@^@";
  size_t max = strlen(dst);

  // act

  size_t dst_return = ft_strlcpy(dst, "lorem ipsum dolor sit amet", 0);
  // assert
  //printf("|dst_return=%zu|buff2=%s|str=%s|",dst_return, buff1, str);
  //printf("|dst_return2=%zu|buff2=%s|str=%s|",dst_return2, buff2, str);


  TEST_ASSERT_EQUAL_INT64(26, dst_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("rrrrrr^@^@^@^@^@^@^@^@^@", dst, max);
}

void test_strlcpy2(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 6;

  // act
  dst = malloc(1024);
  memset(dst, 0, 1024);

  src = "Hello";
  dst_return = ft_strlcpy(dst, src, n);

  // assert
  TEST_ASSERT_EQUAL_INT64(5, dst_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("Hello", dst, n);
  free(dst);
}

void test_strlcpy3(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 7;

  // act
  dst = malloc(1024);
  ft_bzero(dst, 1024);

  src = "Hellohhhhh";
  dst_return = ft_strlcpy(dst, src, n);

  // assert
  TEST_ASSERT_EQUAL_INT64(10, dst_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("Helloh", dst, n);
  free(dst);
}

void test_strlcpy_dst_null_len_0(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 0;

  // act
  dst = NULL;

  src = "Hellohhhhh";
  dst_return = ft_strlcpy(dst, src, n);

  // assert
  TEST_ASSERT_EQUAL_INT64(10, dst_return);
  TEST_ASSERT_EQUAL_INT64(0, dst);
}

void test_strlcpy_dst_src_null_len_0(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 0;

  // act
  dst = NULL;

  src = NULL;
  dst_return = ft_strlcpy(dst, src, n);

  // assert
  TEST_ASSERT_EQUAL_INT64(10, dst_return);
  TEST_ASSERT_EQUAL_INT64(0, dst);
}

void test_strlcpy_dst_null_len_1(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 1;

  // act
  dst = NULL;

  src = "Hellohhhhh";
  dst_return = ft_strlcpy(dst, src, n);

  // assert
  TEST_ASSERT_EQUAL_INT64(10, dst_return);
  TEST_ASSERT_EQUAL_INT64(0, dst);
}

void test_strlcpy_src_null_len_0(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 0;

  // act
  dst = "hello";

  src = NULL;
  dst_return = ft_strlcpy(dst, src, n);

  // assert
  TEST_ASSERT_EQUAL_INT64(10, dst_return);
  TEST_ASSERT_EQUAL_INT64(0, dst);
}