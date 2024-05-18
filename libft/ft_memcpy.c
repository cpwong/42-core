/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:30:33 by chenwong          #+#    #+#             */
/*   Updated: 2024/05/18 19:20:09 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	U8			*ptr_dst;
	const U8	*ptr_src;

	if (!dst && !src)
		return (NULL);
	ptr_dst = (U8 *)dst;
	ptr_src = (const U8 *)src;
	while (n-- > 0)
		*ptr_dst++ = *ptr_src++;
	return (dst);
}
