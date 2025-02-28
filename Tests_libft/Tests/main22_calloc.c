#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void	*ft_memset(void *b, int c, size_t len)
{
	register unsigned char	*str;
	register unsigned char	ch;
	register size_t			i;

	str = (unsigned char *)b;
	i = 0;
	ch = (unsigned char)c;
	while (i < len)
	{
		*str++ = ch;
		i++;
	}
	return (b);
}

typedef struct s_data
{
    char *s;
    char ch;
    size_t n;
} t_data;

int i = 1;

void* perform_work(void* arg)
{
    t_data *data = ((t_data *)arg);
    if(data->s)
        ft_memset(data->s, data->ch, data->n);
    return NULL;
}

t_data *creat_data(char *s, char ch, size_t n)
{
    t_data *data = malloc(sizeof(t_data));
    data->s = s;
    data->ch = ch;
    data->n = n;
    return data;
}

void	ft_bzero(void *s, size_t n)
{
    size_t thread_num = 50;
    pthread_t threads[thread_num];
    size_t rest = n % thread_num;
    size_t i = 0;
    size_t n_for_thread = n / thread_num;

    //0-->203  204 -->
    while(i < thread_num && n >= thread_num * 100)
    {
        t_data *thread_args = creat_data(&(((char *)s)[n_for_thread * i]), 'x', n_for_thread);
        pthread_create(&threads[i], NULL, perform_work, (void*)thread_args);
        i++;
    }
    if(n >= thread_num * 100 && n % thread_num)
	    ft_memset(&(((char*)s)[n - rest]), 0, rest);
    else if(n % thread_num)
        ft_memset(s, 0, n);
    pthread_join(threads[0], NULL);
    pthread_join(threads[thread_num / 2], NULL);
    pthread_join(threads[thread_num - 1], NULL);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*tmp;

	tmp = NULL;
	if (size && count > (__SIZE_MAX__) / size)
		return (NULL);
	tmp = malloc(size * count);
	if (!tmp)
		return (NULL);
    //ft_memset(tmp, 0, size * count);
	ft_bzero(tmp, size * count);
	return (tmp);
}

int main()
{
    size_t size = 124000;
    char *str = ft_calloc(size, size);

    printf("%c\n", (str[0]));
    printf("%c\n", (str[size * size / 2]));
    printf("%c\n", (str[size * size - 1]));
    return 0;
}