/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:33:38 by chenwong          #+#    #+#             */
/*   Updated: 2024/06/04 13:06:15 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	unsigned char	*ptr;

	ptr = src;
	while (len-- > 0)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return (src);
}
/*
	Fills (n) bytes of memory (src) with constant byte (c)
*/
