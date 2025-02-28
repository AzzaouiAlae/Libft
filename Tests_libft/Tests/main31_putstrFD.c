#include "../../libft/ft_putchar_fd.c"
#include "../../libft/ft_putstr_fd.c"
#include <stdio.h>
#include <fcntl.h>


int fake_open(char *s, int flags, int permichine)
{
    return -1;
}

int main()
{
    int fd = fake_open("hello.txt", O_RDWR | O_APPEND | O_CREAT, 0777);
    if(fd < 2)
        printf("fail open file\n");
    else
        ft_putstr_fd("Hello\n", fd);
    return 0;
}