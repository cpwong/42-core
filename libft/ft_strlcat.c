/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:33:58 by chenwong          #+#    #+#             */
/*   Updated: 2024/05/30 17:11:30 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

// size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
// {
// 	size_t	dst_len;
// 	size_t	src_len;
// 	size_t	copy_len;

// 	dst_len = ft_strlen(dst);
// 	src_len = ft_strlen(src);
// 	// printf("\tdst_size: %zu, dst_len: %zu, src_len: %zu\n", dstsize, dst_len, src_len);
// 	if (dstsize <= dst_len)
// 		return (dstsize + src_len);
// 	copy_len = dstsize - dst_len - 1;
// 	// printf("\tcopy_len: %zu\n", copy_len);
// 	if (src_len < copy_len)
// 		dst = ft_memcpy(dst + dst_len, src, src_len + 1);
// 	else
// 	{
// 		dst = ft_memcpy(dst + dst_len, src, copy_len);
// 		dst[copy_len] = '\0';
// 	}
// 	return (dst_len + src_len);
// }

#include "libft.h"

static size_t	str_len(char const *str)
{
	size_t	i;

	i = 0;
	while (*(str + i))
		i++;
	return (i);
}

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t		dest_len;
	size_t		total_len;
	const char	*s;

	if ((!dest || !src) && !n)
		return (0);
	s = src;
	dest_len = 0;
	while (*(dest + dest_len) && dest_len < n)
		dest_len++;
	if (dest_len < n)
		total_len = dest_len + str_len(s);
	else
		return (n + str_len(s));
	while (*s && (dest_len + 1) < n)
	{
		*(dest + dest_len) = *s++;
		dest_len++;
	}
	*(dest + dest_len) = '\0';
	return (total_len);
}