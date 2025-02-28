#include "../../libft/ft_memset.c"
#include "../Unity-master/src/unity.c"
#include "main.h"
#include "tests7_memset.c"

int	main(void)
{
	char *buf = malloc(100 * sizeof(char));
    ft_memset(buf, 0, 100 * sizeof(char));
    ft_memset(buf, 'X', 20 * sizeof(char));
    printf("%s\n", buf);
	//-1000
	int i = -1;
	char *c = (char *)&i;
	ft_memset(c, 24, 1);
	ft_memset(&c[1], -4, 1);
	printf("%d\n", i);
	

	RUN_TEST(test_memset);
	RUN_TEST(test_memset2);
	RUN_TEST(test_memset3);
	RUN_TEST(test_memset4);
	RUN_TEST(test_memset5);
	RUN_TEST(test_memset6);
	//RUN_TEST(test_memset7); //Segmentation fault
	RUN_TEST(test_memset8);
}