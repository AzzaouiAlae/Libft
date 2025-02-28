#include "tests.h"



void setUp(void)
{
  
}

void tearDown(void)
{
}

void test_memcpy_size_bigger_then_src(void)
{
    //arrange
    void *des; 
    void *des_r;
    void *exp_des;
    des = malloc(1024);
    ft_bzero(des, 1024);
    exp_des = malloc(1024);
    ft_bzero(exp_des, 1024);
    char *src = "Hello";

    //act
    des_r = ft_memcpy(des, src, 8);
    memmove(exp_des, src, 8);

    //assert
    TEST_ASSERT_EQUAL_INT64(des, des_r);
    TEST_ASSERT_EQUAL_MEMORY_ARRAY(exp_des, des, 8, 8);
}



void test_strlcpy_src_null(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 6;
    
    //act
    dst = malloc(1024);
    ft_bzero(dst, 1024);
    
    src = NULL;
    dst_return = ft_strlcpy(dst, src, n);
    (void)dst_return;
}

void test_strlcpy_dst_null(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 6;
    
    //act
    dst = NULL;
    
    src = "Hello";
    dst_return = ft_strlcpy(dst, src, n);
    (void)dst_return;
}

void test_strlcpy_size_bigger_then_dst(void)
{
    //arrange
    char *dst; 
    size_t dst_r;
    void *exp_dst;
    dst = malloc(5);
    ft_bzero(dst, 5);
    exp_dst = malloc(5);
    ft_bzero(exp_dst, 5);
    char *src = "Hello";

    //act
    dst_r = ft_strlcpy(dst, src, 6);

    //assert
    TEST_ASSERT_EQUAL_CHAR_ARRAY("Hello", dst, 6);
    (void)dst_r;
}

void test_strlcat_src_null(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 5;
    size_t ex = 6;

    //act
    dst = malloc(1024);
    memset(dst, 0, 1024);
    char *str = "0123";
    
    for(int i = 0; i < 4; i++)
      dst[i] = str[i];
    src = NULL;
    dst_return = ft_strlcat(dst, src, n);
    printf("%lu", ex);
    //assert
    (void)dst_return;
}

void test_strlcat_dst_null(void)
{
    //arrange
    char *dst;
    size_t dst_return;
    char *src;
    size_t n = 5;
    size_t ex = 6;

    //act
    dst = NULL;
    src = "0123";
    dst_return = ft_strlcat(dst, src, n);
    printf("%lu", ex);
    //assert
    (void)dst_return;
}

void test_strchr_s_null(void)
{
    //arrange
    char *returned_val;
    char *s = NULL;
    char c = 'A';
    char *returned_exp = &s[5];

    //act
    returned_val = ft_strchr(s, c);

    //asser
    TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strrchr_s_null(void)
{
    //arrange
    char *returned_val;
    char *s = NULL;
    char c = 'A';
    char *returned_exp = &s[5];

    //act
    returned_val = ft_strrchr(s, c);

    //asser
    TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strncmp4(void)
{
    //arrange
    char *s1 = NULL;
    char *s2 = "he";
    int returned_val;

    //act
    returned_val = strncmp(s1, s2, 3);

    //asser
    TEST_ASSERT_EQUAL_INT32(-1, returned_val);
}

void test_strncmp5(void)
{
    //arrange
    char *s1 = "he";
    char *s2 = NULL;
    int returned_val;

    //act
    returned_val = strncmp(s1, s2, 3);

    //asser
    TEST_ASSERT_EQUAL_INT32(-1, returned_val);
}

void test_strncmp6(void)
{
    //arrange
    char *s1 = NULL;
    char *s2 = NULL;
    int returned_val;

    //act
    returned_val = strncmp(s1, s2, 3);

    //asser
    TEST_ASSERT_EQUAL_INT32(-1, returned_val);
}

void test_memchr2(void)
{
    //arrange
    char *s = NULL;
    int c = 'e';
    size_t n = sizeof(int);
    void *returned_val;

    //act
    returned_val = ft_memchr(s, c, n);

    //asser
    TEST_ASSERT_EQUAL_INT64(0, returned_val);
}

void test_memcmp6(void)
{
  // arrange
  char *s1 = NULL;
  char *s2 = "hello";
  int returned_val;

  // act
  returned_val = ft_memcmp(s1, s2, 2);

  // asser
  TEST_ASSERT_LESS_OR_EQUAL_INT32(-1, returned_val);
}

void test_memcmp7(void)
{
  // arrange
  char *s1 = "hello";
  char *s2 = NULL;
  int returned_val;

  // act
  returned_val = ft_memcmp(s1, s2, 2);

  // asser
  TEST_ASSERT_LESS_OR_EQUAL_INT32(-1, returned_val);
}

void test_strnstr5(void)
{
  // arrange
  char s1[] = "hhello";
  char *s2 = NULL;
  char *returned_val;

  // act
  returned_val = ft_strnstr(s1, s2, 5);

  // asser
  TEST_ASSERT_EQUAL_INT64(s1, returned_val);
}

void test_strnstr6(void)
{
  // arrange
  char *s1 = NULL;
  char *s2 = NULL;
  char *returned_val;

  // act
  returned_val = ft_strnstr(s1, s2, 5);

  // asser
  TEST_ASSERT_EQUAL_INT64(s1, returned_val);
}

void test_strnstr7(void)
{
  // arrange
  char *s1 = {"a"};
  char *s2 = "hhhh";
  char *returned_val;

  // act
  returned_val = ft_strnstr(s1, s2, 5);

  // asser
  TEST_ASSERT_EQUAL_INT64(s1, returned_val);
}

void test_strdup3()
{
  //arange
  char *exp_str = NULL;
  char *s_return = "";
  //act
  s_return = ft_strdup(exp_str);
    (void)s_return;
  //assert
}

int main()
{
    
  //These tests is run without -fsanitize=address
  //RUN_TEST(test_strdup3); //This Test Should cause Segmentation
  //RUN_TEST(test_strnstr7); //This Test Should cause Segmentation
  //RUN_TEST(test_strnstr6);    //This Test Should cause Segmentation
  //RUN_TEST(test_strnstr5); //This Test Should cause Segmentation
  //RUN_TEST(test_memcmp7);//This Test Should cause Segmentation
  //RUN_TEST(test_memcmp6);//This Test Should cause Segmentation
  //RUN_TEST(test_memchr2);//This Test Should cause Segmentation
  //RUN_TEST(test_strncmp6);//This Test Should cause Segmentation
  //RUN_TEST(test_strncmp5);//This Test Should cause Segmentation
  //RUN_TEST(test_strncmp4); //This Test Should cause Segmentation
  //RUN_TEST(test_strrchr_s_null); //This Test Should cause Segmentation
  //RUN_TEST(test_strchr_s_null); //This Test Should cause Segmentation
  //RUN_TEST(test_strlcpy_dst_null); //This Test Should cause Segmentation
  //RUN_TEST(test_strlcpy_src_null); //This Test Should cause Segmentation
  
  //RUN_TEST(test_strlcat_src_null); //This Test Should cause Segmentation
  //RUN_TEST(test_strlcat_dst_null); //This Test Should cause Segmentation

  RUN_TEST(test_strlcpy_size_bigger_then_dst);
  RUN_TEST(test_memcpy_size_bigger_then_src);
  
  return (UnityEnd());
}