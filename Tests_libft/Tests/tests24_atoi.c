#include "../tests.h"

void test_atoi_all_pos_num(void)
{
  // arrange
  int exp_num[] = {2147483647, 1073741824, 536870912, 268435456, 134217728, 67108864, 33554432, 16777216, 8388608, 4194304, 2097152, 1048576, 524288, 262144, 131072, 65536, 32768, 16384, 8192, 4096, 2048, 1024, 512, 256, 128, 64, 32, 16, 8, 4, 2, 1, 0};
  char *exp[34] = {"2147483647", "1073741824", "536870912", "268435456", "134217728", "67108864", "33554432", "16777216", "8388608", "4194304", "2097152", "1048576", "524288", "262144", "131072", "65536", "32768", "16384", "8192", "4096", "2048", "1024", "512", "256", "128", "64", "32", "16", "8", "4", "2", "1", "0", 0};
  int act_num = 0;
  int i = 0;
  // act
  while(exp[i])
  {
    act_num = ft_atoi(exp[i]);
    // asser
    TEST_ASSERT_EQUAL_INT32(act_num, exp_num[i]);
    i++;
  }
}

void test_atoi_all_neg_num(void)
{
  // arrange
  int exp_num[] = {-2147483648, -1073741824, -536870912, -268435456, -134217728, -67108864, -33554432, -16777216, -8388608, -4194304, -2097152, -1048576, -524288, -262144, -131072, -65536, -32768, -16384, -8192, -4096, -2048, -1024, -512, -256, -128, -64, -32, -16, -8, -4, -2, -1, 0};
  char *exp[34] = {"-2147483648", "-1073741824", "-536870912", "-268435456", "-134217728", "-67108864", "-33554432", "-16777216", "-8388608", "-4194304", "-2097152", "-1048576", "-524288", "-262144", "-131072", "-65536", "-32768", "-16384", "-8192", "-4096", "-2048", "-1024", "-512", "-256", "-128", "-64", "-32", "-16", "-8", "-4", "-2", "-1", "0", 0};
  int act_num = 0;
  int i = 0;
  // act
  while(exp[i])
  {
    act_num = ft_atoi(exp[i]);
    // asser
    TEST_ASSERT_EQUAL_INT32(act_num, exp_num[i]);
    i++;
  }
}

void test_atoi_amx_int_with_aaa(void)
{
  // arrange
  int exp_num = -2147483648;
  char *exp = "-2147483648aaa";
  int act_num = 0;
  // act
  
    act_num = ft_atoi(exp);
    // asser
    TEST_ASSERT_EQUAL_INT32(act_num, exp_num);
}

void test_atoi_max_64bit(void)
{
  // arrange
  int exp_num = -1;
  char *data = "9223372036854775807";
  int act_num = 0;
  // act
  
    act_num = ft_atoi(data);
    // asser
    TEST_ASSERT_EQUAL_INT32(act_num, exp_num);
    
}

void test_atoi_mini_64bit(void)
{
  // arrange
  int exp_num = 1;
  char *data = "-9223372036854775807";
  int act_num = 0;
  // act
  
    act_num = ft_atoi(data);
    printf("|act_num = %d|", act_num );
    // asser
    TEST_ASSERT_EQUAL_INT32(act_num, exp_num);
}

void test_atoi_space(void)
{
  // arrange
  int exp_num = 469;
  char *data = "\t\n\r\v\f  469 \n";
  int act_num = 0;
  // act
  
    act_num = ft_atoi(data);
    printf("|act_num = %d|", act_num );
    // asser
    TEST_ASSERT_EQUAL_INT32(exp_num, act_num);
}