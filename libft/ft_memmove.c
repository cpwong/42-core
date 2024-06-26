/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:31:48 by chenwong          #+#    #+#             */
/*   Updated: 2024/06/03 18:51:28 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_copy_forward(unsigned char *dest,
	const unsigned char *src, size_t n)
{
	while (n-- > 0)
		*dest++ = *src++;
	return (dest);
}

static void	*ft_copy_backward(unsigned char *dest,
	const unsigned char *src, size_t n)
{
	dest += n - 1;
	src += n - 1;
	while (n-- > 0)
		*dest-- = *src--;
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (NULL);
	if (dest == src)
		return (dest);
	if (dest < src)
		ft_copy_forward((unsigned char *)dest, (const unsigned char *)src, n);
	else
		ft_copy_backward((unsigned char *)dest, (const unsigned char *)src, n);
	return (dest);
}
/*
	Copies (n) bytes from memory (src) to (dest)
*/