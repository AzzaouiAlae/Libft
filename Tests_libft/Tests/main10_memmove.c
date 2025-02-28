#include "../../libft/ft_memmove.c"
#include "../../libft/ft_bzero.c"
#include "../../libft/ft_memset.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests10_memmove.c"

#define SIZE 80


char *msg;
int pass = 0;

int main()
{
    void *s = NULL;
    void *s2 = NULL;
    void *s3 = memmove(s, s2, 3);

    (void)s3;
    /*char buff1[SIZE], *buff2;

    strcpy(buff1, "When, in course of OS");
    buff2 = buff1 + 9;
    printf("buff2: %s\n", buff2);
    ft_memmove(buff2, buff1, SIZE - 9);
    printf("result after shift: %s\n", buff2);
    printf("result after shift: %s\n", buff1);

    RUN_TEST(test_memmove_memory_overlapping_src_is_dst3_n0);
    RUN_TEST(test_memmove_memory_overlapping_dst_is_src3_n0);
    RUN_TEST(test_memmove_memory_overlapping_dst_is_src3);
    RUN_TEST(test_memmove_memory_overlapping_src_is_dst3);
    RUN_TEST(test_memmove_n_0);
    
    RUN_TEST(test_memmove_size_bigger_then_src); //buffer size overflow
    //This Test Should cause Segmentation
    //RUN_TEST(test_memmove_Test_NULL);
    //RUN_TEST(test_memmove_src_NULL);
    //RUN_TEST(test_memmove_dst_NULL); */
    return 0;
}

//cc -Wall -Werror -Wextra -std=c99 -fsanitize=address Tests/main10_memmove.c && ./a.out
