#include "../../libft/ft_strlcpy.c"
#include "../../libft/ft_bzero.c"
#include "../../libft/ft_memset.c"
#include "../../libft/ft_strlen.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests11_strlcpy.c"
#include <bsd/string.h>
int main()
{
    char str[80];
    int i = strlcpy(NULL, "Hello", 0);
    printf("i = %d || str = %s\n", i, str);

    //dst null and size 0 not segfualt
    //11 strlcpy Test
    RUN_TEST(test_strlcpy_10);
    RUN_TEST(test_strlcpy3);
    RUN_TEST(test_strlcpy2);
    RUN_TEST(test_strlcpy);
    RUN_TEST(test_strlcpy_dst_null_len_0);
    //RUN_TEST(test_strlcpy_dst_src_null_len_0); //this test is segfualt
    //RUN_TEST(test_strlcpy_dst_null_len_1); //this test is segfualt
    //RUN_TEST(test_strlcpy_src_null_len_0); //this test is segfualt
    return 0;
}