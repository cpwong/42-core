#include "libft.h"

char	*ft_strnstr(const char *str, const char *tofind, size_t len)
{
	const char	*first_ptr;
	const char	*ptr;
	
	ptr = tofind;
	first_ptr = str;
	while (*str != '\0' && len-- > 0)
	{
		if (*ptr == '\0')
			return ((char *)first_ptr);
		if (*str != *ptr)
		{
			ptr = tofind;
			first_ptr = str;
		}
		ptr++;
		str++;
	}
	if (*ptr == '\0')
		return ((char *)first_ptr);
	else
		return (NULL);
}