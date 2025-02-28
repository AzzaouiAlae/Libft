#include "../../libft/ft_putchar_fd.c"
#include "../../libft/ft_putstr_fd.c"
#include "../../libft/ft_putendl_fd.c"
#include <stdio.h>

int main()
{
    int fd = open("new_line.txt", O_RDWR | O_CREAT , 0777);
    printf("%d\n", fd);
    if(fd < 3)
        printf("Fail to open file\n");
    else
        ft_putendl_fd("hello", fd);
}