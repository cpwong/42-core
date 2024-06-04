#include "../libft/libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	// Test Case 1: Writing to standard output (fd = 1)
	printf("Test Case 1: Writing to standard output (fd = 1)\n");
	printf("Expected Output: 'Hello, world!' should be printed to the console, followed by a newline\n");
	ft_putendl_fd("Hello, world!", 1);
	printf("\n");

	// Test Case 2: Writing to standard error (fd = 2)
	printf("Test Case 2: Writing to standard error (fd = 2)\n");
	printf("Expected Output: 'Error message' should be printed to the standard error stream, followed by a newline\n");
	ft_putendl_fd("Error message", 2);
	printf("\n");

	// Test Case 3: Writing to a file (fd = 3)
	printf("Test Case 3: Writing to a file (fd = 3)\n");
	printf("Enter a string to write to a file: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	#include <fcntl.h>
	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1) {
		printf("Failed to open or create the file.\n");
		return (0);
	}
	ft_putendl_fd(customStr, fd);
	close(fd);
	printf("String written to the file 'test_file.txt', followed by a newline\n\n");
}
