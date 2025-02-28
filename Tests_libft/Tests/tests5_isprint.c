#include "../tests.h"

void	test_isprint_0_31(void)
{
	int	exp;
	int	act;
	int	i;

	// arrange
	exp = 0;
	act = 0;
	i = 0;
	// act
	while (i <= 31)
	{
		act = ft_isprint(i);
		// assert
		TEST_ASSERT_EQUAL_INT32(0, act);
		i++;
	}
}

void	test_isprint_32_126(void)
{
	int	exp;
	int	act;
	int	i;

	// arrange
	exp = 0;
	act = 0;
	i = 32;
	// act
	while (i <= 126)
	{
		act = ft_isprint(i);
		// assert
		TEST_ASSERT_GREATER_OR_EQUAL_INT32(1, act);
		i++;
	}
}

void	test_isprint_127_255(void)
{
	// arrange
	int exp = 0;
	int act = 0;
	int i = 127;
	// act
	while (i <= 255)
	{
		act = ft_isprint(i);
		// assert
		TEST_ASSERT_EQUAL_INT32(0, act);
		i++;
	}
}