/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:14:12 by chenwong          #+#    #+#             */
/*   Updated: 2024/05/26 23:27:14 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

char	**ft_create_word(char **array, char const *str, int w_start, int w_len)
{
	int	i;
	int	insert_index;

	insert_index = 0;
	while (array[insert_index] != 0)
		insert_index++;
	array[insert_index] = (char *)malloc((w_len + 1) * sizeof(char *));
	if (!array[insert_index])
		return (NULL);
	i = 0;
	while (i < w_len)
	{
		array[insert_index][i] = str[w_start + i];
		i++;
	}
	array[insert_index][i] = '\0';
	array[insert_index + 1] = 0;
	return (array);
}

int	ft_count_words(char const *str, char *charset)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (is_separator(*str, charset))
			in_word = 0;
		else if (!in_word)
		{
			count++;
			in_word = 1;
		}
		str++;
	}
	return (count);
}

char	**ft_process_words(char **array, char const *str, char *charset)
{
	int	i;
	int	word_len;

	i = 0;
	word_len = 0;
	while (str[i] != '\0')
	{
		if (is_separator(str[i], charset))
		{
			if (word_len > 0)
			{
				array = ft_create_word(array, str, i - word_len, word_len);
				word_len = 0;
			}
		}
		else
			word_len++;
		i++;
	}
	if (word_len > 0)
		array = ft_create_word(array, str, i - word_len, word_len);
	return (array);
}

char	**ft_split(const char *s, char *c)
{
	int		num_words;
	char	**result;

	num_words = ft_count_words(s, c);
	result = malloc(sizeof(char *) * num_words + 1);
	if (!result)
		return (NULL);
	result[0] = 0;
	result = ft_process_words(result, s, c);
	return (result);
}
