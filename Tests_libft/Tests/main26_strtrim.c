#include "../../libft/ft_strtrim.c"
#include "../../libft/ft_substr.c"
#include "../../libft/ft_strlcat.c"
#include "../../libft/ft_strjoin.c"
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
    //char *str = ft_strtrim(NULL, NULL); //return null
    //char *str = ft_strtrim("hello", NULL); //return null
    //char *str = ft_strtrim(NULL, "Hello"); //return null
    //char *str = ft_strtrim("", ""); //return empty str
    //char *str = ft_strtrim("", ""); //return empty str
    char *str = ft_strtrim("  Hello   ", " ");
    if(!str)
        printf("str is null\n");
    else if(!str[0])
        printf("str is empty\n");
    else
        printf("'%s'\n", str);
        
    free(str);
    return 0;
}