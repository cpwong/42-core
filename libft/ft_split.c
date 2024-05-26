/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:14:12 by chenwong          #+#    #+#             */
/*   Updated: 2024/05/26 17:15:11 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_count_w(char const *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_strchr(charset, str[i]) != NULL)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && ft_strchr(charset, str[i]) == NULL)
			i++;
	}
	return (count);
}

char	**ft_split(char const *str, char *charset)
{
	int		i;
	int		j;
	int		c;
	char	**result;

	result = (char **)malloc(sizeof(char *) * (ft_count_w(str, charset) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_strchr(charset, str[i]) != NULL) i++;
		c = 0;
		while (str[i + c] != '\0' && ft_strchr(charset, str[i + c]) == NULL)
			c++;
		result[j] = (char *)malloc(c + 1);
		if (result[j] == NULL)
			return (NULL);
		ft_strlcpy(result[j], str + i, c + 1);
		i += c;
		j++;
	}
	result[j] = NULL;
	return (result);
}
