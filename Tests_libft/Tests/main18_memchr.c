#include "../../libft/ft_memchr.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests12_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char *p;
    char ch = '1';

    //p = ft_memchr(NULL, ch, 14); //segfault
    //p = memchr(NULL, ch, 0); // return null
    //p = memchr("HHHH0", ch, 0); // return null
    //p = ft_memchr("HHHH5", ch, 10); // return null;
    printf("%s\n", p);
    /*printf("enter a char to search: ");
    ch = getchar();
    p = memchr("this is a test", ch, 14);
    if(!p)
        printf("not found\n");
    else
        printf("%s\n", p);*/
    return 0;
}