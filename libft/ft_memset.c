#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return (NULL);
	ptr = (unsigned char *)s;
	while (n-- > 0)
		*ptr++ = (unsigned char)c;
	return (ptr);
}