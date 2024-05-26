#include "../libft.h"
#include <stdio.h>
#include <string.h>

// # define ft_strncmp strncmp

int	main(void)
{
	// Test case with strings
	char str1[] = "hello";
	char str2[] = "hello";
	printf("Test Case 1: s1 = \"hello\", s2 = \"hello\", n = 5\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_strncmp(str1, str2, 5));

	// Test case with different strings
	char str3[] = "hello";
	char str4[] = "world";
	printf("Test Case 2: s1 = \"hello\", s2 = \"world\", n = 3\n");
	printf("Expected Output: A value less than 0\n");
	printf("Result: %d\n\n", ft_strncmp(str3, str4, 3));

	// Test case with identical strings but limited comparison
	char str5[] = "abc";
	char str6[] = "abc";
	printf("Test Case 3: s1 = \"abc\", s2 = \"abc\", n = 2\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_strncmp(str5, str6, 2));

	// Test case with empty strings
	char emptyStr1[] = "";
	char emptyStr2[] = "";
	printf("Test Case 4: Empty strings\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_strncmp(emptyStr1, emptyStr2, 1));

	// Test case with NULL pointers
	printf("Test Case 5: NULL pointers\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_strncmp(NULL, NULL, 0));

	// Additional custom test case
	// printf("Enter the first string: ");
	// char customStr1[100];
	// scanf(" %99[^\n]", customStr1);
	// printf("Enter the second string: ");
	// char customStr2[100];
	// scanf(" %99[^\n]", customStr2);
	// printf("Enter the number of bytes to compare: ");
	// size_t n;
	// scanf("%zu", &n);
	// printf("Result: %d\n\n", ft_strncmp(customStr1, customStr2, n));
}
