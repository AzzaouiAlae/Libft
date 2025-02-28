#include "../Unity-master/src/unity.c"
#include "../../libft/ft_strlen.c"
#include "main.h"
#include "tests6_strlen.c"

int main()
{
    char *str = "Hello";
    printf("'%s' has %d char\n", str, strlen(str));
    
    RUN_TEST(test_strlen);
    //RUN_TEST(test_strlen_NULL);
}