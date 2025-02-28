#include "../tests.h"

void test_isalnum_0_47(void)
{
  // arrange
  int act = 0;
  int i = 0;
  // act
  while (i <= 47)
  {
    act = ft_isalnum(i);

    // assert
    TEST_ASSERT_EQUAL_INT64(0, act);
    i++;
  }
}

void test_isalnum_48_57(void)
{
  // arrange
  int act = 0;
  int i = 48;
  // act
  while (i <= 57)
  {
    act = ft_isalnum(i);

    // assert
    TEST_ASSERT_GREATER_OR_EQUAL_INT32(1, act);
    i++;
  }
}

void	test_isalnum_58_to_A(void)
{
	int	exp;
	int	act;
	int	i;

	// arrange
	exp = 0;
	act = 0;
	i = 58;
	while (i < 'A')
	{
		// act
		act = ft_isalnum(i);
		// assert
		TEST_ASSERT_EQUAL_INT32(exp, act);
		i++;
	}
}

void	test_isalnum_A_to_Z(void)
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
		act = ft_isalnum(i);
		// assert
		TEST_ASSERT_GREATER_OR_EQUAL_INT32(exp, act);
		i++;
	}
}

void	test_isalnum_91_to_96(void)
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
		act = ft_isalnum(i);
		// assert
		TEST_ASSERT_EQUAL_INT32(exp, act);
		i++;
	}
}

void	test_isalnum_97_to_122(void)
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
		act = ft_isalnum(i);
		// assert
		TEST_ASSERT_GREATER_OR_EQUAL_INT32(exp, act);
		i++;
	}
}

void	test_isalnum_123_to_255(void)
{
	// arrange
	int exp = 0;
	int act = 0;
	int i = 123;
	// act
	while (i <= 255)
	{
		act = ft_isalnum(i);
		// assert
		TEST_ASSERT_EQUAL_INT32(exp, act);
		i++;
	}
}