#include "tests.h"

char	*my_strdup2(const char *s1)
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

void test_tolower(void)
{
  // arrange
  int exp = 0;
  int act = 0;
  int i = 0;

  // act
  while (i <= 255)
  {
    act = ft_tolower(i);
    exp = tolower(i);

    // assert
    TEST_ASSERT_EQUAL_INT32(exp, act);
    i++;
  }
}

void test_toupper(void)
{
  // arrange
  int exp = 0;
  int act = 0;
  int i = 0;

  // act
  while (i <= 255)
  {
    act = ft_toupper(i);
    exp = toupper(i);

    // assert
    TEST_ASSERT_EQUAL_INT32(exp, act);
    i++;
  }
}



void test_strlcat(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 7;
  size_t ex = 10;

  // act
  dst = malloc(1024);
  memset(dst, 0, 1024);

  src = "0123456789";
  dst_return = ft_strlcat(dst, src, n);
  //printf("%lu", ex);
  // assert
  TEST_ASSERT_EQUAL_INT64(ex, dst_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("012345", dst, n);
  free(dst);
}

void test_strlcat2(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 7;
  size_t ex = 4;

  // act
  dst = malloc(1024);
  memset(dst,0, 1024);

  src = "0123";
  dst_return = ft_strlcat(dst, src, n);
  printf("%lu", ex);
  // assert
  TEST_ASSERT_EQUAL_INT64(ex, dst_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("0123", dst, 5);
  free(dst);
}

void test_strlcat3(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 11;
  size_t ex = 10;

  // act
  dst = malloc(1024);
  memset(dst, 0, 1024);
  char *str = "0123";

  for (int i = 0; i < 4; i++)
    dst[i] = str[i];
  src = "456789";
  dst_return = ft_strlcat(dst, src, n);
  printf("%lu", ex);
  // assert
  TEST_ASSERT_EQUAL_INT64(ex, dst_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("0123456789", dst, 11);
  free(dst);
}

void test_strlcat4(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 4;
  size_t ex = 10;

  // act
  dst = malloc(1024);
  memset(dst, 0, 1024);
  char *str = "0123";

  for (int i = 0; i < 4; i++)
    dst[i] = str[i];
  printf("%s\t|", str);
  src = "456789";
  dst_return = ft_strlcat(dst, src, n);
  printf("%lu", ex);
  // assert
  TEST_ASSERT_EQUAL_INT64(ex, dst_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("0123", dst, 5);
  free(dst);
}

void test_strlcat5(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 20;
  size_t ex = 10;

  // act
  dst = malloc(1024);
  memset(dst, 0, 1024);
  char *str = "0123";

  for (int i = 0; i < 4; i++)
    dst[i] = str[i];
  src = "456789";
  dst_return = ft_strlcat(dst, src, n);
  printf("%lu", ex);
  // assert
  TEST_ASSERT_EQUAL_INT64(ex, dst_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("0123456789", dst, 11);
  printf("|%s|", dst);
  free(dst);
}

void test_strlcat_n0(void)
{
  // arrange
  char *dst;
  size_t dst_return;
  char *src;
  size_t n = 0;
  size_t ex = 6;

  // act
  dst = malloc(1024);
  memset(dst, 0, 1024);
  char *str = "0123";

  for (int i = 0; i < 4; i++)
    dst[i] = str[i];
  src = "456789";
  dst_return = ft_strlcat(dst, src, n);
  printf("%lu", ex);
  printf("%lu", ex);

  // assert
  TEST_ASSERT_EQUAL_INT64(ex, dst_return);
  //TEST_ASSERT_EQUAL_CHAR_ARRAY("0123", dst, 11);
  free(dst);
}

void test_strlcat_100(void)
{
  // arrange
	char *str = "the cake is a lie !\0I'm hidden lol\r\n";
    char buff1[] = "there is no stars in the sky";
    size_t max = strlen("the cake is a lie !\0I'm hidden lol\r\n") + 4;
	
	// act
	size_t r = ft_strlcat(buff1, str, max);
	printf("|r=%zu|buff1=%s|max=%zu|", r, buff1, max);
  	// assert
  	TEST_ASSERT_EQUAL_INT64(42, r);
	TEST_ASSERT_EQUAL_CHAR_ARRAY("there is no stars in the sky", buff1, 29);
}

void test_strchr_plus256(void)
{
  // arrange
  char *returned_val;
  char *s = "tripouille";
  char c = 't';
  char *returned_exp = s;

  // act
  returned_val = ft_strchr(s, c + 256);

  // asser
  TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strchr(void)
{
  // arrange
  char *returned_val;
  char *s = "hello";
  char c = 'l';
  char *returned_exp = &s[2];

  // act
  returned_val = ft_strchr(s, c);

  // asser
  TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strchr2(void)
{
  // arrange
  char *returned_val;
  char *s = "hello";
  char c = '5';
  char *returned_exp = NULL;

  // act
  returned_val = ft_strchr(s, c);

  // asser
  TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strchr3_find_null(void)
{
  // arrange
  char *returned_val;
  char *s = "hello";
  char c = '\0';
  char *returned_exp = &s[5];

  // act
  returned_val = ft_strchr(s, c);

  // asser
  TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strrchr(void)
{
  // arrange
  char *returned_val;
  char *s = "hello";
  char c = 'l';
  char *returned_exp = &s[3];

  // act
  returned_val = ft_strrchr(s, c);

  // asser
  TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strrchr2(void)
{
  // arrange
  char *returned_val;
  char *s = "hello";
  char c = '5';
  char *returned_exp = NULL;

  // act
  returned_val = ft_strrchr(s, c);

  // asser
  TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strrchr3_find_null(void)
{
  // arrange
  char *returned_val;
  char *s = "hello";
  char c = '\0';
  char *returned_exp = &s[5];

  // act
  returned_val = ft_strrchr(s, c);

  // asser
  TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_strncmp(void)
{
  // arrange
  char *s1 = "he";
  char *s2 = "hello";
  int returned_val;

  // act
  returned_val = ft_strncmp(s1, s2, 2);

  // asser
  TEST_ASSERT_EQUAL_INT32(0, returned_val);
}

void test_strncmp_empty_str(void)
{
  // arrange
  int returned_val;

  // act
  returned_val = ft_strncmp("", "", 42);

  // asser
  TEST_ASSERT_EQUAL_INT32(0, returned_val);
}

void test_strncmp2(void)
{
  // arrange
  char *s1 = "he";
  char *s2 = "hello";
  int returned_val;

  // act
  returned_val = ft_strncmp(s1, s2, 3);

  // asser
  TEST_ASSERT_LESS_OR_EQUAL_INT32(-1, returned_val);
}

void test_strncmp3(void)
{
  // arrange
  char *s1 = "hello";
  char *s2 = "he";
  int returned_val;

  // act
  returned_val = ft_strncmp(s1, s2, 3);

  // asser
  TEST_ASSERT_GREATER_OR_EQUAL_INT32(1, returned_val);
}

void test_strncmp7(void)
{
  // arrange
  char s1[] = {(char)200, (char)200};
  char *s2 = "hello";
  int returned_val;

  // act
  returned_val = ft_strncmp(s1, s2, 2);

  // asser
  TEST_ASSERT_GREATER_OR_EQUAL_INT32(1, returned_val);
}

void test_strncmp8(void)
{
  // arrange
  char s1[] = "hello";
  char *s2 = "hello";
  int returned_val;

  // act
  returned_val = ft_strncmp(s1, s2, 2);

  // asser
  TEST_ASSERT_EQUAL_INT32(0, returned_val);
}

void test_memchr1(void)
{
  // arrange
  char *s = "hello";
  int c = 'e';
  size_t n = sizeof(int);
  void *returned_val;

  // act
  returned_val = ft_memchr(s, c, n);

  // asser
  TEST_ASSERT_EQUAL_INT64(&s[1], returned_val);
}

void test_memchr3(void)
{
  // arrange
  int s[] = {100, 200, 44, 500};
  int c = 300;
  size_t n = 12;
  void *returned_val;

  // act
  returned_val = ft_memchr(s, c, n);

  // asser
  TEST_ASSERT_EQUAL_INT64(&s[2], returned_val);
}

void test_memchr4(void)
{
  // arrange
  int s[] = {100, 200, 44, 301};
  int c = 300;
  size_t n = 12;
  void *returned_val;

  // act
  returned_val = ft_memchr(s, c, n);

  // asser
  TEST_ASSERT_EQUAL_INT64(&s[2], returned_val);
}

void test_memchr5(void)
{
  // arrange
  char *returned_val;
  char *s = "hello";
  char c = 'l';
  char *returned_exp = &s[2];

  // act
  returned_val = ft_memchr(s, c, 5);

  // asser
  TEST_ASSERT_EQUAL_INT64(returned_exp, returned_val);
}

void test_memcmp(void)
{
  // arrange
  char *s1 = "he";
  char *s2 = "hello";
  int returned_val;

  // act
  returned_val = ft_memcmp(s1, s2, 2);

  // asser
  TEST_ASSERT_EQUAL_INT32(0, returned_val);
}

void test_memcmp2(void)
{
  // arrange
  char *s1 = "he";
  char *s2 = "hello";
  int returned_val;

  // act
  returned_val = ft_memcmp(s1, s2, 3);

  // asser
  TEST_ASSERT_LESS_OR_EQUAL_INT32(-1, returned_val);
}

void test_memcmp3(void)
{
  // arrange
  char *s1 = "hello";
  char *s2 = "he";
  int returned_val;

  // act
  returned_val = ft_memcmp(s1, s2, 3);

  // asser
  TEST_ASSERT_GREATER_OR_EQUAL_INT32(1, returned_val);
}

void test_memcmp4(void)
{
  // arrange
  char s1[] = {(char)200, (char)200};
  char *s2 = "hello";
  int returned_val;

  // act
  returned_val = ft_memcmp(s1, s2, 2);

  // asser
  printf("%d", returned_val);
  TEST_ASSERT_GREATER_OR_EQUAL_INT32(1, returned_val);
}

void test_memcmp5(void)
{
  // arrange
  char s1[] = "hello";
  char *s2 = "hello";
  int returned_val;

  // act
  returned_val = ft_memcmp(s1, s2, 2);

  // asser
  TEST_ASSERT_EQUAL_INT32(0, returned_val);
}

void test_memcmp9(void)
{
  // arrange
  char s1[] = "hello";
  char *s2 = "hello";
  int returned_val;

  // act
  returned_val = ft_memcmp(s1, s2, 0);

  // asser
  TEST_ASSERT_EQUAL_INT32(0, returned_val);
}

void test_strnstr_10(void)
{
  // arrange
  char s1[] = "aaabcabcd";
  char *s2 = "aaabc";
  char *returned_val;

  // act
  returned_val = ft_strnstr(s1, s2, 5);

  // asser
  TEST_ASSERT_EQUAL_INT64(s1, returned_val);
}

void test_strnstr(void)
{
  // arrange
  char s1[] = "hello";
  char *s2 = "";
  char *returned_val;

  // act
  returned_val = ft_strnstr(s1, s2, 0);

  // asser
  TEST_ASSERT_EQUAL_INT64(s1, returned_val);
}

void test_strnstr2(void)
{
  // arrange
  char s1[] = "hello";
  char *s2 = "";
  char *returned_val;

  // act
  returned_val = ft_strnstr(s1, s2, 5);

  // asser
  TEST_ASSERT_EQUAL_INT64(s1, returned_val);
}

void test_strnstr3(void)
{
  // arrange
  char s1[] = "hello";
  char *s2 = "hh";
  char *returned_val;

  // act
  returned_val = ft_strnstr(s1, s2, 5);

  // asser
  TEST_ASSERT_EQUAL_INT64(0, returned_val);
}

void test_strnstr4(void)
{
  // arrange
  char s1[] = "hhello";
  char *s2 = "hh";
  char *returned_val;

  // act
  returned_val = ft_strnstr(s1, s2, 5);

  // asser
  TEST_ASSERT_EQUAL_INT64(s1, returned_val);
}

void test_strnstr8(void)
{
  // arrange
  char s1[] = "hhello";
  char *s2 = "haaa";
  char *returned_val;

  // act
  returned_val = ft_strnstr(s1, s2, 1);

  // asser
  TEST_ASSERT_EQUAL_INT64(0, returned_val);
}

void test_strnstr9(void)
{
  // arrange
  char s1[] = "MZIRIBMZIRIBMZE123";
  char *s2 = "MZIRIBMZE";
  size_t max = strlen(s2);

  // act
    char *i1 = ft_strnstr(s1, s2, max);
    //char *i2 = ft_strnstr(s1, s2, max);

  // asser
  //printf("|%s|", i1);
  TEST_ASSERT_EQUAL_INT64(0, i1);
}

void test_calloc(void)
{
    // arrange
    size_t count = 10, size = sizeof(char);
    char *ch;
    // act
    ch = ft_calloc(count, size);
    // asser
    ch[9] = 'a';
    TEST_ASSERT_EQUAL_INT32(0, strlen(ch));
    TEST_ASSERT_EACH_EQUAL_CHAR(0, ch, count * size - 1);
    TEST_ASSERT_EQUAL_CHAR('a', ch[9]);
    free(ch);
}

void test_calloc2_count0_malloc1byte(void)
{
    // arrange
    size_t count = 0, size = sizeof(char);
    char *ch;
    // act
    ch = ft_calloc(count, size);
    // asser
    ch[0] = 'a';
    TEST_ASSERT_NOT_EQUAL_INT64(0, ch);
    free(ch);
}

void test_calloc_size0_malloc1byte(void)
{
    // arrange
    size_t count = 5, size = 0;
    char *ch;
    // act
    ch = ft_calloc(count, size);
    // asser
    ch[0] = 'a';
    TEST_ASSERT_NOT_EQUAL_INT64(0, ch);
    free(ch);
}

void test_calloc4_size0_count0_malloc1byte(void)
{
    // arrange
    size_t count = 0, size = 0;
    int *nums;
    // act
    nums = ft_calloc(count, size);
    // asser
    ((char *)nums)[0] = (char)10;
    TEST_ASSERT_NOT_EQUAL_INT64(0, nums);
    free(nums);
}

void test_calloc_test_b0_while100(void)
{
    // arrange
    size_t count = 10, size = sizeof(char);
    char *ch;
    int i = 0;
    // act
    while(i == 0)
    {
      ch = ft_calloc(count, size);
      // asser
      ch[9] = 'a';
      TEST_ASSERT_EQUAL_INT32(0, strlen(ch));
      TEST_ASSERT_EACH_EQUAL_CHAR(0, ch, count * size - 1);
      TEST_ASSERT_EQUAL_CHAR('a', ch[9]);
      i++;
      free(ch);
    }
}

void test_strdup1()
{
  //arange
  char *str = "Hello";

  //act
  char *s_return = ft_strdup(str);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY(str, s_return, 6);
  free(s_return);
}

void test_strdup2()
{
  //arange
  char *exp_str = "";

  //act
  char *s_return = ft_strdup(exp_str);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_str, s_return, 1);
  free(s_return);
}

void test_strdup4()
{
  //arange
  char *exp_str = "Hello\0world";

  //act
  char *s_return = ft_strdup(exp_str);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_str, s_return, 6);
  free(s_return);
}

void test_strdup5()
{
  //arange
  char *exp_str = "Hello world";

  //act
  char *s_return = ft_strdup(exp_str);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_str, s_return, 6);
  free(s_return);
}

void test_substr()
{
  //arange
  char *str = "Bonjour comment ca va?";
  char *exp_str = "ur comme";

  //act
  char *s_return = ft_substr(str, 5, 8);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_str, s_return, 8);
  free(s_return);
}

void test_substr_SIZE_T_MAX()
{
  //arange
  char *str = "hola";
  char *exp_str = "hola";

  //act
  char *s_return = ft_substr(str, (unsigned int)0, SIZE_MAX);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_str, s_return, 5);
  free(s_return);
}

void test_substr_len_great_then_s()
{
  //arange
  char *str = "Bonjour comment ca va?";
  char *exp_str = "ur comment ca va?";

  //act
  char *s_return = ft_substr(str, 5, 100);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_str, s_return, 8);
  s_return[17] = 'a';
  free(s_return);
}

void test_substr_s_null()
{
  //arange
  char *str = NULL;

  //act
  char *s_return = ft_substr(str, 5, 100);

  //assert
  TEST_ASSERT_EQUAL_INT64(0, s_return);
  free(s_return);
}

void test_substr_start5_len2()
{
  //arange
  char *str = "Bonjour comment ca va?";
  char *exp_str = "ur";

  //act
  char *s_return = ft_substr(str, 5, 2);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_str, s_return, 3);
  s_return[2] = 'a';
  free(s_return);
}

void test_substr_start_greater_then_s_len()
{
  //arange
  char *str = "Bonjour comment ca va?";

  //act
  char *s_return = ft_substr(str, 23, 2);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("", s_return, 3);
  free(s_return);
}

void test_strjoin()
{
  //arange
  char *s1 = "123";
  char *s2 = "456";

  //act
  char *s_return = ft_strjoin(s1, s2);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("123456", s_return, 7);
  free(s_return);
}

void test_strjoin_s1_null()
{
  //arange
  char *s1 = NULL;
  char *s2 = "456";

  //act
  char *s_return = ft_strjoin(s1, s2);

  //assert
  TEST_ASSERT_EQUAL_INT64(0, s_return);
  free(s_return);
}

void test_strjoin_s2_null()
{
  //arange
  char *s1 = "123";
  char *s2 = NULL;

  //act
  char *s_return = ft_strjoin(s1, s2);

  //assert
  TEST_ASSERT_EQUAL_INT64(0, s_return);
  free(s_return);
}

void test_strjoin_s1_s2_null()
{
  //arange
  char *s1 = NULL;
  char *s2 = NULL;

  //act
  char *s_return = ft_strjoin(s1, s2);

  //assert
  TEST_ASSERT_EQUAL_INT64(0, s_return);
  free(s_return);
}

void test_strtrim_start_end()
{
  //arange
  char *s1 = "0012345678900";
  char *s2 = "019";

  //act
  char *s_return = ft_strtrim(s1, s2);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("2345678", s_return, 8);
  free(s_return);
}

void test_strtrim_s1_NULL()
{
  //arange
  char *s1 = NULL;
  char *s2 = "019";

  //act
  char *s_return = ft_strtrim(s1, s2);

  //assert
  TEST_ASSERT_EQUAL_INT64(0, s_return);
  free(s_return);
}

void test_strtrim_start()
{
  //arange
  char *s1 = "00123456789";
  char *s2 = "01";

  //act
  char *s_return = ft_strtrim(s1, s2);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("23456789", s_return, 8);
  free(s_return);
}

void test_strtrim_SET_NULL()
{
  //arange
  char *s1 = "123456789";
  char *s2 = NULL;
  
  //act
  char *s_return = ft_strtrim(s1, s2);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("123456789", s_return, 8);
  free(s_return);
}

void test_strtrim_set_not_in_s1()
{
  //arange
  char *s1 = "123456789";
  char *s2 = "0";

  //act
  char *s_return = ft_strtrim(s1, s2);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("123456789", s_return, 8);
  free(s_return);
}

void test_strtrim_big_s1()
{
  //arange
  char *s1 = "                                Hello world                                ";
  char *s2 = " ";

  //act
  char *s_return = ft_strtrim(s1, s2);

  //assert
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("Hello world", s_return, 13);
  free(s_return);
}

void test_strtrim_s1_is_32_s2()
{
  //arange
  char *s1 = "                               ";
  char *s2 = " ";

  //act
  char *s_return = ft_strtrim(s1, s2);

  //assert
  printf("%p", s_return);
  TEST_ASSERT_NOT_EQUAL_INT64(0, s_return);
  TEST_ASSERT_EQUAL_CHAR_ARRAY("", s_return, 1);
  free(s_return);
}

void test_split_simple()
{
  //arrange
  char *s = "Compiling is the process";
  char c = ' ';
  char **return_s;
  char **exp_s;
  int i = 0;
  int len = 0;
  exp_s = calloc(5, sizeof(char*));
  exp_s[0] = my_strdup2("Compiling");
  exp_s[1] = my_strdup2("is");
  exp_s[2] = my_strdup2("the");
  exp_s[3] = my_strdup2("process");
  exp_s[4] = 0;
  //act
  return_s = ft_split(s, c);

  //assert
  while(i < 4)
  {
    len = strlen(exp_s[i]);
    TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_s[i], return_s[i], len);
    i++;
  }
  int count = 0;
  while(count < 4)
  {
    free(exp_s[count]);
    free(return_s[count++]);
  }
  free(exp_s);
  free(return_s);
}

void test_split_many_sep()
{
  //arrange
  char *s = "    Compiling    is   the   process    ";
  char c = ' ';
  char **return_s;
  char **exp_s;
  int i = 0;
  int len = 0;
  exp_s = calloc(5, sizeof(char*));
  exp_s[0] = my_strdup2("Compiling");
  exp_s[1] = my_strdup2("is");
  exp_s[2] = my_strdup2("the");
  exp_s[3] = my_strdup2("process");
  exp_s[4] = 0;
  //act
  return_s = ft_split(s, c);

  //assert
  while(i < 4)
  {
    len = strlen(exp_s[i]);
    TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_s[i], return_s[i], len);
    i++;
  }
  int count = 0;
  while(count < 5)
  {
    free(exp_s[count]);
    free(return_s[count++]);
  }
  free(exp_s);
  free(return_s);
}

void test_split_1_word()
{
  //arrange
  char *s = "00000Compiling    is   the   process000";
  char c = '0';
  char **return_s = NULL;
  char **exp_s;
  int i = 0;
  exp_s = calloc(2, sizeof(char*));
  exp_s[0] = my_strdup2("Compiling    is   the   process\0");
  exp_s[1] = 0;

  //act
  return_s = ft_split(s, c);

  //assert
  while(i < 1)
  {
    TEST_ASSERT_EQUAL_INT32(strlen(exp_s[i]), strlen(return_s[i]));
    TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_s[i], return_s[i], 32);
    free(return_s[i]);
    free(exp_s[i]);
    i++;
  }
  free(return_s);
  free(exp_s);
}

void test_split_s_null()
{
  //arrange
  char *s = NULL;
  char c = '0';
  char **return_s = NULL;
  
  //act
  return_s = ft_split(s, c);

  //assert
  TEST_ASSERT_EQUAL_INT64(0, return_s);
}

void test_split_me()
{
  //arrange
  char *s = "--1-2--3---4----5-----42";
  char c = '-';
  char **return_s;
  char *exp_s[] = {"1", "2", "3" , "4", "5", "42"};
  int i = 0;
  size_t len;
  
  //act
  return_s = ft_split(s, c);

  //assert
  while(i < 6)
  {
    len = strlen(exp_s[i]);
    TEST_ASSERT_EQUAL_INT32(strlen(exp_s[i]), strlen(return_s[i]));
    TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_s[i], return_s[i], len);
    i++;
  }
  int count = 0;
  while(count < 6)
    free(return_s[count++]);
  free(return_s);
}

void test_split_c_is_null()
{
  //arrange
  char *s = "Compiling    is   the   process";
  char c = '\0';
  char **return_s = NULL;
  char **exp_s;
  int i = 0;
  exp_s = calloc(2, sizeof(char*));
  exp_s[0] = my_strdup2("Compiling    is   the   process\0");
  exp_s[1] = 0;

  //act
  return_s = ft_split(s, c);

  //assert
  while(i < 1)
  {
    TEST_ASSERT_EQUAL_INT32(strlen(exp_s[i]), strlen(return_s[i]));
    TEST_ASSERT_EQUAL_CHAR_ARRAY(exp_s[i], return_s[i], 32);
    free(return_s[i]);
    free(exp_s[i]);
    i++;
  }
  free(return_s);
  free(exp_s);
}

void test_itoa_positive_num(void)
{
  // arrange
  int num[] = {2147483647, 1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1, 0};
  char *exp[34] = {"2147483647", "1073741824", "536870912", "268435456", "134217728", "67108864", "33554432", "16777216", "8388608", "4194304", "2097152", "1048576", "524288", "262144", "131072", "65536", "32768", "16384", "8192", "4096", "2048", "1024", "512", "256", "128", "64", "32", "16", "8", "4", "2", "1", "0", 0};
  char *act_num;
  int i = 0;
  // act
  while(i < 33)
  {
    act_num = ft_itoa(num[i]);
    // asser
    //printf("|%s|%d|", act_num, num[i]);
    TEST_ASSERT_EQUAL_CHAR_ARRAY(exp[i], act_num, strlen(exp[i]));
    i++;
    free(act_num);
  }
}

void test_itoa_negative_num(void)
{
  // arrange
  int num[] = {-2147483648, -1073741824, -536870912, -268435456, -134217728, -67108864, -33554432, -16777216, -8388608, -4194304, -2097152, -1048576, -524288, -262144, -131072, -65536, -32768, -16384, -8192, -4096, -2048, -1024, -512, -256, -128, -64, -32, -16, -8, -4, -2, -1, 0};
  char *exp[34] = {"-2147483648", "-1073741824", "-536870912", "-268435456", "-134217728", "-67108864", "-33554432", "-16777216", "-8388608", "-4194304", "-2097152", "-1048576", "-524288", "-262144", "-131072", "-65536", "-32768", "-16384", "-8192", "-4096", "-2048", "-1024", "-512", "-256", "-128", "-64", "-32", "-16", "-8", "-4", "-2", "-1", "0", 0};
  char *act_num;
  int i = 0;
  // act
  while(i < 33)
  {
    act_num = ft_itoa(num[i]);
    // asser
    //printf("|act_num=%s|%d|", act_num, num[i]);
    TEST_ASSERT_EQUAL_CHAR_ARRAY(exp[i], act_num, strlen(exp[i]));
    i++;
    free(act_num);
  }
}

void test_strncmp10(void)
{
  // arrange
  char s1[] = "t";
  char *s2 = "";
  int returned_val;

  // act
  returned_val = ft_strncmp(s1, s2, 0);

  // asser
  TEST_ASSERT_EQUAL_INT32(0, returned_val);
}

char add(unsigned int i, char c) {
	return (char)(i + c);
}

void test_strmapi(void)
{
  // arrange
  char s1[] = "";
  char *s2 = "";
  char *returned_val;

  // act
  returned_val = ft_strmapi(s1, add);

  // asser
  TEST_ASSERT_NOT_EQUAL_INT64(0, (size_t)returned_val);
  TEST_ASSERT_EQUAL_CHAR_ARRAY(s2, returned_val, 1);
  free(returned_val);
}

void test_strmapi2(void)
{
  // arrange
  char s1[] = "abcd0 ";
  char *s2 = "aceg4%";
  char *returned_val;

  // act
  returned_val = ft_strmapi(s1, add);

  // asser
  TEST_ASSERT_NOT_EQUAL_INT64(0, (size_t)returned_val);
  TEST_ASSERT_EQUAL_CHAR_ARRAY(s2, returned_val, 7);
  free(returned_val);
}


void setUp(void)
{
  
}

void tearDown(void)
{
}

int main()
{
  //#LIBC functions
  //-1 isalpha Test
  RUN_TEST(test_isalpha_0_to_A);
  RUN_TEST(test_isalpha_A_to_Z);
  RUN_TEST(test_isalpha_91_to_96);
  RUN_TEST(test_isalpha_97_to_122);
  RUN_TEST(test_isalpha_123_to_255);

  //-2 isdigit Test
  RUN_TEST(test_isdigit_0_47);
  RUN_TEST(test_isdigit_48_57);
  RUN_TEST(test_isdigit_58_255);

  //-3 isalnum Test
  RUN_TEST(test_isalnum_0_47);
  RUN_TEST(test_isalnum_48_57);
  RUN_TEST(test_isalnum_58_to_A);
  RUN_TEST(test_isalnum_A_to_Z);
  RUN_TEST(test_isalnum_91_to_96);
  RUN_TEST(test_isalnum_97_to_122);
  RUN_TEST(test_isalnum_123_to_255);

  //-4 isascii Test
  RUN_TEST(test_isascii_0_127);
  RUN_TEST(test_isascii_128_255);

  //-5 isprint Test
  RUN_TEST(test_isprint_0_31);
  RUN_TEST(test_isprint_32_126);
  RUN_TEST(test_isprint_127_255);

  //-6 strlen Test
  RUN_TEST(test_strlen);
  //RUN_TEST(test_strlen_NULL);

 //-7 memset Test
  RUN_TEST(test_memset);
  RUN_TEST(test_memset2);
  RUN_TEST(test_memset3);
  RUN_TEST(test_memset4);
  RUN_TEST(test_memset5);
  RUN_TEST(test_memset6);

  //-8 bzero Test
  RUN_TEST(test_bzero);

  //-9 memcpy Test
  RUN_TEST(test_memcpy);
  RUN_TEST(test_memcpy_all_NULL_n_0);
  //RUN_TEST(test_memcpy_dst_NULL_n_5); //Segmentation fault
  //RUN_TEST(test_memcpy_src_NULL_n_5); //Segmentation fault
  //RUN_TEST(test_memcpy_all_NULL_n_5); //Segmentation fault

  //10 memmove Test
  RUN_TEST(test_memmove_memory_overlapping_src_is_dst3_n0);
  RUN_TEST(test_memmove_memory_overlapping_dst_is_src3_n0);
  RUN_TEST(test_memmove_memory_overlapping_dst_is_src3);
  RUN_TEST(test_memmove_memory_overlapping_src_is_dst3);
  RUN_TEST(test_memmove_n_0);
  //RUN_TEST(test_memmove_size_bigger_then_src); //buffer size overflow
  //RUN_TEST(test_memmove_Test_NULL); //This Test Should cause Segmentation
  //RUN_TEST(test_memmove_src_NULL); //This Test Should cause Segmentation
  //RUN_TEST(test_memmove_dst_NULL); //This Test Should cause Segmentation

  //11 strlcpy Test
  RUN_TEST(test_strlcpy_10);
  RUN_TEST(test_strlcpy3);
  RUN_TEST(test_strlcpy2);
  RUN_TEST(test_strlcpy);
  RUN_TEST(test_strlcpy_dst_null_len_0);
  //RUN_TEST(test_strlcpy_dst_src_null_len_0); //this test is segfualt
  //RUN_TEST(test_strlcpy_dst_null_len_1); //this test is segfualt
  //RUN_TEST(test_strlcpy_src_null_len_0); //this test is segfualt



  //-24 atoi Test
  RUN_TEST(test_atoi_all_pos_num);
  RUN_TEST(test_atoi_all_neg_num);
  RUN_TEST(test_atoi_amx_int_with_aaa);
  RUN_TEST(test_atoi_max_64bit);
  RUN_TEST(test_atoi_mini_64bit);
  RUN_TEST(test_atoi_space);

  

  RUN_TEST(test_strmapi2);
  RUN_TEST(test_strmapi);
  RUN_TEST(test_strncmp10);
  RUN_TEST(test_strncmp_empty_str);
	RUN_TEST(test_strlcat_100);

  RUN_TEST(test_itoa_negative_num);
  RUN_TEST(test_itoa_positive_num);
  RUN_TEST(test_split_me);
  RUN_TEST(test_split_c_is_null);
  RUN_TEST(test_split_s_null);
  RUN_TEST(test_split_1_word);
  RUN_TEST(test_split_many_sep);
  RUN_TEST(test_split_simple);

  RUN_TEST(test_strtrim_big_s1);
  RUN_TEST(test_strtrim_set_not_in_s1);
  RUN_TEST(test_strtrim_SET_NULL);
  RUN_TEST(test_strtrim_start);
  RUN_TEST(test_strtrim_s1_NULL);
  RUN_TEST(test_strtrim_start_end);
  RUN_TEST(test_strtrim_s1_is_32_s2);

  RUN_TEST(test_strjoin_s1_s2_null);
  RUN_TEST(test_strjoin_s2_null);
  RUN_TEST(test_strjoin_s1_null);
  RUN_TEST(test_strjoin);
  RUN_TEST(test_substr_start_greater_then_s_len);
  RUN_TEST(test_substr_len_great_then_s);
  RUN_TEST(test_substr_s_null);
  RUN_TEST(test_substr_start5_len2);
  RUN_TEST(test_substr);
  RUN_TEST(test_substr_SIZE_T_MAX);
  RUN_TEST(test_strdup5);
  RUN_TEST(test_strdup4);
  RUN_TEST(test_strdup2);
  RUN_TEST(test_strdup1);
  RUN_TEST(test_calloc_test_b0_while100);
  RUN_TEST(test_calloc_test_b0_while100);
  RUN_TEST(test_calloc4_size0_count0_malloc1byte);
  RUN_TEST(test_calloc_size0_malloc1byte);
  RUN_TEST(test_calloc2_count0_malloc1byte);
  RUN_TEST(test_calloc);
  RUN_TEST(test_strnstr9);
  RUN_TEST(test_strnstr8);
  RUN_TEST(test_strnstr4);
  RUN_TEST(test_strnstr3);
  RUN_TEST(test_strnstr2);
  RUN_TEST(test_strnstr);
  RUN_TEST(test_strnstr_10);
  RUN_TEST(test_memcmp9);
  RUN_TEST(test_memcmp5);
  RUN_TEST(test_memcmp4);
  RUN_TEST(test_memcmp3);
  RUN_TEST(test_memcmp2);
  RUN_TEST(test_memcmp);
  RUN_TEST(test_memchr5);
  RUN_TEST(test_memchr4);
  RUN_TEST(test_memchr3);
  RUN_TEST(test_memchr1);
  RUN_TEST(test_strncmp8);
  RUN_TEST(test_strncmp7);
  RUN_TEST(test_strncmp3);
  RUN_TEST(test_strncmp2);
  RUN_TEST(test_strncmp);
  RUN_TEST(test_strrchr3_find_null);
  RUN_TEST(test_strrchr2);
  RUN_TEST(test_strrchr);
  RUN_TEST(test_strchr3_find_null);
  RUN_TEST(test_strchr2);
  RUN_TEST(test_strchr_plus256);
  RUN_TEST(test_strchr);
  RUN_TEST(test_tolower);
  RUN_TEST(test_toupper);
  RUN_TEST(test_strlcat_n0);
  RUN_TEST(test_strlcat5);
  RUN_TEST(test_strlcat4);
  RUN_TEST(test_strlcat3);
  RUN_TEST(test_strlcat2);
  RUN_TEST(test_strlcat);
  //-20 striteri Test
  RUN_TEST(test_striteri_empty_str);
  RUN_TEST(test_striteri_str_0);
  RUN_TEST(test_striteri_str_0000000000_0123456789);
  return (UnityEnd());
}