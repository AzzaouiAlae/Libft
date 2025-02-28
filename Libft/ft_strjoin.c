/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 21:23:47 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/10/29 22:03:41 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	str = ft_calloc(sizeof(char), (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (NULL);
	ft_strlcat(str, s1, ft_strlen(s1) + 1);
	if (!str)
		return (NULL);
	ft_strlcat(str, s2, ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!str)
		return (NULL);
	return (str);
}
