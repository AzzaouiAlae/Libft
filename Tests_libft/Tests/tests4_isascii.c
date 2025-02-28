#include "../tests.h"

void	test_isascii_0_127(void)
{
	int	exp;
	int	act;
	int	i;

	// arrange
	exp = 0;
	act = 0;
	i = 0;
	// act
	while (i <= 127)
	{
		act = ft_isascii(i);
		// assert
		TEST_ASSERT_GREATER_OR_EQUAL_INT32(1, act);
		i++;
	}
}

void	test_isascii_128_255(void)
{
	// arrange
	int exp = 0;
	int act = 0;
	int i = 128;
	// act
	while (i <= 255)
	{
		act = ft_isascii(i);
		// assert
		TEST_ASSERT_EQUAL_INT32(0, act);
		i++;
	}
}