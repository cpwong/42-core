/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 21:16:06 by chenwong          #+#    #+#             */
/*   Updated: 2024/06/03 19:19:55 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	str = (char *)ft_calloc(len + 1, sizeof(char));
	if (str != NULL)
		ft_memcpy(str, s1, len);
	return (str);
}
/*
	Allocate memory and make a copy of string (s1) and returns a pointer
*/