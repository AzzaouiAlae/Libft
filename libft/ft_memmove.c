/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 15:59:54 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/10/28 10:43:46 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	move_mem(char *temp_dst, char *temp_src, size_t len)
{
	size_t	i;

	i = 0;
	if (temp_src > temp_dst)
	{
		while (len > i)
		{
			temp_dst[i] = temp_src[i];
			i++;
		}
	}
	else
	{
		while (len > 0)
		{
			temp_dst[len - 1] = temp_src[len - 1];
			len--;
		}
	}
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp_src;
	char	*temp_dst;

	temp_src = (char *)src;
	temp_dst = (char *)dst;
	move_mem(temp_dst, temp_src, len);
	return (dst);
}
