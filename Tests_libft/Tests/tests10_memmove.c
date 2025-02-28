#include "../tests.h"

char	*my_strdup1(const char *s1)
{
	int		i;
	char	*s;
	size_t	len;

	i = 0;
	len = strlen(s1);
	s = (char *)malloc(sizeof(char) * (len + 1));
	if (!s)
		return (NULL);
	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

void test_memmove_Test_NULL(void)
{
  // arrange
  void *dst;
  void *dst_return;
  void *src;
  size_t n = 5;

  // act
  dst = NULL;
  src = NULL;
  dst_return = ft_memmove(dst, src, n);

  // assert
  TEST_ASSERT_NULL(dst);
  TEST_ASSERT_NULL(dst_return);
}

void test_memmove_n_0(void)
{
  // arrange
  char *dst;
  char *dst_return;
  char *src;
  size_t n = 0;

  // act
  dst = malloc(1024);
  memset(dst, 0, 1024);

  src = "Hello";
  dst_return = memmove(dst, src, n);

  // assert
  TEST_ASSERT_EQUAL_INT64(dst, dst_return);
  printf("%c", dst[0]);
  for (int i = 0; i < 1024; i++)
    TEST_ASSERT_EQUAL_CHAR(0, dst[i]);
  free(dst);
}

void test_memmove_memory_overlapping_src_is_dst3(void)
{
  // arrange
  void *dst;
  void *dst_return;
  void *src;
  size_t n = 7;

  // act
  dst = my_strdup1("0123456789");
  src = &(((char *)dst)[3]);
  dst_return = memmove(dst, src, n);

  // assert
  TEST_ASSERT_CHAR_ARRAY_WITHIN(0, "3456789789", dst, 10);
  TEST_ASSERT_EQUAL_INT64(dst, dst_return);
  free(dst);
}

void test_memmove_memory_overlapping_dst_is_src3(void)
{
  // arrange
  void *dst;
  void *dst_return;
  void *src;
  size_t n = 7;

  // act
  src = my_strdup1("0123456789");
  dst = &(((char *)src)[3]);
  dst_return = memmove(dst, src, n);

  // assert
  TEST_ASSERT_CHAR_ARRAY_WITHIN(0, "0123456", dst, 7);
  TEST_ASSERT_EQUAL_INT64(dst, dst_return);
  free(src);
}

void test_memmove_memory_overlapping_src_is_dst3_n0(void)
{
  // arrange
  char *dst;
  void *dst_return;
  void *src;
  size_t n = 0;

  // act
  dst = my_strdup1("0123456789");
  src = &dst[3];
  dst_return = memmove(dst, src, n);

  // assert
  TEST_ASSERT_CHAR_ARRAY_WITHIN(0, "0123456789", dst, 10);
  TEST_ASSERT_EQUAL_INT64(dst, dst_return);
  free(dst);
}

void test_memmove_memory_overlapping_dst_is_src3_n0(void)
{
  // arrange
  char *dst;
  void *dst_return;
  void *src;
  size_t n = 0;

  // act
  src = my_strdup1("0123456789");
  dst = &(((char *)src)[3]);
  dst_return = memmove(dst, src, n);

  // assert
  TEST_ASSERT_CHAR_ARRAY_WITHIN(0, "3456789", dst, 7);
  TEST_ASSERT_EQUAL_INT64(dst, dst_return);
  free(src);
}

void test_memmove_size_bigger_then_src(void)
{
    //arrange
    void *des; 
    void *des_r;
    void *exp_des;
    des = calloc(1024,1);
    exp_des = calloc(1024,1);
    char *src = "Hello";

    //act
    des_r = memmove(des, src, 8);
    memmove(exp_des, src, 8);

    //assert
    TEST_ASSERT_EQUAL_INT64(des, des_r);
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(exp_des, des, 8, 8);
    free(des);
}

void test_memmove_dst_NULL(void)
{
    //arrange
    void *dst;
    void *dst_return = NULL;;
    void *src;
    size_t n = 5;
    
    //act
    dst = NULL;
    src = "Hello";
    dst_return = memmove(dst, src, n);
    
    //assert
    TEST_ASSERT_NULL(dst);
    TEST_ASSERT_NULL(dst_return);
}

void test_memmove_src_NULL(void)
{
    //arrange
    void *dst;
    void *dst_return;
    void *src;
    size_t n = 5;
    
    //act
    dst = malloc(1024);
    src = NULL;
    dst_return = memmove(dst, src, n);
    (void)dst_return;
    free(dst);
}