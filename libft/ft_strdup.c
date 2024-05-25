#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	len;
	
	len = ft_strlen(s1);
	dup = (char *)ft_calloc(len + 1, sizeof(char));
	if (dup != NULL) {
		ft_memcpy(dup, s1, len);
	}
	return (dup);
}