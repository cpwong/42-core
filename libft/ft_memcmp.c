/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 16:46:35 by chenwong          #+#    #+#             */
/*   Updated: 2024/06/03 18:40:34 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(void *dest, const void *src, size_t n)
{
	unsigned char	*src_ptr;
	unsigned char	*dest_ptr;

	dest_ptr = (unsigned char *)dest;
	src_ptr = (unsigned char *)src;
	while (n-- > 0)
	{
		if (*dest_ptr != *src_ptr)
			return (*dest_ptr - *src_ptr);
		dest_ptr++;
		src_ptr++;
	}
	return (0);
}

/*
	Compares the first (n) bytes of memory areas (dest) and (src).
	Returns an integer +/- if byte pair is different, or 0 if equal.
*/
