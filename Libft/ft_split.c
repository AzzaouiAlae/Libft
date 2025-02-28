/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazzaoui <aazzaoui@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 10:42:24 by aazzaoui          #+#    #+#             */
/*   Updated: 2024/10/28 21:12:00 by aazzaoui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i])
			count++;
		while (s[i] && s[i] != c)
			i++;
	}
	return (count);
}

static char	*create_word(char *s, char c, int *j)
{
	int		i;
	char	*str;

	while (s[*j] == c)
		(*j)++;
	i = *j;
	while (s[i] && s[i] != c)
		i++;
	str = ft_substr(s, *j, i - *j);
	*j = i;
	return (str);
}

static void	free_all_words(char ***words, int words_len)
{
	int	i;

	i = 0;
	while (words_len > i)
	{
		free((*words)[i]);
		i++;
	}
	free(*words);
}

char	**ft_split(const char *s, char c)
{
	int		words_len;
	char	**words;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	words_len = count_words(s, c);
	words = ft_calloc(words_len + 1, sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	j = 0;
	while (i < words_len)
	{
		words[i] = create_word((char *)s, c, &j);
		if (!words[i])
		{
			free_all_words(&words, words_len);
			return (NULL);
		}
		i++;
	}
	words[i] = 0;
	return (words);
}
