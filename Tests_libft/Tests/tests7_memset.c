#include "../tests.h"

void	test_memset(void)
{
	// arrange
	void	*buf;
	int		ch[] = {'A', 'B', 0, 1, -255, 'D', 'E'};
	void	*return_arr;
	size_t	len[] = {5, 1, 1024, 3, 4, 5, 2};
	int		i = 0;

	// act
	while (i < 7)
	{
		buf = malloc(1024);
		return_arr = ft_memset(buf, ch[i], len[i]);
		
		// assert
		TEST_ASSERT_EACH_EQUAL_CHAR(ch[i], buf, len[i]);
		TEST_ASSERT_EQUAL_INT64(return_arr, buf);
		free(buf);
		i++;
	}
}

void	test_memset2(void)
{
	// arrange
	int	act_arr[] = {-255, 3, 7};
	int	exp_arr2[] = {-255, 3, 7};

	// act
	ft_memset(act_arr, -255, 1);
	for (int i = 0; i < 3; i++)
	{
		printf("|%d|", act_arr[i]);
	}

	// assert
	TEST_ASSERT_EQUAL_INT32_ARRAY(exp_arr2, act_arr, 3);
}

void	test_memset3(void)
{
	// arrange
	char	arr[] = {'a', 'b', 'c'};
	char	arr2[] = {'0', '0', '0'};
	char	*return_value;

	// act
	return_value = ft_memset(arr, '0', sizeof(arr));
	for (int i = 0; i < 3; i++)
	{
		printf("|%c|", arr[i]);
	}

	// assert
	TEST_ASSERT_EQUAL_CHAR_ARRAY(arr2, arr, 3);
	TEST_ASSERT_EQUAL_INT64(return_value, arr);
}

void	test_memset4(void)
{
	// arrange
	int		arr[] = {1, 2054651645, 7};
	int		arr2[] = {-387389208, 2054651645, 7};
	char	*return_value;
	// 1000 to_bin 1111101000
	// 1111101000 to_1_byte 11101000
	// 4_of 11101000 = 11101000,11101000,11101000,11101000
	//  11101000,11101000,11101000,11101000 to int is -387389208

	// act
	return_value = ft_memset(arr, 1000, 4);
	for (int i = 0; i < 3; i++)
	{
		printf("|%d|", arr[i]);
	}

	// assert
	TEST_ASSERT_EQUAL_INT32_ARRAY(return_value, arr, 3);
}

void	test_memset5(void)
{
	// arrange
	int		arr[] = {1, 2054651645, 7};
	int		arr2[] = {-1, -1, 7};
	char	*return_value;

	// act
	return_value = ft_memset(arr, INT_MAX, 2 * sizeof(int));
	for (int i = 0; i < 3; i++)
	{
		printf("|%d|", arr[i]);
	}

	// assert
	TEST_ASSERT_EQUAL_INT32_ARRAY(arr2, arr, 3);
	TEST_ASSERT_EQUAL_INT64(return_value, arr);
}

void	test_memset6(void)
{
	// arrange
	int		arr[] = {1, 2054651645, 7};
	int		arr2[] = {16843009, 16843009, 7};
	char	*return_value;

	// act
	return_value = ft_memset(arr, 1, 2 * sizeof(int));
	for (int i = 0; i < 3; i++)
	{
		printf("|%u|", arr[i]);
	}

	// assert
	TEST_ASSERT_EQUAL_UINT32_ARRAY(arr2, arr, 3);
	TEST_ASSERT_EQUAL_INT64(return_value, arr);
}

void	test_memset7(void)
{
	ft_memset(NULL, 1, 2 * sizeof(int) );
}

void	test_memset8(void)
{
	ft_memset(NULL, 1, 0);
}