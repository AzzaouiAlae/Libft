#include "../../libft/ft_lstclear_bonus.c"
#include "../../libft/ft_lstdelone_bonus.c"
#include "../../libft/ft_lstlast_bonus.c"
#include "../../libft/ft_lstadd_back_bonus.c"
#include "../../libft/ft_lstadd_front_bonus.c"
#include "../../libft/ft_lstiter_bonus.c"
#include "../../libft/ft_lstnew_bonus.c"
#include "../../libft/ft_lstsize_bonus.c"
#include "../../libft/ft_lstmap_bonus.c"
#include "../../libft/ft_calloc.c"
#include "../../libft/ft_bzero.c"
#include "../../libft/ft_memset.c"

void *f(void *contant)
{
    int *num = (int *)contant;
    int *n = malloc(sizeof(int));
    *n = *num;
    (*n) += 5;
    return (void *)n;
}

void f_print(void *contant)
{
    int *n = contant;
    printf("%d\t", *n);
}
void del (void *content)
{
    //free(content);
    (void)content;
}

void del2 (void *content)
{
    //free(content);
    free(content);
}
int main()
{
    int nums[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    t_list *header = NULL;
    int i = 0;
    while(i < 10)
    {
        ft_lstadd_back(&header, ft_lstnew(&nums[i]));
        i++;
    }
    t_list *lst = ft_lstmap(header, f, del2);
    ft_lstiter(lst, f_print);
    printf("\n");
    ft_lstclear(&header, del);
    if(lst != NULL)
        ft_lstclear(&lst, del2);
}

//gcc -fsanitize=address Tests/main37_lstmap.c && ./a.out 