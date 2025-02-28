#include "../../libft/ft_putchar_fd.c"
#include <stdio.h>
#include <fcntl.h>

int main()
{
    int fd = open("a.txt", O_RDWR | O_CREAT | O_APPEND, 0777);
    
    if(fd < 0)
        printf("fail to open file");
    else
        ft_putchar_fd('A', fd);

    close(fd);
}