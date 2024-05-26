#include "../libft.h"
#include <stdio.h>

void printMemory(const void *ptr, size_t size) {
	if (ptr == NULL) {
		printf("NULL");
		return;
	}

	const unsigned char *bytes = (const unsigned char *)ptr;
	for (size_t i = 0; i < size; i++) {
		printf("%c", (bytes[i] != '\0') ? (char)bytes[i] : '.'); // Print non-empty bytes as characters, empty bytes as dots
	}
}

void printArray(const int *arr, size_t size) {
	printf("{");
	for (size_t i = 0; i < size / sizeof(int); i++) {
		printf("%d", arr[i]);
		if (i < size / sizeof(int) - 1) {
			printf(", ");
		}
	}
	printf("}");
}

int	main(void)
{
	printf("Function: void ft_bzero(void *src, size_t len)\n");
	printf("Description: The ft_bzero() function erases the data in \nthe n bytes of the memory starting at the location pointed to by src, by writing zeros (bytes containing '\\0') to that area.\n");
	printf("Input: A pointer to the memory area to be filled with zeros, \nand the number of bytes to fill\n");
	printf("Output: None (modifies the memory area in-place)\n\n");

	// Test Case 1: Testing with a null pointer
	// printf("Test Case 1: src = NULL, len = 5\n");
	// printf("Expected Output: No memory area to modify\n");
	// printf("Before: ");
	// ft_bzero(NULL, 5); // Passing a null pointer
	// printf("After: NULL (No memory area to modify)\n\n");

	char buffer1[] = "hello";
	printf("Test Case 2: src = \"hello\", len = 3\n");
	printf("Expected Output: \"\\0\\0\\0\\x65\\x6C\\x6C\\x6F\" (ASCII representation of the null-terminated string \"\\0\\0\\0ello\")\n");
	printf("Before: ");
	printMemory(buffer1, sizeof(buffer1) - 1); // Exclude the null terminator from printing
	printf("\n");
	ft_bzero(buffer1, 3);
	printf("After: ");
	printMemory(buffer1, sizeof(buffer1) - 1); // Exclude the null terminator from printing
	printf("\n\n");

	// Test Case 3: Testing with overlapping memory areas
	char buffer2[] = "abcdefgh";
	printf("Test Case 3: src = \"abcdefgh\", len = 4 (Overlapping memory areas)\n");
	printf("Expected Output: \"ab\\0\\0\\0\\x67\\x68\\x69\" (ASCII representation of the null-terminated string \"ab\\0\\0\\0ghi\")\n");
	printf("Before: ");
	printMemory(buffer2, sizeof(buffer2) - 1); // Exclude the null terminator from printing
	printf("\n");
	ft_bzero(buffer2 + 2, 4); // Overlapping memory areas
	printf("After: ");
	printMemory(buffer2, sizeof(buffer2) - 1);
	printf("\n\n");

	// Test Case 4: Testing with edge case (zero-length memory area)
	int buffer3[] = {1, 2, 3, 4, 5};
	printf("Test Case 4: src = {1, 2, 3, 4, 5}, len = 0 (Edge case)\n");
	printf("Expected Output: No change\n");
	printf("Before: ");
	printArray(buffer3, sizeof(buffer3));
	printf("\n");
	ft_bzero(buffer3, 0); // Edge case: zero-length memory area
	printf("After: ");
	printArray(buffer3, sizeof(buffer3));
	printf("\n\n");

	// Test Case 5: Testing with different data types and sizes
	double buffer4[3] = {3.14, 2.718, 1.618};
	printf("Test Case 5: src = {3.14, 2.718, 1.618}, len = sizeof(buffer4)\n");
	printf("Expected Output: \"\\0\\0\\0\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\" (ASCII representation of the null-terminated string \"\\0\\0\\0\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\\x00\")\n");
	printf("Before: ");
	printMemory(buffer4, sizeof(buffer4));
	printf("\n");
	ft_bzero(buffer4, sizeof(buffer4));
	printf("After: ");
	printMemory(buffer4, sizeof(buffer4));
	printf("\n\n");
}
