#include "../libft/libft.h"
#include <stdio.h>

int	main(void)
{
	printf("Test Case 1: n = 0\n");
	printf("Expected Output: \"0\"\n");
	char *result1 = ft_itoa(0);
	if (result1 != NULL) {
		printf("Result: %s\n\n", result1);
		free(result1);
	} else {
		printf("Result: NULL\n\n");
	}

	printf("Test Case 2: n = 42\n");
	printf("Expected Output: \"42\"\n");
	char *result2 = ft_itoa(42);
	if (result2 != NULL) {
		printf("Result: %s\n\n", result2);
		free(result2);
	} else {
		printf("Result: NULL\n\n");
	}

	printf("Test Case 3: n = -123\n");
	printf("Expected Output: \"-123\"\n");
	char *result3 = ft_itoa(-123);
	if (result3 != NULL) {
		printf("Result: %s\n\n", result3);
		free(result3);
	} else {
		printf("Result: NULL\n\n");
	}

	printf("Test Case 4: n = 2147483647 (INT_MAX)\n");
	printf("Expected Output: \"2147483647\"\n");
	char *result4 = ft_itoa(2147483647);
	if (result4 != NULL) {
		printf("Result: %s\n\n", result4);
		free(result4);
	} else {
		printf("Result: NULL\n\n");
	}

	printf("Test Case 5: n = -2147483648 (INT_MIN)\n");
	printf("Expected Output: \"-2147483648\"\n");
	char *result5 = ft_itoa(-2147483648);
	if (result5 != NULL) {
		printf("Result: %s\n\n", result5);
		free(result5);
	} else {
		printf("Result: NULL\n\n");
	}

	printf("Enter an integer to convert: ");
	int customInt;
	scanf("%d", &customInt);
	char *result6 = ft_itoa(customInt);
	if (result6 != NULL) {
		printf("Result: %s\n\n", result6);
		free(result6);
	} else {
		printf("Result: NULL\n\n");
	}
}