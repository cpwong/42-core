#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	digit;
	
	if (n != -2147483648)
	{
		if (n < 0) 
		{
			write(fd, "-", 1);
			n = -n;
		}
		if (n >= 10)
		{
			ft_putnbr_fd(n / 10, fd);
		}
		digit = n % 10 + '0';
		write(fd, &digit, 1);
	}
	else
	{
		write(fd, "-2147483648", 11);
	}

}