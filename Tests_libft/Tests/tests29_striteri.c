#include "../tests.h"

void	ft_iter(unsigned int i, char *s)
{
	*s += i;
}

void	test_striteri_empty_str(void)
{
	// arrange
	char *str = strdup("");

	// act
	ft_striteri(str, &ft_iter);
	// assert
	TEST_ASSERT_EQUAL_INT32(0, strcmp(str, ""));
	free(str);
}

void	test_striteri_str_0(void)
{
	// arrange
	char *str = strdup("0");

	// act
	ft_striteri(str, &ft_iter);
	// assert
	TEST_ASSERT_EQUAL_INT32(0, strcmp(str, "0"));
	free(str);
}

void	test_striteri_str_0000000000_0123456789(void)
{
	// arrange
	char *str = strdup("0000000000");

	// act
	ft_striteri(str, &ft_iter);
	// assert
	TEST_ASSERT_EQUAL_INT32(0, strcmp(str, "0123456789"));
	free(str);
}