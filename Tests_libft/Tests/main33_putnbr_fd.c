#include "../../libft/ft_putchar_fd.c"
#include "../../libft/ft_putstr_fd.c"
#include "../../libft/ft_putendl_fd.c"
#include "../../libft/ft_putnbr_fd.c"
#include "../../libft/ft_strlen.c"
#include "../../libft/ft_memset.c"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = open("aa.txt", O_RDWR, 0700);
    if(fd < 3)
        printf("fail to open file\n");
    else
        ft_putnbr_fd(500, fd);
}