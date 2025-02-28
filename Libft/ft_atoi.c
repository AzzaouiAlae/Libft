/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 22:46:03 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/10/28 17:39:13 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isdgit(char c, long *total, int sign)
{
	if (c >= '0' && c <= '9')
	{
		if ((*total) > (LONG_MAX - (c - '0')) / 10)
		{
			*total = (-1 * (sign == 1));
			return (0);
		}
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	long	total;
	int		sign;
	int		num;

	i = 0;
	total = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (ft_isdgit(str[i], &total, sign))
	{
		num = str[i] - '0';
		total = total * 10 + num;
		i++;
	}
	return ((int)total * sign);
}
