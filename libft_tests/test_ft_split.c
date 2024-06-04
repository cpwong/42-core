#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	free_array(char **array)
{
	int	i = 0;

	while (array[i] != 0)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

void	print_memory(char *str, int len)
{
	int	count = 0;

	printf("\tMemory:\n\t");
	for (int i = 0; i < len; i++)
	{
		printf("[%c]", str[i]);
		count++;
		if (count == 10)
		{
			printf("\n\t");
			count = 0;
		}
	}
	printf("\n");
}

void ft_print_array(char **array)
{
	printf("\tResult:\t\t");
	{
		if (array == NULL)
		{
			printf("-NULL-\n");
			return ; // Handle case of null array
		}
		for (int i = 0; array[i] != NULL; i++) {
			printf("'%s', ", array[i]);
		}
		printf("\n");
	}
}


int	main (void)
{
	// char str3[] = "apple,banana,chicken";
	char	**result;

	char str1[] = "hello!";
	printf("Test #0 = str: %s\t c: '%c'\n", str1, '\0');
	printf("\tExpected:\t'hello!'\n");
	result = ft_split(str1, '\0');
	ft_print_array(result);
	free_array(result);
	printf("\n");

	printf("Test #1 = str: %s\t c: '%c'\n", str1, ' ');
	printf("\tExpected:\t'hello!'\n");
	result = ft_split(str1, ' ');
	ft_print_array(result);
	free_array(result);
	printf("\n");

	printf("Test #2 = str: %s\t c: '%c'\n", str1, ' ');
	printf("\tExpected:\t'hello!'\n");
	result = ft_split(str1, ' ');
	ft_print_array(result);
	free_array(result);
	printf("\n");

	char str2[] = "apple banana chicken";
	printf("Test #3 = str: %s\t c: '%c'\n", str2, ' ');
	printf("\tExpected:\t'apple', 'banana', 'chicken'\n");
	result = ft_split(str2, ' ');
	ft_print_array(result);
	free_array(result);
	printf("\n");

	char str4[] = ",,,apple,banana,chicken,,,";
	printf("Test #4 = str: %s\t c: '%c'\n", str4, ',');
	printf("\tExpected:\t'apple', 'banana', 'chicken'\n");
	result = ft_split(str4, ',');
	ft_print_array(result);
	free_array(result);
	printf("\n");

	char str5[] = ",,,apple banana chicken,,,";
	printf("Test #5 = str: %s\t c: '%c'\n", str5, ',');
	printf("\tExpected:\t'apple banana chicken'\n");
	result = ft_split(str5, ',');
	ft_print_array(result);
	free_array(result);
	printf("\n");

	printf("Test #6 = str: %s\t c: '%c'\n", str5, ' ');
	printf("\tExpected:\t',,,apple banana chicken,,,'\n");
	result = ft_split(str5, '\0');
	ft_print_array(result);
	free_array(result);
	printf("\n");

	char str6[] = "^^^1^^2a,^^^^3^^^^--h^^^^";
	printf("Test #7 = str: %s\t c: '%c'\n", str6, '^');
	printf("\tExpected:\t'1', '2a,', '3', '--h'\n");
	result = ft_split(str6, '^');
	ft_print_array(result);
	free_array(result);
	printf("\n");
}

	// User input case
	// printf("Enter a string to split: ");
	// char customStr[100];
	// scanf(" %99[^\n]", customStr);
	// printf("Enter the set of characters to use as delimiters: ");
	// char customChar[100];
	// scanf(" %99[^\n]", customChar);
	// char **customResult = ft_split(customStr, customChar[0]);
	// printf("Result: ");
	// if (customResult != NULL) {
	// 	for (int i = 0; customResult[i] != NULL; i++) {
	// 		printf("\"%s\" ", customResult[i]);
	// 	}
	// 	printf("\n\n");
	// 	// Free the allocated memory
	// 	for (int i = 0; customResult[i] != NULL; i++) {
	// 		free(customResult[i]);
	// 	}
	// 	free(customResult);
	// } else {
	// 	printf("NULL\n\n");
	// }

// }

