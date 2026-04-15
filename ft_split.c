/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 19:29:31 by mbuchet           #+#    #+#             */
/*   Updated: 2026/04/15 18:16:48 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "stdlib.h"

static int	count_words(char const *str, char charset)
{
	int	index;
	int	word_count;
	int	charset_mod;

	index = 0;
	word_count = 0;
	charset_mod = 1;
	while (str[index])
	{
		if (str[index] == charset)
			charset_mod = 1;
		else
		{
			if (charset_mod == 1)
				word_count++;
			charset_mod = 0;
		}
		index++;
	}
	return (word_count);
}

static char	*get_splited_string(int start, const char *str, char charset)
{
	int		index;
	int		str_malloc_size;
	char	*splited_str;

	index = start;
	str_malloc_size = 0;
	while (str[index] && charset != str[index])
	{
		index++;
		str_malloc_size++;
	}
	if (str_malloc_size == 0)
		return (NULL);
	splited_str = malloc(sizeof(char) * (str_malloc_size + 1));
	if (splited_str == NULL)
		return (NULL);
	index = 0;
	while (str[start + index] && charset != str[start + index])
	{
		splited_str[index] = str[start + index];
		index++;
	}
	splited_str[index] = 0;
	return (splited_str);
}

static void	free_split(char **r, int allocated)
{
	while (allocated--)
		free(r[allocated]);
	free(r);
}

static int	make_splits(const char *str, char charset, char **r)
{
	int		index;
	int		word_count;
	int		charset_mod;

	index = 0;
	word_count = 0;
	charset_mod = 1;
	while (str[index])
	{
		if (str[index] == charset)
			charset_mod = 1;
		else
		{
			if (charset_mod == 1)
			{
				r[word_count] = get_splited_string(index, str, charset);
				if (r[word_count] == NULL)
					return (word_count);
				word_count++;
			}
			charset_mod = 0;
		}
		index++;
	}
	return (-1);
}

char	**ft_split(char const *s, char c)
{
	char	**str_splitted;
	int		word_count;
	int		real_count_words;

	if (s == NULL)
		return (NULL);
	word_count = count_words(s, c);
	str_splitted = malloc(sizeof(char *) * (word_count + 1));
	if (str_splitted == NULL)
		return (NULL);
	real_count_words = make_splits(s, c, str_splitted);
	if (real_count_words != -1)
	{
		free_split(str_splitted, real_count_words);
		return (NULL);
	}
	str_splitted[word_count] = 0;
	return (str_splitted);
}
