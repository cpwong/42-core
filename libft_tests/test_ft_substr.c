#include "../libft/libft.h"
#include <stdio.h>

int	main(void)
{
	char str1[] = "hello, world";
	printf("Test Case 1: s = \"hello, world\", start = 0, len = 5\n");
	printf("Expected Output: \"hello\"\n");
	char *result1 = ft_substr(str1, 0, 5);
	if (result1 != NULL) {
		printf("Result: %s\n\n", result1);
		free(result1);
	} else {
		printf("Result: NULL\n\n");
	}

	char str2[] = "hello, world";
	printf("Test Case 2: s = \"hello, world\", start = 7, len = 5\n");
	printf("Expected Output: \"world\"\n");
	char *result2 = ft_substr(str2, 7, 5);
	if (result2 != NULL) {
		printf("Result: %s\n\n", result2);
		free(result2);
	} else {
		printf("Result: NULL\n\n");
	}

	char str3[] = "hello, world";
	printf("Test Case 3: s = \"hello, world\", start = 0, len = 100\n");
	printf("Expected Output: \"hello, world\"\n");
	char *result3 = ft_substr(str3, 0, 100);
	if (result3 != NULL) {
		printf("Result: %s\n\n", result3);
		free(result3);
	} else {
		printf("Result: NULL\n\n");
	}

	char str4[] = "hello, world";
	printf("Test Case 4: s = \"hello, world\", start = 20, len = 5\n");
	printf("Expected Output: \"\"\n");
	char *result4 = ft_substr(str4, 20, 5);
	if (result4 != NULL) {
		printf("Result: %s\n\n", result4);
		free(result4);
	} else {
		printf("Result: NULL\n\n");
	}

	char str5[] = "hello, world";
	printf("Test Case 5: s = \"hello, world\", start = 5, len = 0\n");
	printf("Expected Output: \"\"\n");
	char *result5 = ft_substr(str5, 5, 0);
	if (result5 != NULL) {
		printf("Result: %s\n\n", result5);
		free(result5);
	} else {
		printf("Result: NULL\n\n");
	}

	printf("Enter a string to test: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Enter the starting index: ");
	unsigned int start;
	scanf("%u", &start);
	printf("Enter the maximum length: ");
	size_t len;
	scanf("%zu", &len);
	char *customResult = ft_substr(customStr, start, len);
	if (customResult != NULL) {
		printf("Result: %s\n\n", customResult);
		free(customResult);
	} else {
		printf("Result: NULL\n\n");
	}
}
