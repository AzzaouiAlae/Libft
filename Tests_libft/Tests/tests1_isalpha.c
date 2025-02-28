#include "../tests.h"

void	test_isalpha_0_to_A(void)
{
	int	exp;
	int	act;
	int	i;

	// arrange
	exp = 0;
	act = 0;
	i = 0;
	while (i < 'A')
	{
		// act
		act = ft_isalpha(i);
		// assert
		TEST_ASSERT_EQUAL_INT32(exp, act);
		i++;
	}
}

void	test_isalpha_A_to_Z(void)
{
	int	exp;
	int	act;
	int	i;

	// arrange
	exp = 1;
	act = 0;
	i = 'A';
	// act
	while (i <= 'Z')
	{
		act = ft_isalpha(i);
		// assert
		TEST_ASSERT_GREATER_OR_EQUAL_INT32(exp, act);
		i++;
	}
}

void	test_isalpha_91_to_96(void)
{
	int	exp;
	int	act;
	int	i;

	// arrange
	exp = 0;
	act = 0;
	i = 91;
	// act
	while (i <= 96)
	{
		act = ft_isalpha(i);
		// assert
		TEST_ASSERT_EQUAL_INT32(exp, act);
		i++;
	}
}

void	test_isalpha_97_to_122(void)
{
	int	exp;
	int	act;
	int	i;

	// arrange
	exp = 1;
	act = 0;
	i = 97;
	// act
	while (i <= 122)
	{
		act = ft_isalpha(i);
		// assert
		TEST_ASSERT_GREATER_OR_EQUAL_INT32(exp, act);
		i++;
	}
}

void	test_isalpha_123_to_255(void)
{
	// arrange
	int exp = 0;
	int act = 0;
	int i = 123;
	// act
	while (i <= 255)
	{
		act = ft_isalpha(i);
		// assert
		TEST_ASSERT_EQUAL_INT32(exp, act);
		i++;
	}
}