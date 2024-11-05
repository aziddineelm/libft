/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mans <ael-mans@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:35:24 by ael-mans          #+#    #+#             */
/*   Updated: 2024/11/05 18:43:57 by ael-mans         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c)
{
	int	words;
	int	in_word;

	words = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			words++;
			in_word = 1;
		}
		else if (*s == c)
		{
			in_word = 0;
		}
		s++;
	}
	return (words);
}

char	*copy_word(const char *start, const char *end)
{
	char	*word;
	int		len;
	int		i;

	i = 0;
	len = end - start;
	word = (char *)malloc((len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < end)
	{
		word[i] = *start;
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char		**new_string;
	size_t		total_words;
	size_t		i;	
	const char	*start;

	total_words = count_words(s, c);
	new_string = (char **)malloc((total_words + 1) * sizeof(char *));
	if (!new_string)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			start = s;
			while (*s && *s != c)
				s++;
			new_string[i] = copy_word(start, s);
			i++;
		}
		else
			s++;
	}
	new_string[i] = NULL;
	return (new_string);
}
