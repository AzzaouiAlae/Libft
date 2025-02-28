/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 11:30:34 by aazzaoui          #+#    #+#             */
/*   Updated: 2025/02/28 17:13:50 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int num, int fd)
{
	int				n;
	long			nb;
	char			c;

	n = (int)num;
	nb = (long)n;
	if (nb < 0)
	{
		nb = -nb;
		ft_putchar_fd('-', fd);
	}
	c = (char)(nb % 10 + 48);
	nb /= 10;
	if (nb > 0)
		ft_putnbr((unsigned long)nb);
	ft_putchar_fd(c, fd);
}
