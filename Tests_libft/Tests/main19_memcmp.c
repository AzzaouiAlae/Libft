#include "../../libft/ft_memcmp.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests12_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *get_str()
{
    char ch;
    char *str = calloc(100, 1);

    for(int i = 0; i < 80; i++)
    {
        ch = getchar();
        if(ch == '\n') break;
        str[i] = ch;
    }
    return str;
}
int main()
{
    char *str1 = "0", *str2 = "hh";
    //int n = ft_memcmp(NULL, str2, 30); // segfault
    //int n = ft_memcmp(NULL, str2, 0); // return 0
    //int n = memcmp(str1, NULL, 0); // return 0
    //int n = ft_memcmp(str1, NULL, 10); // segfaulthe
    //int n = ft_memcmp(str1, str2, 0); // return 0
    //int n = ft_memcmp(NULL, NULL, 0); // return 0
    //int n = ft_memcmp(NULL, NULL, 10); // return 0
    printf("%d\n", n);
    /*
    char *str1 = get_str(), *str2 = get_str();
    int n = ft_memcmp(str1, str2, 30);
    printf("%d\n", n);*/
    return 0;
}