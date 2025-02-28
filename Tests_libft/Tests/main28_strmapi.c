#include "../../libft/ft_strmapi.c"
#include "../../libft/ft_substr.c"
#include "../../libft/ft_calloc.c"
#include "../../libft/ft_bzero.c"
#include "../../libft/ft_memset.c"
#include "../../libft/ft_strdup.c"
#include "../../libft/ft_strlen.c"
#include "../../libft/ft_putstr_fd.c"
#include "../../libft/ft_putchar_fd.c"
#include "../../libft/ft_putendl_fd.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests12_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_even(int n)
{
    if(n % 2)
        return 0;
    else   
        return 1;
}

char f(unsigned int index, char ch)
{
    if(!is_even(index))
        return tolower(ch);
    else
        return toupper(ch);
}

int main()
{
    char *s = "Hello world";
    //char *s_return = ft_strmapi(s, NULL); // hhh i found segfault in my code
    char *s_return = ft_strmapi(s, f);


     if(!s_return)
        printf("str is null\n");
    else if(!s_return[0])
        printf("str is empty\n");
    else
        printf("'%s'\n", s_return);
        
    free(s_return);
    return 0;
}