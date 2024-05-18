/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 15:24:16 by chenwong          #+#    #+#             */
/*   Updated: 2024/05/18 15:24:17 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *src, size_t len)
{
	unsigned char	*ptr;

	if (!src)
		return ;
	ptr = (unsigned char *)src;
	while (len-- > 0)
		*ptr++ = '\0';
}
