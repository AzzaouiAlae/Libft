#include "../../libft/ft_isdigit.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests2_isdigit.c"
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
		if (ft_isdigit((int)ch))
			printf("%c is a digit\n", ch);
	}
	RUN_TEST(test_isdigit_0_47);
	RUN_TEST(test_isdigit_48_57);
	RUN_TEST(test_isdigit_58_255);
}