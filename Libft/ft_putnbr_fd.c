/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:30:34 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/10/31 13:26:11 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	negative_num(char *str, int *n, int *i)
{
	if (*n < 0)
	{
		str[*i] = '-';
		(*i)++;
		str[*i] = (*n) % 10 * -1 + 48;
		(*n) /= 10 * -1;
		(*i)++;
	}
}

static int	create_nbr_str(char *str, int n)
{
	int	i;
	int	num;

	i = 0;
	if (!(n > -10 && n < 0))
		num = 1;
	negative_num(str, &n, &i);
	while (n > 9)
	{
		str[i] = n % 10 + 48;
		n /= 10;
		i++;
	}
	if (num)
		str[i] = n + 48;
	return (i);
}

static void	swap_str(char *str)
{
	int		s_len;
	int		i;
	char	temp;

	i = 0;
	s_len = ((int)ft_strlen(str)) - 1;
	if (str[i] == '-')
		i++;
	while (i < s_len)
	{
		temp = str[i];
		str[i] = str[s_len];
		str[s_len] = temp;
		i++;
		s_len--;
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	char	str[13];

	ft_memset(str, 0, 13);
	create_nbr_str(str, n);
	swap_str(str);
	ft_putstr_fd(str, fd);
}
