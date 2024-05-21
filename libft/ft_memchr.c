/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 15:35:40 by chenwong          #+#    #+#             */
/*   Updated: 2024/05/21 16:34:40 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const U8	*ptr;

	ptr = (const U8 *)s;
	while (n-- > 0)
	{
		if (*ptr == (U8)c)
			return ((void *)ptr);
		ptr++;
	}
	return (NULL);
}
