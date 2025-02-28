#include "../../libft/ft_strnstr.c"
#include "../../libft/ft_strlen.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests12_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *p;
    int i;

    p = strnstr(NULL, " is ", 10);
    printf("%s\n", p);

    return 0;
}