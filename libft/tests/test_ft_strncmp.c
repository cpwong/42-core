#include "../libft.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("Start testing ft_strncmp...\n");
	printf("%d\n", ft_strncmp("apple", "apple", 5));
	assert(ft_strncmp("apple", "apple", 5) == 0);
	printf("%d\n", ft_strncmp("apple", "apricot", 2));
	assert(ft_strncmp("apple", "apricot", 2) == 0);
	printf("%d\n", ft_strncmp("apple", "apricot", 3));
	assert(ft_strncmp("apple", "apricot", 3) < 0);
	printf("%d\n", ft_strncmp("apple", "banana", 5));
	assert(ft_strncmp("apple", "banana", 5) < 0);
	printf("%d\n", ft_strncmp("banana", "apple", 5));
	assert(ft_strncmp("banana", "apple", 5) > 0);
	printf("All tests passed!\n");
}
