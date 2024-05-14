#include "libft.h"

void	ft_bzero(void *src, size_t len)
{
	char	*ptr;

	if (!src)
		return ;
	ptr = (char *)src;
	while (len-- > 0)
		*ptr++ = '\0';
}