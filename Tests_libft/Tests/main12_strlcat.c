#include "../../libft/ft_strlcat.c"
#include "../../libft/ft_bzero.c"
#include "../../libft/ft_memset.c"
#include "../../libft/ft_strlen.c"
#include "../../libft/ft_strdup.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests12_strlcat.c"
#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 = ft_strdup("welcome, "), *s2 = calloc(80,1);
    //size_t n = ft_strlcat(NULL, NULL, 0); //segfault
    //size_t n = ft_strlcat(NULL, "hello", 0); //return len src
    //size_t n = ft_strlcat(s1, NULL, 0); //segfault
    //size_t n = ft_strlcat(NULL, "Hello", 1); //segfault
    //size_t n = ft_strlcat(s1, "Hello", 1); //copy just '/0' || return source len || s1_len + s2_len + '\0'_len
    //size_t n = ft_strlcat(s1, "Hello", 6); //copy "Hello/0" || return source len
    //size_t n = ft_strlcat(s1, "Hello", 6); //copy nothing || return destsize + s2_len
    //size_t n = ft_strlcat(s1, "Hello", 100); // copy add hello to s1 || return s1_len + s2_len
    //size_t n = ft_strlcat(s1, "Hello", 11); // copy add h to s1 || return s1_len + s2_len

    printf("n='%d'\n", n);
    printf("s1='%s'\n", s1);
    free(s1);
    free(s2);
    //system("leaks main12_strlcat");
    return 0;
    /*
    char ch;

    char s1[80], s2[80];
    memset(s1, 0, 80);
    memset(s2, 0, 80);
    for(int i = 0; i < 80; i++)
    {
        ch = getchar();
        if(ch == '\n') break;
        s1[i] = ch;
    }
    
    for(int i = 0; i < 80; i++)
    {
        ch = getchar();
        if(ch == '\n') break;
        s2[i] = ch;
    }

    int len = strlcat(s2, s1, strlen(s1) + strlen(s2));

    printf("len=%d s1=%s s2=%s\n", len, s1, s2);

    */
}
