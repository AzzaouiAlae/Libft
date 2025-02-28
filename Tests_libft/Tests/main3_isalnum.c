#include "../../libft/ft_isalnum.c"
#include "../../libft/ft_isalpha.c"
#include "../../libft/ft_isdigit.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests1_isalpha.c"
#include "tests3_isalnum.c"
#include <ctype.h>
#include <stdio.h>

int	main(void)
{
	char ch;

	while (1)
	{
		ch = getc(stdin);
		if (ch == '.')
			break ;
		;
		if (isalnum(ch))
			printf("%c is aphanumeric\n", ch);
	}

	RUN_TEST(test_isalnum_0_47);
	RUN_TEST(test_isalnum_48_57);
	RUN_TEST(test_isalnum_58_to_A);
	RUN_TEST(test_isalnum_A_to_Z);
	RUN_TEST(test_isalnum_91_to_96);
	RUN_TEST(test_isalnum_97_to_122);
	RUN_TEST(test_isalnum_123_to_255);

	return (0);
}