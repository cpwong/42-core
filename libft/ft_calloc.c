/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:05:55 by chenwong          #+#    #+#             */
/*   Updated: 2024/05/26 17:05:56 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t count, size_t size) {
	void	*ptr;
	
	ptr = malloc(count * size);
	if (ptr != NULL) {
		ft_memset(ptr, 0, count * size);
	}
	return (ptr);
}
