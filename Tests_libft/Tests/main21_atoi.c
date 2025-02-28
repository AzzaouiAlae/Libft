#include "../../libft/ft_atoi.c"
#include "../../libft/ft_strlcat.c"
#include "../../libft/ft_strlen.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests12_strlcat.c"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int n;
    int ft_n;
    char str[30];
    char ch[1];
    ch[0] = '0';
    for(int i = 1; i < 10; i++)
    {
        printf("------------%d-------------\n", i);
        (ch[0]) += 1;
        memset(str, 0, 30);
        str[0] = '-';
        for(int j = 0; j < 25; j++)
        {
            ft_strlcat(str, ch, j + 3);
		i++;
            printf("i=%d atoi=%d\tft_atoi=%d\n", j, atoi(str), ft_atoi(str));
        }
    }
}