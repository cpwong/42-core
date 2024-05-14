#include "libft.h"

void	*ft_memset(void *src, int c, size_t len)
{
	char	*ptr;

	if (!src)
		return (NULL);
	ptr = (char *)src;
	while (len-- > 0)
		*ptr++ = (char)c;
	return (ptr);
}