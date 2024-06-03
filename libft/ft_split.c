/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:14:12 by chenwong          #+#    #+#             */
/*   Updated: 2024/06/03 19:12:20 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_words(char const *str, char c)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		if (*str != c)
		{
			count++;
			while (*str && *str != c)
				str++;
		}
		else if (*str == c)
			str++;
	}
	return (count);
}

static void	ft_free_array(char **array, size_t i)
{
	if (!array)
		return ;
	while (i-- > 0)
	{
		if (array[i])
		{
			free(array[i]);
			array[i] = NULL;
		}
	}
	if (array)
	{
		free (array);
		array = NULL;
	}
}

static char	**ft_split_words(char **dest, const char *str, char c, size_t words)
{
	size_t	i;
	size_t	w;
	size_t	start;

	i = 0;
	w = 0;
	while (w < words)
	{
		while (str[i] && str[i] == c)
			i++;
		start = i;
		while (str[i] && str[i] != c)
			i++;
		dest[w] = ft_substr(str, start, i - start);
		if (dest[w] == NULL)
		{
			ft_free_array(dest, w);
			return (NULL);
		}
		w++;
	}
	dest[words] = NULL;
	return (dest);
}

char	**ft_split(char const *str, char c)
{
	size_t		num_words;
	char		**result;

	if (!str)
		return (NULL);
	num_words = ft_count_words(str, c);
	result = malloc((num_words + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = ft_split_words(result, str, c, num_words);
	return (result);
}
