#include "../libft.h"
#include <stdio.h>
#include <string.h>

// #define ft_calloc calloc

int main(void)
{

	printf("Test Case 1: nmemb = 5, size = sizeof(int)\n");
	int *ptr1 = (int *)ft_calloc(5, sizeof(int));
	if (ptr1 != NULL) {
		printf("Allocated memory (hex): ");
		for (size_t i = 0; i < 5 * sizeof(int); i++) {
			printf("%02X ", *((unsigned char *)ptr1 + i));
		}
		printf("\n");
		free(ptr1);
	} else {
		printf("Memory allocation failed.\n");
	}
	printf("\n");

	printf("Test Case 2: nmemb = 3, size = sizeof(char)\n");
	char *ptr2 = (char *)ft_calloc(3, sizeof(char));
	if (ptr2 != NULL) {
		printf("Allocated memory (hex): ");
		for (size_t i = 0; i < 3 * sizeof(char); i++) {
			printf("%02X ", *((unsigned char *)ptr2 + i));
		}
		printf("\n");
		free(ptr2);
	} else {
		printf("Memory allocation failed.\n");
	}
	printf("\n");

	// printf("Enter the number of elements to allocate: ");
	// size_t numElements;
	// scanf("%zu", &numElements);
	// printf("Enter the size of each element: ");
	// size_t elementSize;
	// scanf("%zu", &elementSize);
	// void *ptr3 = ft_calloc(numElements, elementSize);
	// if (ptr3 != NULL) {
	// 	printf("Allocated memory (hex): ");
	// 	for (size_t i = 0; i < numElements * elementSize; i++) {
	// 		printf("%02X ", *((unsigned char *)ptr3 + i));
	// 	}
	// 	printf("\n");
	// 	free(ptr3);
	// } else {
	// 	printf("Memory allocation failed.\n");
	// }
	// printf("\n");
}
