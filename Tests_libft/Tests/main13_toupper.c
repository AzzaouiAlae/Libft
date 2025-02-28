#include "../../libft/ft_toupper.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests12_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char ch;

    while(1)
    {
        ch = getchar();
        if(ch == '.') break;
        putchar(ft_toupper(ch));
    }
    return 0;
}