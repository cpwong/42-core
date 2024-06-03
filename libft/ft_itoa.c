/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chenwong <chenwong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/26 17:06:09 by chenwong          #+#    #+#             */
/*   Updated: 2024/06/03 18:35:25 by chenwong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
	{
		len++;
		n *= -1;
	}
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static char	*ft_prep_str(int n, int len)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
		str[0] = '-';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	str = NULL;
	if (n == 0)
		str = ft_strdup("0");
	else if (n <= INT_MIN)
		str = ft_strdup("-2147483648");
	else if (n >= INT_MAX)
		str = ft_strdup("2147483647");
	else
	{
		len = ft_numlen(n);
		str = ft_prep_str(n, len);
		if (!str)
			return (NULL);
		if (n < 0)
			n *= -1;
		while (len-- > 0 && n > 0)
		{
			str[len] = n % 10 + '0';
			n /= 10;
		}
	}
	return (str);
}

/*
	Allocates and returns a string representing integer received
	as argument (n).
*/