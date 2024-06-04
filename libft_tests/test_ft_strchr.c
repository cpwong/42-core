#include "../libft/libft.h"
#include <assert.h>
#include <stdio.h>
#include <string.h>

// #define ft_strchr strchr

int	main(void)
{
	// Test case with string
	char str1[] = "hello";
	printf("Test Case 1: s = \"hello\", c = 'l'\n");
	printf("Expected Output: A pointer to the first 'l' in \"hello\"\n");
	char *result1 = ft_strchr(str1, 'l');
	printf("Result: ptr = %p\n\t'%s'\n\n", result1, result1 != NULL ? result1 : "NULL");

	// Test case with string where character is not found
	char str2[] = "world";
	printf("Test Case 2: s = \"world\", c = 'x'\n");
	printf("Expected Output: NULL\n");
	char *result2 = ft_strchr(str2, 'x');
	printf("Result: ptr = %p\n\t'%s'\n\n", result2 ,result2 != NULL ? result2 : "NULL");

	// Test case with empty string
	char emptyStr[] = "";
	printf("Test Case 3: Empty string\n");
	printf("Expected Output: NULL\n");
	char *result3 = ft_strchr(emptyStr, 'a');
	printf("Result: ptr = %p\n\t'%s'\n\n", result3 ,result3 != NULL ? result3 : "NULL");

	// Test case with special characters
	char str3[] = "hello, world!";
	printf("Test Case 4: s = \"hello, world!\", c = '!'\n");
	printf("Expected Output: A pointer to the first '!' in the string\n");
	char *result5 = ft_strchr(str3, '!');
	printf("Result: ptr = %p\n\t'%s'\n\n", result5 ,result5 != NULL ? result5 : "NULL");

	// Test case to search for '\0
	printf("Test Case 5: Search for terminating null\n");
	printf("Expected Output: A pointer to the terminating null\n");
	char *result4 = ft_strchr(str3, '\0');
	printf("Result: ptr = %p\n\t'%s'\n\n", result4 ,result4 != NULL ? result4 : "NULL");
}

