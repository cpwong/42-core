/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:16:31 by chenwong          #+#    #+#             */
/*   Updated: 2024/06/01 21:48:18 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	find_len;

	find_len = ft_strlen(find);
	if (find_len == 0)
		return ((char *)str);
	if (*str == '\0' || len == 0 || find_len > len)
		return (NULL);
	i = 0;
	while (i <= len - find_len)
	{
		if (ft_strncmp(str + i, find, find_len) == 0)
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
