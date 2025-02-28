#include "../../libft/ft_isascii.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests4_isascii.c"

int	main(void)
{
	char ch; 
	while(1)
	{
		ch = getc(stdin);
		if(ch == '\n') continue;
		if(ch == '.') break;
		if(ft_isascii(ch)) printf("%c is ascii",ch);
		printf("\n");
	}
	RUN_TEST(test_isascii_0_127);
	RUN_TEST(test_isascii_128_255);
}