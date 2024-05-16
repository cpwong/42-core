#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dst_len;
	size_t	src_len;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dst_len + src_len);
	if (src_len < dstsize - dst_len)
		ft_memcpy(dst + dst_len, src, src_len);
	else
		ft_memcpy(dst + dst_len, src, dstsize - dst_len - 1);
	dst[dstsize - 1] = '\0';
	return (dst_len + src_len);
}
