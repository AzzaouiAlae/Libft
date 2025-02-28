#include "../../libft/ft_memcpy.c"
#include "../../libft/ft_strlen.c"
#include "../../libft/ft_strdup.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests9_memcpy.c"

#define SIZE 80

int main()
{
    void *s = NULL;
    void *s2 = NULL;
    void *s3 = memcpy(s, s2, 3);

    (void)s3;
    /*
    char buff1[SIZE], buff2[SIZE];

    strcpy(buff1, "When, is the course of OS\n");
    ft_memcpy(buff2, buff1, SIZE);
    printf(buff2);

    RUN_TEST(test_memcpy);
    RUN_TEST(test_memcpy_all_NULL_n_0);
    //RUN_TEST(test_memcpy_dst_NULL_n_5); //Segmentation fault
    //RUN_TEST(test_memcpy_src_NULL_n_5); //Segmentation fault
    RUN_TEST(test_memcpy_all_NULL_n_5); //Segmentation fault*/
}