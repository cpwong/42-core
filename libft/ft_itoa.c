#include "libft.h"

char	*create_itoa_string(int n, int len, int neg)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (neg)
		str[0] = '-';
	while (len-- > neg)
	{
		str[len] = (n % 10) * (1 - 2 * neg) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int		len;
	int		neg;
	int		tmp;
	char	*str;

	len = 1;
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		len++;
	}
	tmp = n;
	while (tmp /= 10)
		len++;
	str = create_itoa_string(n, len, neg);
	while (str && len-- > neg)
	{
		str[len] = (n % 10) * (1 - 2 * neg) + '0';
		n /= 10;
	}
	return (str);
}