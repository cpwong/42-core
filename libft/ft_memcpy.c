#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*ptr_dst;
	const unsigned char *ptr_src; 

	if (!dst || !src)
		return (NULL);
	ptr_dst = (unsigned char *)dst;
	ptr_src = (const unsigned char *)src;
	while (n-- > 0)
	 	*ptr_dst++ = *ptr_src++;
	return (dst);
};
