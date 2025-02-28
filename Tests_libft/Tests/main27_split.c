#include "../../libft/ft_strtrim.c"
#include "../../libft/ft_split.c"
#include "../../libft/ft_substr.c"
#include "../../libft/ft_strlcat.c"
#include "../../libft/ft_strjoin.c"
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

void print_words(char **strs)
{
    int i = 0;
    while(strs && strs[i])
        ft_putendl_fd(strs[i++], 1);
}

int main()
{
    //char **strs = ft_split(NULL, '\0'); //return null
    //char **strs = ft_split("hello world", ' '); //return null
    //char **strs = ft_split(NULL, '0'); //return null
    //char **strs = ft_split("", 'a'); //return empty str
    //char **strs = ft_split("", ' '); //return empty str
    char **strs = ft_split("    hello          world     ", ' ');
    if(!strs)
        printf("strs is null\n");
    else if(!strs[0])
        printf("strs is empty\n");
    else
        print_words(strs);
    
    free(strs);
    return 0;
}