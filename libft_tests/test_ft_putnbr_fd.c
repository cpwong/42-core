#include "../libft/libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main(void)
{
	// Test Case 1: Writing to standard output (fd = 1)
	printf("Test Case 1: Writing to standard output (fd = 1)\n");
	printf("Expected Output: '42' should be printed to the console\n");
	ft_putnbr_fd(42, 1);
	printf("\n\n");

	// Test Case 2: Writing to standard error (fd = 2)
	printf("Test Case 2: Writing to standard error (fd = 2)\n");
	printf("Expected Output: '-123' should be printed to the standard error stream\n");
	ft_putnbr_fd(-123, 2);
	printf("\n\n");

	// Test Case 3: Writing to a file (fd = 3)
	printf("Test Case 3: Writing to a file (fd = 3)\n");
	printf("Enter an integer to write to a file: ");
	int customInt;
	scanf("%d", &customInt);
	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Failed to open or create the file.\n");
		return (0);
	}
	ft_putnbr_fd(customInt, fd);
	close(fd);
	printf("Integer written to the file 'test_file.txt'\n\n");
}
