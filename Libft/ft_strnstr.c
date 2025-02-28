/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 19:27:00 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/10/31 20:19:29 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	find_str(const char *haystack, const char *needle)
{
	int	i;

	i = 0;
	while (haystack[i] && needle[i])
	{
		if (haystack[i] != needle[i])
			return (-1);
		i++;
		if (needle[i] == '\0')
			return (i);
	}
	return (-1);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	int		j;
	char	c;

	i = 0;
	c = haystack[0];
	if (len < ft_strlen(needle))
		return (0);
	if (needle[0] == '\0')
		return (((char *)haystack));
	while (haystack[i] && c)
	{
		if (haystack[i] == needle[0])
		{
			j = find_str(&haystack[i], needle);
			if (j != -1 && (size_t)j + i <= len)
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
