/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:46:35 by chenwong          #+#    #+#             */
/*   Updated: 2024/05/21 17:21:53 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	U8	*src_ptr;
	U8	*dest_ptr;

	dest_ptr = (U8 *)dest;
	src_ptr = (U8 *)src;
	while (n-- > 0)
	{
		if (*dest_ptr != *src_ptr)
			return (*dest_ptr - *src_ptr);
		dest_ptr++;
		src_ptr++;
	}
	return (0);
}
