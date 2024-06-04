#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

// #define ft_memcmp memcmp

int	main(void)
{

	// Test cases with strings
	char str1[] = "hello";
	char str2[] = "hello";
	printf("Test Case 1: dest = \"hello\", src = \"hello\", n = %ld\n", ft_strlen(str1) + 1);
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_memcmp(str1, str2, ft_strlen(str1) + 1));

	char str3[] = "hello";
	char str4[] = "world";
	printf("Test Case 2: dest = \"hello\", src = \"world\", n = 3\n");
	printf("Expected Output: A value less than 0\n");
	printf("Result: %d\n\n", ft_memcmp(str3, str4, 3));

	// Test cases with arrays of integers
	int arr1[] = {1, 2, 3, 4, 5};
	int arr2[] = {1, 2, 3, 4, 5};
	printf("Test Case 3: dest = {1, 2, 3, 4, 5}, src = {1, 2, 3, 4, 5}, n = %ld\n", sizeof(arr1)/sizeof(int));
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_memcmp(arr1, arr2, sizeof(arr1)));

	// Test case with different data types (float)
	float f1 = 3.14f;
	float f2 = 3.14f;
	printf("Test Case 4: dest = %f, src = %f, n = %ld\n", f1, f2, sizeof(float));
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_memcmp(&f1, &f2, sizeof(float)));

	// Test case with overlapping memory areas
	int overlap[] = {1, 2, 3, 4, 5};
	printf("Test Case 5: Overlapping memory areas\n");
	printf("Expected Output: A value less than 0\n");
	printf("Result: %d\n\n", ft_memcmp(overlap, overlap + 1, 4));

	// Test case with NULL pointers
	printf("Test Case 6: NULL pointers\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_memcmp(NULL, NULL, 0));

}
