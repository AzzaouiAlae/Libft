#include "../tests.h"

void test_memcpy(void)
{
  // arrange
  size_t len[] = {2, 1, 3, 4, 5, 5, 10, 1, 9};
  char *src[] = {"ff", "a", "hello", "hello world", "hello\nworld", "hello\0world",
                 "Générer une routine dentraînement pour les débutants Copilot utilise lIA. Recherchez les erreurs. Conditions(suvre dans un nouvel onglet)Confidentialité(souvre dans un nouvel onglet)FAQ(souvre dans un ouvel onglet)VousEnvoyé par vous :i want test cases for strlen i need test not code", "hello\0\0world", 0};
  void *dst;
  void *dst_r;
  int i = 0;

  while (src[i])
  {
    // act
    dst = malloc(1024);
    dst_r = ft_memcpy(dst, src[i], len[i]);

    // assert
    TEST_ASSERT_EQUAL_INT64(dst, dst_r);
    TEST_ASSERT_EQUAL_CHAR_ARRAY(src[i], dst, len[i]);
    i++;
    free(dst);
  }
}

void test_memcpy_all_NULL_n_5(void)
{
  // arrange
  void *dst = NULL;
  void *dst_r = NULL;
  void *src = NULL;
  size_t n = 5;

  // act
  dst_r = memcpy(dst, src, n);

  // assert
  printf("|\t%p\t|", dst_r);
  TEST_ASSERT_NULL(dst);
  TEST_ASSERT_NULL(dst_r);
}

void test_memcpy_all_NULL_n_0(void)
{
  // arrange
  void *dst = NULL;
  void *dst_r = NULL;
  void *src = NULL;
  size_t n = 0;

  // act
  dst_r = ft_memcpy(dst, src, n);

  // assert
  printf("|\t%p\t|", dst_r);
  TEST_ASSERT_NULL(dst);
  TEST_ASSERT_NULL(dst_r);
}

void test_memcpy_src_NULL_n_5(void)
{
  // arrange
  void *dst = ft_strdup("hello");
  void *dst_r = NULL;
  void *src = NULL;
  size_t n = 5;

  // act
  dst_r = ft_memcpy(dst, src, n);

  // assert
  printf("|\t%p\t|", dst_r);
  TEST_ASSERT_NULL(dst);
  TEST_ASSERT_NULL(dst_r);
  free(dst);
}

void test_memcpy_dst_NULL_n_5(void)
{
  // arrange
  void *dst = NULL;
  void *dst_r = NULL;
  void *src = ft_strdup("hello");
  size_t n = 5;

  // act
  dst_r = ft_memcpy(dst, src, n);

  // assert
  printf("|\t%p\t|", dst_r);
  TEST_ASSERT_NULL(dst);
  TEST_ASSERT_NULL(dst_r);
  free(src);
}