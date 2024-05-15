#include "libft.h"

void	*ft_copy_forward(unsigned char *dest, 
		const unsigned char *src, size_t n)
{
	while (n-- > 0)
		*dest++ = *src++;
	return (dest);
}
void	*ft_copy_backward(unsigned char *dest, 
		const unsigned char *src, size_t n)
{
	dest += n - 1;
	src += n - 1;
	while (n-- > 0)
		*dest-- = *src--;
	return (dest);
}


void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest || !src)
		return (NULL);
	if (dest == src)
		return (dest);
	if (dest < src)
		return (ft_copy_forward((unsigned char *)dest, 
			(const unsigned char *)src, n));
	else
		return (ft_copy_backward((unsigned char *)dest, 
			(const unsigned char *)src, n));
}
