#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

// #define ft_strrchr strrchr

int	main(void)
{
	// Test case with string
	char str1[] = "hello";
	printf("Test Case 1: str = \"hello\", c = 'l'\n");
	printf("*str    = %p\n", &str1[0]);
	printf("Expected Output: A pointer to the first 'l' in \"hello\"\n");
	char *result1 = ft_strrchr(str1, 'l');
	printf("Result: ptr = %p\n\t'%s'\n\n", result1, result1 != NULL ? result1 : "NULL");

	// Test case with string where character is not found
	char str2[] = "world";
	printf("Test Case 2: str = \"world\", c = 'x'\n");
	printf("*str    = %p\n", &str2[0]);
	printf("Expected Output: NULL\n");
	char *result2 = ft_strrchr(str2, 'x');
	printf("Result: ptr = %p\n\t'%s'\n\n", result2, result2 != NULL ? result2: "NULL");

	// Test case with empty string
	char emptyStr[] = "";
	printf("Test Case 3: Empty string\n");
	printf("*str    = %p\n", &emptyStr[0]);
	printf("Expected Output: NULL\n");
	char *result3 = ft_strrchr(emptyStr, 'a');
	printf("Result: ptr = %p\n\t'%s'\n\n", result3, result3 != NULL ? result3 : "NULL");

	// Test case with special characters
	char str3[] = "hello, world!";
	printf("Test Case 5: str = \"hello, world!\", c = 'o'\n");
	printf("*str    = %p\n", &str3[0]);
	printf("Expected Output: A pointer to the first 'o' in the string\n");
	char *result5 = ft_strrchr(str3, 'o');
	printf("Result: ptr = %p\n\t'%s'\n\n", result5, result5 != NULL ? result5 : "NULL");

	// Test case to search for '\0
	printf("Test Case 5: Search for terminating null\n");
	printf("*str    = %p\n", &str3[0]);
	printf("Expected Output: A pointer to the terminating null\n");
	char *result4 = ft_strrchr(str3, '\0');
	printf("Result: ptr = %p\n\t'%s'\n\n", result4, result4 != NULL ? result4 : "NULL");
}

