/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 18:32:19 by seantoni          #+#    #+#             */
/*   Updated: 2024/01/25 00:10:55 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s == c)
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		s++;
	}
	return (count);
}

static void	free_split(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
}

static char	*get_next_word(char const *s, char c)
{
	char	*word;
	int		len;

	if (!ft_strchr(s, c))
		len = ft_strlen(s);
	else
		len = (ft_strchr(s, c) - s);
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	ft_strlcpy(word, s, len + 1);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;
	int		i;

	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (i < word_count)
	{
		while (*s && *s == c)
			s++;
		result[i] = get_next_word(s, c);
		if (!result[i])
		{
			free_split(result, i);
			return (NULL);
		}
		s += ft_strlen(result[i]);
		i++;
	}
	result[i] = NULL;
	return (result);
}
