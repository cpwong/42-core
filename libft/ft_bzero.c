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