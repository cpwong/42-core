#include "../libft.h"
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	// Test Case 1: Writing to standard output (fd = 1)
	printf("Test Case 1: Writing to standard output (fd = 1)\n");
	printf("Expected Output: 'X' should be printed to the console\n");
	ft_putchar_fd('X', 1);
	printf("\n\n");

	// Test Case 2: Writing to standard error (fd = 2)
	printf("Test Case 2: Writing to standard error (fd = 2)\n");
	printf("Expected Output: 'E' should be printed to the standard error stream\n");
	ft_putchar_fd('E', 2);
	printf("\n\n");

	// Test Case 3: Writing to a file (fd = 3)
	printf("Test Case 3: Writing to a file (fd = 3)\n");
	printf("Enter a character to write to a file: ");
	char customChar;
	scanf(" %c", &customChar);
	#include <fcntl.h> // Include the necessary header file

	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1) {
		printf("Failed to open or create the file.\n");
		return (0);
	}
	ft_putchar_fd(customChar, fd);
	close(fd);
	printf("Character written to the file 'test_file.txt'\n\n");
}
