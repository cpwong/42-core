#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	unsigned char	*ptr;

	if (!src)
		return (NULL);
	ptr = (unsigned char *)src;
	while (len-- > 0)
		*ptr++ = (unsigned char)c;
	return (ptr);
}