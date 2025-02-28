/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 09:27:10 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/10/28 10:54:32 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_char_set(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	find_char_set_from_start(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (is_char_set(s1[i], set))
		i++;
	return (i);
}

static int	find_char_set_from_end(const char *s1, const char *set)
{
	int	i;

	i = (int)ft_strlen(s1);
	while (i && is_char_set(s1[i - 1], set))
		i--;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int	start;
	int	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = find_char_set_from_start(s1, set);
	len = find_char_set_from_end(s1, set) - start;
	return (ft_substr(s1, start, len));
}
