#include "../../libft/ft_strrchr.c"
#include "../../libft/ft_strlen.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests12_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *str1;

    //str1 = ft_strrchr(NULL, '\0'); // this test is segfault
    if(!str1)
        printf("s is null\n");

    /*char *str2 = "hhhhh";
    str1 = strrchr(str2, '\0');
    if(!str1)
        printf("s is null\n");
    else
        printf("str=%p  str2=%p\n", str1, &str2[5]);*/
    /*str = ft_strrchr("hhhh", ' ');
    if(!str)
        printf("s is null\n");

    str = ft_strrchr("this is a test", ' ');
    printf("%s\n", str);*/
    return 0;
}