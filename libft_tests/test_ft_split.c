#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

void	print_array(char **array)
{
	int	i = 0;

	while (array[i] != 0)
	{
		printf("\t...i = %d, array[i] = %s\n", i, array[i]);
		i++;
	}
	printf("\t...i = %d, array[i] = %p\n\n", i, array[i]);
}


int	main(void)
{
	char **result_0 = ft_split("", '\0');
	printf("#0 Array = %p, Expected: {(null)}\n", result_0);
	print_array(result_0);

	char **result_1 = ft_split("Andy", ' ');
	printf("#1 Array = %p, Expected: {'Andy', (null)}\n", result_1);
	print_array(result_1);

	char **result_2 = ft_split("Andy,Bobby,Charlie", ',');
	printf("#2 Array = %p, Expected {'Andy', 'Bobby', 'Charlie', (null)}\n", result_2);
	print_array(result_2);

	char **result_3 = ft_split(",,,Andy|Bobby|Charlie,,,", '|');
	printf("#3 Array = %p, Expected {',,,Andy', 'Bobby', 'Charlie,,,', (null)}\n", result_3);
	print_array(result_3);

	char **result_4 = ft_split("aaaaabbbbbccccc", 'a');
	printf("#4 Array = %p, Expected {'bbbbbccccc', (null)}\n", result_4);
	print_array(result_4);

	char **result_5 = ft_split("Andy Bobby Charlie", ' ');
	printf("#3 Array = %p, Expected {'Andy', 'Bobby', 'Charlie', (null)}\n", result_3);
	print_array(result_5);


}
/*
int main(void)
{
	// Test cases with known input and expected output
	char str1[] = "hello,world,test";
	char c1 = ',';
	printf("Test Case 1: str = \"hello,world,test\", charset = \",\"\n");
	printf("Expected Output: [\"hello\", \"world\", \"test\"]\n");
	char **result1 = ft_split(str1, c1);
	printf("Result: ");
	if (result1 != NULL) {
		for (int i = 0; result1[i] != NULL; i++) {
			printf("\"%s\" ", result1[i]);
		}
		printf("\n\n");
		// Free the allocated memory
		for (int i = 0; result1[i] != NULL; i++) {
			free(result1[i]);
		}
		free(result1);
	} else {
		printf("NULL\n\n");
	}

	char str2[] = "hello world test";
	char c2 = ' ';
	printf("Test Case 2: str = \"hello world test\", charset = \" \"\n");
	printf("Expected Output: [\"hello\", \"world\", \"test\"]\n");
	char **result2 = ft_split(str2, c2);
	printf("Result: ");
	if (result2 != NULL) {
		for (int i = 0; result2[i] != NULL; i++) {
			printf("\"%s\" ", result2[i]);
		}
		printf("\n\n");
		// Free the allocated memory
		for (int i = 0; result2[i] != NULL; i++) {
			free(result2[i]);
		}
		free(result2);
	} else {
		printf("NULL\n\n");
	}

	char str3[] = "hello";
	char c3 = ',';
	printf("Test Case 3: str = \"hello\", charset = \",\"\n");
	printf("Expected Output: [\"hello\"]\n");
	char **result3 = ft_split(str3, c3);
	printf("Result: ");
	if (result3 != NULL) {
		for (int i = 0; result3[i] != NULL; i++) {
			printf("\"%s\" ", result3[i]);
		}
		printf("\n\n");
		// Free the allocated memory
		for (int i = 0; result3[i] != NULL; i++) {
			free(result3[i]);
		}
		free(result3);
	} else {
		printf("NULL\n\n");
	}

	char str4[] = "";
	char c4 = ',';
	printf("Test Case 4: str = \"\", charset = \",\"\n");
	printf("Expected Output: [\"\"]\n");
	char **result4 = ft_split(str4, c4);
	printf("Result: ");
	if (result4 != NULL) {
		for (int i = 0; result4[i] != NULL; i++) {
			printf("\"%s\" ", result4[i]);
		}
		printf("\n\n");
		// Free the allocated memory
		for (int i = 0; result4[i] != NULL; i++) {
			free(result4[i]);
		}
		free(result4);
	} else {
		printf("NULL\n\n");
	}

	char str5[] = "hello,,world,,test";
	char c5 = ',';
	printf("Test Case 5: str = \"hello,,world,,test\", charset = \",\"\n");
	printf("Expected Output: [\"hello\", \"world\", \"test\"]\n");
	char **result5 = ft_split(str5, c5);
	printf("Result: ");
	if (result5 != NULL) {
		for (int i = 0; result5[i] != NULL; i++) {
			printf("\"%s\" ", result5[i]);
		}
		printf("\n\n");
		// Free the allocated memory
		for (int i = 0; result5[i] != NULL; i++) {
			free(result5[i]);
		}
		free(result5);
	} else {
		printf("NULL\n\n");
	}

	// // User input case
	// printf("Enter a string to split: ");
	// char customStr[100];
	// scanf(" %99[^\n]", customStr);
	// printf("Enter the set of characters to use as delimiters: ");
	// char customCharset[100];
	// scanf(" %99[^\n]", customCharset);
	// char **customResult = ft_split(customStr, customCharset);
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
*/
