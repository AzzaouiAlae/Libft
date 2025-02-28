#include "../Unity-master/src/unity.c"
#include "../../libft/ft_isprint.c"
#include "main.h"
#include "tests5_isprint.c"


int	main(void)
{
    char ch;
    char clean_buffer;

    while(1)
    {
        scanf("%d", &ch);
        if(ch == '.') break; // . is 46 in ascii
        if(isprint(ch)) printf("the ascii %d is '%c'\n", ch, ch);
        clean_buffer = getc(stdin);
    }
	RUN_TEST(test_isprint_0_31);
	RUN_TEST(test_isprint_32_126);
	RUN_TEST(test_isprint_127_255);
    return 0;
}