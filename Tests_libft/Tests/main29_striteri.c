#include "../../libft/ft_striteri.c"
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

void f(unsigned int index, char *ch)
{
    if(!is_even(index))
        *ch = tolower(*ch);
    else
        *ch = toupper(*ch);
}

int main()
{
    char *s = ft_strdup("hello world");
    //char *s_return = ft_strmapi(s, NULL); // hhh i found segfault in my code
    ft_striteri(s, f);


     if(!s)
        printf("str is null\n");
    else if(!s[0])
        printf("str is empty\n");
    else
        printf("'%s'\n", s);
        
    free(s);
    return 0;
}