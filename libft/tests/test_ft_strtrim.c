#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char str1[] = "  hello  ";
	char set1[] = " ";
	printf("Test Case 1: s1 = \"  hello  \", set = \" \"\n");
	printf("Expected Output: \"hello\"\n");
	char *result1 = ft_strtrim(str1, set1);
	if (result1 != NULL) {
		printf("Result: %s\n\n", result1);
		free(result1);
	} else {
		printf("Result: NULL\n\n");
	}

	char str2[] = "hello, world";
	char set2[] = ",";
	printf("Test Case 2: s1 = \"hello, world\", set = \",\"\n");
	printf("Expected Output: \"hello, world\"\n");
	char *result2 = ft_strtrim(str2, set2);
	if (result2 != NULL) {
		printf("Result: %s\n\n", result2);
		free(result2);
	} else {
		printf("Result: NULL\n\n");
	}

	char str3[] = "   ";
	char set3[] = " ";
	printf("Test Case 3: s1 = \"   \", set = \" \"\n");
	printf("Expected Output: \"\"\n");
	char *result3 = ft_strtrim(str3, set3);
	if (result3 != NULL) {
		printf("Result: %s\n\n", result3);
		free(result3);
	} else {
		printf("Result: NULL\n\n");
	}

	char str4[] = "abcdefghijk";
	char set4[] = "abcdefghijk";
	printf("Test Case 4: s1 = \"abcdefghijk\", set = \"abcdefghijk\"\n");
	printf("Expected Output: \"\"\n");
	char *result4 = ft_strtrim(str4, set4);
	if (result4 != NULL) {
		printf("Result: %s\n\n", result4);
		free(result4);
	} else {
		printf("Result: NULL\n\n");
	}

	char str5[] = "   hello   ";
	char set5[] = " ";
	printf("Test Case 5: s1 = \"   hello   \", set = \" \"\n");
	printf("Expected Output: \"hello\"\n");
	char *result5 = ft_strtrim(str5, set5);
	if (result5 != NULL) {
		printf("Result: %s\n\n", result5);
		free(result5);
	} else {
		printf("Result: NULL\n\n");
	}

	// User input case
	printf("Enter a string S1 to trim: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Enter the set of characters to trim: ");
	char customSet[100];
	scanf(" %99[^\n]", customSet);
	char *customResult = ft_strtrim(customStr, customSet);
	if (customResult != NULL) {
		printf("Result: %s\n\n", customResult);
		free(customResult);
	} else {
		printf("Result: NULL\n\n");
	}
}
