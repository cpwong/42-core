/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:14:12 by chenwong          #+#    #+#             */
/*   Updated: 2024/05/31 16:22:48 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_words(char const *str, char c)
{
	int		count;
	int		in_word;

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

void	ft_free_array(char **array)
{
	if (array == NULL)
		return ;
	while (*array != NULL)
	{
		free(*array);
		array++;
	}
	free(array);
}

char	**ft_create_word(char **array, char const *str, int w_start, int w_len)
{
	int	j;
	int	i;

	i = 0;
	j = 0;
	while (array[i] != 0)
		i++;
	array[i] = ft_calloc(w_len + 1, sizeof(char));
	if (array[i] == NULL)
	{
		ft_free_array(array);
		return (NULL);
	}
	while (j < w_len)
	{
		array[i][j] = str[w_start + j];
		j++;
	}
	array[i][j] = '\0';
	array[i + 1] = NULL;
	return (array);
}

char	**ft_process_words(char **array, char const *str, char c)
{
	int	i;
	int	word_len;

	i = 0;
	word_len = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
		{
			if (word_len > 0)
			{
				array = ft_create_word(array, str, i - word_len, word_len);
				if (array == NULL)
					return (NULL);
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

	if (s == NULL)
		return (NULL);
	num_words = ft_count_words(s, c);
	result = ft_calloc(num_words + 1, sizeof(char *));
	if (!result)
		return (NULL);
	if (!ft_process_words(result, s, c))
	{
		ft_free_array(result);
		return (NULL);
	}
	return (result);
}
