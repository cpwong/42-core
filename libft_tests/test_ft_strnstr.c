#include "../libft.h"
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[] = "hello world";
	char tofind1[] = "world";
	printf("Test Case 1: str = \"hello world\", tofind = \"world\", len = ft_strlen(str1)\n");
	printf("Expected Output: A pointer to the substring \"world\" in \"hello world\"\n");
	char *result1 = ft_strnstr(str1, tofind1, ft_strlen(str1));
	printf("Result: %s\n\n", result1 != NULL ? result1 : "NULL");

	char str2[] = "hello world";
	char tofind2[] = "xyz";
	printf("Test Case 2: str = \"hello world\", tofind = \"xyz\", len = ft_strlen(str2)\n");
	printf("Expected Output: NULL\n");
	char *result2 = ft_strnstr(str2, tofind2, ft_strlen(str2));
	printf("Result: %s\n\n", result2 != NULL ? result2 : "NULL");

	char str3[] = "hello world";
	char tofind3[] = "hello";
	printf("Test Case 3: str = \"hello world\", tofind = \"hello\", len = 5\n");
	printf("Expected Output: A pointer to the substring \"hello\" in \"hello world\"\n");
	char *result3 = ft_strnstr(str3, tofind3, 5);
	printf("Result: %s\n\n", result3 != NULL ? result3 : "NULL");

	// Additional test cases (edge cases)
	printf("Enter a string to search: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Enter a substring to find: ");
	char customTofind[100];
	scanf(" %99[^\n]", customTofind);
	printf("Enter the maximum number of bytes to search: ");
	size_t customLen;
	scanf("%zu", &customLen);
	char *result4 = ft_strnstr(customStr, customTofind, customLen);
	printf("Result: %s\n\n", result4 != NULL ? result4 : "NULL");
}