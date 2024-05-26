#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char str1[] = "hello";
	char str2[] = ", world";
	printf("Test Case 1: s1 = \"hello\", s2 = \", world\"\n");
	printf("Expected Output: \"hello, world\"\n");
	char *result1 = ft_strjoin(str1, str2);
	if (result1 != NULL) {
		printf("Result: %s\n\n", result1);
		free(result1);
	} else {
		printf("Result: NULL\n\n");
	}

	char str3[] = "";
	char str4[] = "";
	printf("Test Case 2: s1 = \"\", s2 = \"\"\n");
	printf("Expected Output: \"\"\n");
	char *result2 = ft_strjoin(str3, str4);
	if (result2 != NULL) {
		printf("Result: %s\n\n", result2);
		free(result2);
	} else {
		printf("Result: NULL\n\n");
	}

	char str5[] = "hello";
	char str6[] = "";
	printf("Test Case 3: s1 = \"hello\", s2 = \"\"\n");
	printf("Expected Output: \"hello\"\n");
	char *result3 = ft_strjoin(str5, str6);
	if (result3 != NULL) {
		printf("Result: %s\n\n", result3);
		free(result3);
	} else {
		printf("Result: NULL\n\n");
	}

	char str7[] = "";
	char str8[] = "world";
	printf("Test Case 4: s1 = \"\", s2 = \"world\"\n");
	printf("Expected Output: \"world\"\n");
	char *result4 = ft_strjoin(str7, str8);
	if (result4 != NULL) {
		printf("Result: %s\n\n", result4);
		free(result4);
	} else {
		printf("Result: NULL\n\n");
	}

//	char str9[] = "hello";
	char str10[] = "world";
	printf("Test Case 5: s1 = NULL, s2 = \"world\"\n");
	printf("Expected Output: NULL\n");
	char *result5 = ft_strjoin(NULL, str10);
	if (result5 != NULL) {
		printf("Result: %s\n\n", result5);
		free(result5);
	} else {
		printf("Result: NULL\n\n");
	}

	// Test case: Concatenating two very long strings
	char longStr1[1000000] = "a";
	char longStr2[1000000] = "b";
	char *longResult = ft_strjoin(longStr1, longStr2);
	printf("Test Case 6: Concatenating two very long strings\n");
	printf("Expected Output: A string of length 2000000 (approx.)\n\n");
	if (longResult != NULL) {
		printf("Result length: %zu\n\n", ft_strlen(longResult));
		free(longResult);
	} else {
		printf("Result: NULL\n\n");
	}

	// Test case: Passing NULL as both input strings
	char *nullResult = ft_strjoin(NULL, NULL);
	printf("Test Case 7: Passing NULL as both input strings\n");
	printf("Expected Output: NULL\n\n");
	if (nullResult != NULL) {
		printf("Result: %s\n\n", nullResult);
		free(nullResult);
	} else {
		printf("Result: NULL\n\n");
	}

	printf("Enter the first string: ");
	char customStr1[100];
	scanf(" %99[^\n]", customStr1);
	printf("Enter the second string: ");
	char customStr2[100];
	scanf(" %99[^\n]", customStr2);
	char *customresult = ft_strjoin(customStr1, customStr2);
	if (customresult != NULL) {
		printf("Result: %s\n\n", customresult);
		free(customresult);
	} else {
		printf("Result: NULL\n\n");
	}
}
