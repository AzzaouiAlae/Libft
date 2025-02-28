#include "../../libft/ft_lstclear_bonus.c"
#include "../../libft/ft_lstdelone_bonus.c"
#include "../../libft/ft_lstlast_bonus.c"
#include "../../libft/ft_lstadd_back_bonus.c"
#include "../../libft/ft_lstadd_front_bonus.c"
#include "../../libft/ft_lstiter_bonus.c"
#include "../../libft/ft_lstnew_bonus.c"
#include "../../libft/ft_lstsize_bonus.c"
#include "../../libft/ft_calloc.c"
#include "../../libft/ft_bzero.c"
#include "../../libft/ft_memset.c"

void del (void *content)
{
    //free(content);
    (void)content;
}

void f(void *contant)
{
    int *num = (int *)contant;
    (*num) += 5;
}

void f2(void *contant)
{
    int *num = (int *)contant;
    printf("%d\t", *num);
}

int main()
{
    int i = 0;
    int nums[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    t_list *head = NULL;
    while (i < 10)
    {
        ft_lstadd_front(&head, ft_lstnew(&nums[i]));
        i++;
    }
    int size = ft_lstsize(head);
    printf("Size is %d\n", size);
    ft_lstiter(head, f);
    ft_lstiter(head, f2);
    ft_lstclear(&head, del);
    printf("\n");
}

//gcc -fsanitize=address Tests/main36_lstsize.c && ./a.out 