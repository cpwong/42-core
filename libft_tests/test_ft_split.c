#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	print_array(char **array)
{
	int	i = 0;

	while (array[i] != 0)
	{
		printf("\t...i = %d, array[i] = %s,\tptr = %p\tlen = %ld\n", 
			i, array[i], &array[i], ft_strlen(array[i]));
		i++;
	}
	printf("\t...i = %d, array[i] = %p,\tptr = %p\tlen = %ld\n\n", 
		i, array[i], &array[i], ft_strlen(array[i]));
}

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

int	main(void)
{
	char source_0[] = "hello!";
	printf("#0 str = %s\n", source_0);
	char **result_0 = ft_split(source_0, ' ');
	print_array(result_0);
	free_array(result_0);
	
	// print_memory(result_0[0], 30);

	char source_1[] = "Andy             ";
	printf("#1 str = %s\n", source_1);
	char **result_1 = ft_split(source_1, ' ');
	printf("\t#1 Array = %p, Expected: {'Andy', (null)}\n", result_1);
	print_array(result_1);
	print_memory(result_1[0], 10);
	free_array(result_1);

	char source_2[] = ("Andy,Bobby,Charlie");
	printf("#2 str = %s\n", source_2);
	char **result_2 = ft_split(source_2, ',');
	printf("\t#2 Array = %p, Expected {'Andy', 'Bobby', 'Charlie', (null)}\n", result_2);
	print_array(result_2);
	print_memory(result_2[0], 100);
	free_array(result_2);

	char source_3[] = (",,,Andy|Bobby|Charlie,,,");
	printf("#3 str = %s\n", source_3);
	char **result_3 = ft_split(source_3, '|');
	printf("\t#3 Array = %p, Expected {',,,Andy', 'Bobby', 'Charlie,,,', (null)}\n", result_3);
	print_array(result_3);
	free_array(result_3);

	char source_4[] = "      split       this for   me  !       ";
	printf("#4 str = %s, len = %ld\n", source_4, strlen(source_4));
	char **result_4 = ft_split(source_4, ' ');
	printf("\t#4 Array = %p \n", result_4);
	print_array(result_4);
	free_array(result_4);

	char source_5[] = "lorem ipsum dolor sit amet";
	printf("#5 str = %s, len = %ld\n", source_5, strlen(source_5));
	char **result_5 = ft_split(source_5, ' ');
	print_array(result_5);
	free_array(result_5);

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

}

