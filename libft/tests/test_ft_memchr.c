#include "../libft.h"
#include <stdio.h>
#include <string.h>

#define ft_memchr memchr

int main(void) {

	// Test case with string
	char str1[] = "hello";
	printf("Test Case 1: s = \"hello\", c = 'l', n = ft_strlen(s) + 1\n");
	printf("Expected Output: A pointer to the first 'l' in \"hello\"\n");
	void *result1 = ft_memchr(str1, 'l', ft_strlen(str1) + 1);
	printf("Result: %s\n\n", result1 != NULL ? (char *)result1 : "NULL");

	// Test case with array of integers
	int arr[] = {1, 2, 3, 4, 5};
	printf("Test Case 2: s = {1, 2, 3, 4, 5}, c = 3, n = sizeof(arr)\n");
	printf("Expected Output: A pointer to the value 3 in the array\n");
	void *result2 = ft_memchr(arr, 3, sizeof(arr));
	printf("Result: %d\n\n", result2 != NULL ? *(int *)result2 : -1);

	// Test case with empty string
	char emptyStr[] = "";
	printf("Test Case 3: Empty string\n");
	printf("Expected Output: NULL\n");
	void *result3 = ft_memchr(emptyStr, 'a', 1);
	printf("Result: %s\n\n", result3 != NULL ? "Not NULL" : "NULL");

	// Test case with NULL pointer
	printf("Test Case 4: NULL pointer\n");
	printf("Expected Output: NULL\n");
	void *result4 = ft_memchr(NULL, 'a', 0);
	printf("Result: %s\n\n", result4 != NULL ? "Not NULL" : "NULL");

	// Test case with character not found
	char str2[] = "hello";
	printf("Test Case 5: Character not found\n");
	printf("Expected Output: NULL\n");
	void *result5 = ft_memchr(str2, 'z', ft_strlen(str2));
	printf("Result: %s\n\n", result5 != NULL ? (char *)result5 : "NULL");
}
