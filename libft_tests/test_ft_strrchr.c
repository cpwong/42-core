#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

// #define ft_strrchr strrchr

int	main(void)
{
	// Test case with string
	char str1[] = "hello";
	printf("Test Case 1: s = \"hello\", c = 'l'\n");
	printf("Expected Output: A pointer to the first 'l' in \"hello\"\n");
	char *result1 = ft_strrchr(str1, 'l');
	printf("Result: %s\n", result1 != NULL ? result1 : "NULL");
	printf("*str    = %p\n", &str1[0]);
	printf("*result = %p\n\n", result1);

	// Test case with string where character is not found
	char str2[] = "world";
	printf("Test Case 2: s = \"world\", c = 'x'\n");
	printf("Expected Output: NULL\n");
	char *result2 = ft_strrchr(str2, 'x');
	printf("Result: %s\n", result2 != NULL ? result2 : "NULL");
	printf("*str    = %p\n", &str2[0]);
	printf("*result = %p\n\n", result2);

	// Test case with empty string
	char emptyStr[] = "";
	printf("Test Case 3: Empty string\n");
	printf("Expected Output: NULL\n");
	char *result3 = ft_strrchr(emptyStr, 'a');
	printf("Result: %s\n", result3 != NULL ? result3 : "NULL");
	printf("*str    = %p\n", &emptyStr[0]);
	printf("*result = %p\n\n", result3);

	// Test case with special characters
	char str3[] = "hello, world!";
	printf("Test Case 5: s = \"hello, world!\", c = '!'\n");
	printf("Expected Output: A pointer to the first '!' in the string\n");
	char *result5 = ft_strrchr(str3, '!');
	printf("Result: %s\n", result5 != NULL ? result5 : "NULL");
	printf("*str    = %p\n", &str3[0]);
	printf("*result = %p\n\n", result5);

	// Test case to search for '\0
	printf("Test Case 5: Search for terminating null\n");
	printf("Expected Output: A pointer to the terminating null\n");
	char *result4 = ft_strrchr(str3, '\0');
	printf("Result: %s\n", result4 != NULL ? result4 : "NULL");
	printf("*str    = %p\n", &str3[0]);
	printf("*result = %p\n\n", result4);
}

