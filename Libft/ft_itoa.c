/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 21:17:41 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/10/29 10:10:10 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_num_size(int n)
{
	int	counter;

	counter = 0;
	if (n < 0)
		counter++;
	while (n)
	{
		n /= 10;
		counter++;
	}
	return (counter);
}

static void	negative_num(char *s, int *n_len, int *n)
{
	if ((*n) < 0)
	{
		s[*n_len] = (((*n) % 10) * -1) + '0';
		(*n) /= 10;
		(*n) *= -1;
		s[0] = '-';
		(*n_len)--;
	}
}

char	*ft_itoa(int n)
{
	char	*s;
	int		n_len;

	if (n == 0)
		return (ft_strdup("0"));
	n_len = count_num_size(n);
	s = ft_calloc(n_len + 1, sizeof(char));
	if (!s)
		return (NULL);
	s[n_len] = '\0';
	n_len--;
	negative_num(s, &n_len, &n);
	while (n_len >= 0 && n)
	{
		s[n_len] = n % 10 + '0';
		n /= 10;
		n_len--;
	}
	return (s);
}
