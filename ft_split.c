/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbuchet <mbuchet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 19:29:31 by mbuchet           #+#    #+#             */
/*   Updated: 2026/03/25 02:52:41 by mbuchet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "stdlib.h"

int	count_words(char const *str, char charset)
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

char	*get_splited_string(int start, const char *str, char charset)
{
	int		index;
	int		str_malloc_size;
	char	*splited_str;

	index = start;
	str_malloc_size = 0;
	while (str[index + 1] && charset != str[index])
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

int	make_splits(const char *str, char charset, char **r)
{
	int		index;
	int		word_count;
	int		charset_mod;
	char	*last_str;

	index = 0;
	word_count = 0;
	charset_mod = 1;
	while (str[index++])
	{
		if (str[index] == charset)
			charset_mod = 1;
		else
		{
			if (charset_mod == 1)
			{
				last_str = get_splited_string((index - 1), str, charset);
				if (last_str == NULL)
					continue ;
				r[word_count++] = last_str;
			}
			charset_mod = 0;
		}
	}
	return (word_count);
}

char	**ft_split(char const *s, char c)
{
	char	**str_splitted;
	int		word_count;

	if (s == NULL)
		return (NULL);
	word_count = count_words(s, c);
	str_splitted = malloc(sizeof(char *) * (word_count + 1));
	if (str_splitted == NULL)
		return (NULL);
	if (word_count == 0)
		return (str_splitted);
	make_splits(s, c, str_splitted);
	str_splitted[word_count] = 0;
	return (str_splitted);
}
