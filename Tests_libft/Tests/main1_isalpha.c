#include "../../libft/ft_isalpha.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests1_isalpha.c"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char ch;

	for (;;)
	{
		ch = getchar();
		if (ch == '.')
			break ;
		if (isalpha(ch))
			printf("%c is a letter\n", ch);
	}
	RUN_TEST(test_isalpha_0_to_A);
	RUN_TEST(test_isalpha_A_to_Z);
	RUN_TEST(test_isalpha_91_to_96);
	RUN_TEST(test_isalpha_97_to_122);
	RUN_TEST(test_isalpha_123_to_255);
	return (0);
}