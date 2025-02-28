#include "../../libft/ft_lstnew_bonus.c"
#include "../../libft/ft_calloc.c"
#include "../../libft/ft_bzero.c"
#include "../../libft/ft_memset.c"
#include "../../libft/ft_lstdelone_bonus.c"
#include "../../libft/ft_lstclear_bonus.c"
#include <stdio.h>
#include <fcntl.h>

void del (void *content)
{
    //free(content);
    (void)content;
}

int main()
{
    int i = 10;
    t_list *l =  ft_lstnew(&i);
    (*((int *)(l->content)))++;
    printf("%d\n", i);
    printf("%d\n", *((int *)(l->content)));
    t_list *l2 =  ft_lstnew(NULL);
    ft_lstclear(&l, del);
    ft_lstclear(&l2, del);
}

//gcc -fsanitize=address Tests/main34_lstnew.c && ./a.out 