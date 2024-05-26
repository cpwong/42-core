#include "libft.h"
#include <stdio.h>

int	ft_count_words(char const *str, char *charset)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_strchr(charset, str[i]) != NULL)
			i++;
		if (str[i] != '\0')
			count++;
		while (str[i] != '\0' && ft_strchr(charset, str[i]) == NULL)
			i++;
	}
	return (count);
}

char	**ft_split(char const *str, char *charset)
{
	int		i;
	int		j;
	int		c;
	char	**result;

	result = (char **)malloc(sizeof(char *) * (ft_count_words(str, charset) + 1));
	if (result == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (str[i] != '\0' && ft_strchr(charset, str[i]) != NULL)
			i++;
		c = 0;
		while (str[i + c] != '\0' && ft_strchr(charset, str[i + c]) == NULL)
			c++;
		result[j] = (char *)malloc(c + 1);
		if (result[j] == NULL)
			return (NULL);
		ft_strlcpy(result[j], str + i, c + 1);
		i += c;
		j++;
	}
	result[j] = NULL;
	return (result);
}
