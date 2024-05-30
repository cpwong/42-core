#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>

// #define ft_atoi atoi

int main(void)
{
	char str1[] = "42";
	printf("Test Case 1: str = \"42\"\n");
	printf("Expected Output: 42\n");
	printf("Result: %d\n\n", ft_atoi(str1));

	char str2[] = "-2147483648";
	printf("Test Case 2: str = \"-2147483648\"\n");
	printf("Expected Output: -2147483648\n");
	printf("Result: %d\n\n", ft_atoi(str2));

	char str2a[] = "2147483647";
	printf("Test Case 2a: str = \"2147483647\"\n");
	printf("Expected Output: 2147483647\n");
	printf("Result: %d\n\n", ft_atoi(str2a));

	char str3[] = "   +456";
	printf("Test Case 3: str = \"   +456\"\n");
	printf("Expected Output: 456\n");
	printf("Result: %d\n\n", ft_atoi(str3));

	char str4[] = " +01a6";
	printf("Test Case 4: str = \" +01a6\"\n");
	printf("Expected Output: 1\n");
	printf("Result: %d\n\n", ft_atoi(str4));

	char str5[] = "a 1";
	printf("Test Case 5: str = \"a 1\"\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_atoi(str5));

	char str6[] = "999999999999999999999999";
	printf("Test Case 6: str = \"999999999999999999999999\"\n");
	printf("Expected Output: 2147483647\n");
	printf("Result: %d\n\n", ft_atoi(str6));

	char str7[] = "+-54";
	printf("Test Case 9: str = \"%s\"\n", str7);
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_atoi(str7));

	char str8[] = "-+48";
	printf("Test Case 9: str = \"%s\"\n", str8);
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_atoi(str8));

	char str9[] = "--48";
	printf("Test Case 9: str = \"%s\"\n", str9);
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_atoi(str9));
}
