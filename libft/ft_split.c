/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:14:12 by chenwong          #+#    #+#             */
/*   Updated: 2024/05/27 17:27:11 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *str, char c)
{
	int		count;
	int 	in_word;

	count = 0;
	in_word = 0;
	while (*str != '\0')
	{
		if (*str == c)
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

char	**ft_create_word(char **array, char const *str, int word_start, int word_len)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (array[i] != 0)
		i++;
	array[i] = (char *)malloc((word_len + 1) * sizeof(char *));
	if (array[i] == NULL)
		return (NULL);
	while (j < word_len)
	{
		array[i][j] = str[word_start + 1];
		j++;
	}
	array[i][j] = '\0';
	array[i + 1] = 0;
	return (array);
}

char	**ft_process_words(char **array, char const *str, char c)
{
	int	i;
	int	word_len;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
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

char	**ft_split(char const *s, char c)
{
	int		num_words;
	char	**result;

	num_words = ft_count_words(s, c);
	result = malloc(sizeof(char *) * (num_words + 1));
	if (!result)
		return (NULL);
	result[num_words] = NULL;
	if (num_words == 0)
		return (result);
	result = ft_process_words(result, s, c);
	return (result);
}