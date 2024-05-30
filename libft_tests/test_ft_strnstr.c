#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

int main(void) {
	char str1[] = "hello world";
	char tofind1[] = "world";
	printf("Test Case 1: str = \"hello world\", tofind = \"world\", len = %zu\n", ft_strlen(str1));
	printf("str = %p, | %c tofind = %p | %c\n", str1, *str1, tofind1, *tofind1);
	printf("Expected Output: A pointer to the substring \"world\" in \"hello world\"\n");
	char *result1 = ft_strnstr(str1, tofind1, ft_strlen(str1));
	printf("Result: %p\n", result1 != NULL ? result1 : "NULL");
	printf("Result: %s\n\n", result1 != NULL ? result1 : "NULL");

	char str2[] = "hello world";
	char tofind2[] = "xyz";
	printf("Test Case 2: str = \"hello world\", tofind = \"xyz\", len = %zu\n", ft_strlen(str2));
	printf("str = %p\n", str2);
	printf("Expected Output: NULL\n");
	char *result2 = ft_strnstr(str2, tofind2, ft_strlen(str2));
	printf("Result: %p\n", result2 != NULL ? result2 : "NULL");
	printf("Result: %s\n\n", result2 != NULL ? result2 : "NULL");

	char str3[] = "hello world";
	char tofind3[] = "hello";
	size_t len3 = 5;
	printf("Test Case 3: str = \"hello world\", tofind = \"hello\", len = %zu\n", len3);
	printf("str = %p\n", str3);
	printf("Expected Output: A pointer to the substring \"hello\" in \"hello world\"\n");
	char *result3 = ft_strnstr(str3, tofind3, len3);
	printf("Result: %p\n", result3 != NULL ? result3 : "NULL");
	printf("Result: %s\n\n", result3 != NULL ? result3 : "NULL");

	char str4[] = "aaxx";
	char tofind4[] = "xx";
	size_t len4 = 2;
	printf("Test Case 4: str = %s, tofind = %s, len = %zu\n", str4, tofind4, len4);
	printf("str = %p\n", str4);
	char *result4 = ft_strnstr(str4, tofind4, len4);
	printf("Result: %p\n", result4 != NULL ? result4 : "NULL");
	printf("Result: %s\n\n", result4 != NULL ? result4 : "NULL");

	size_t len5 = 3;
	printf("Test Case 4: str = %s, tofind = %s, len = %zu\n", str4, tofind4, len5);
	printf("str = %p, find = %p\n", str4, tofind4);
	char *result5 = ft_strnstr(str4, tofind4, len5);
	printf("Result: %p\n", result5 != NULL ? result5 : "NULL");
	printf("Result: %s\n\n", result5 != NULL ? result5 : "NULL");

	size_t len6 = 4;
	printf("Test Case 4: str = %s, tofind = %s, len = %zu\n", str4, tofind4, len6);
	printf("str = %p, find = %p\n", str4, tofind4);
	char *result6 = ft_strnstr(str4, tofind4, len6);
	printf("Result: %p\n", result6 != NULL ? result6 : "NULL");
	printf("Result: %s\n\n", result6 != NULL ? result6 : "NULL");

	// Additional test cases (edge cases)
	// printf("Enter a string to search: ");
	// char customStr[100];
	// scanf(" %99[^\n]", customStr);
	// printf("Enter a substring to find: ");
	// char customTofind[100];
	// scanf(" %99[^\n]", customTofind);
	// printf("Enter the maximum number of bytes to search: ");
	// size_t customLen;
	// scanf("%zu", &customLen);
	// char *result4 = ft_strnstr(customStr, customTofind, customLen);
	// printf("Result: %s\n\n", result4 != NULL ? result4 : "NULL");
}