#include "../../libft/ft_substr.c"
#include "../../libft/ft_calloc.c"
#include "../../libft/ft_bzero.c"
#include "../../libft/ft_memset.c"
#include "../../libft/ft_strdup.c"
#include "../../libft/ft_strlen.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests12_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{   
    char *str1 = "hello";
    char *str = ft_substr("aaaa", 0, 2);
    if(!str)
        printf("str is null\n");
    else
        printf("%s\n", str);
    /*
    char *str1 = "hello";
    char *str = ft_substr(NULL, 100, 10);
    if(!str)
        printf("str is null\n");*/
    /*char *str1 = "hello";
    char *str = ft_substr(NULL, 100, 10);
    if(!str)
        printf("str is null\n");*/
    /*
    char *str1 = "hello";
    char *str = ft_substr(str1, 100, 10);
    if(!str[0])
        printf("str is empty\n");*/
    return 0;
}