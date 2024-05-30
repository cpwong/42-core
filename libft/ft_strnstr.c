/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:16:31 by chenwong          #+#    #+#             */
/*   Updated: 2024/05/31 00:50:54 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	const char	*ptr;
	const char	*find_ptr;

	if (str == NULL && len == 0)
		return (NULL);
	if (*find == '\0')
		return ((char *)str);
	find_ptr = find;
	ptr = str;
	while (*str && len-- > 0)
	{
		if (*find_ptr != *str)
		{
			find_ptr = find;
			ptr = str + 1;
		}
		else
		{
			find_ptr++;
		}
		str++;
		if (*find_ptr == '\0')
			return ((char *)ptr);
	}
	return (NULL);
}
