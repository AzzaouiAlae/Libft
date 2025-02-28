#include "../../libft/ft_lstclear_bonus.c"
#include "../../libft/ft_lstdelone_bonus.c"
#include "../../libft/ft_lstlast_bonus.c"
#include "../../libft/ft_lstadd_back_bonus.c"
#include "../../libft/ft_lstadd_front_bonus.c"
#include "../../libft/ft_lstiter_bonus.c"
#include "../../libft/ft_lstnew_bonus.c"
#include "../../libft/ft_strtrim.c"
#include "../../libft/ft_split.c"
#include "../../libft/ft_substr.c"
#include "../../libft/ft_strlcat.c"
#include "../../libft/ft_strjoin.c"
#include "../../libft/ft_calloc.c"
#include "../../libft/ft_bzero.c"
#include "../../libft/ft_memset.c"
#include "../../libft/ft_strdup.c"
#include "../../libft/ft_strlen.c"
#include "../../libft/ft_putstr_fd.c"
#include "../../libft/ft_putchar_fd.c"
#include "../../libft/ft_putendl_fd.c"
#include <stdio.h>
#include <fcntl.h>

void f(void *content)
{
    char *s = (char *)content;
    ft_putendl_fd(s, 1);
}

void del (void *content)
{
    free(content);
}

int main()
{
    int i = 1;
    char **strs = ft_split("    hello          world     ", ' ');

    t_list *head = ft_lstnew(strs[0]);

    while(strs[i])
    {
        ft_lstadd_front(&head, ft_lstnew(strs[i]));
        i++;
    }
    ft_lstiter(head, f);
    ft_lstclear(&head, del);
    free(strs[2]);
    free(strs);

    //system("leaks main35_lstadd_front");
    return 0;
}
//gcc -fsanitize=address Tests/main35_lstadd_front.c && ./a.out 