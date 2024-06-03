/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:33:38 by chenwong          #+#    #+#             */
/*   Updated: 2024/06/03 19:12:23 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	char	*ptr;

	ptr = (char *)src;
	while (len-- > 0)
	{
		*ptr = (char)c;
		ptr++;
	}
	return (src);
}
/*
	Fills (n) bytes of memory (src) with constant byte (c)
*/