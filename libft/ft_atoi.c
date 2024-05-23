#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;

	if (*str == '\0')
		return (0);
	res = 0;
	sign = 1;
	while (*str <= ' ' )
		str++;
	while (*str == '-' || *str == '+') {
		if (*str == '-') {
			sign *= -1;
		} 
		str++;
	}
	while (*str >= '0' && *str <= '9' )
	{
		res = res * 10 + (*str - '0');
		str++;
	}
	return (res * sign);
}