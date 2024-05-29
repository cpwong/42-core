#include "../libft/libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(void)
{
	// Test case 1: destination buffer size exactly fits the concatenated string
	char dst1[12] = "hello";
	char src1[] = " world";
	printf("Test Case 1: dst = \"hello\", src = \" world\", dstsize = sizeof(dst1)\n");
	printf("Expected Output: dst = \"hello world\", len = 11\n");
	printf("Before: dst = \"%s\"\n", dst1);
	size_t len1 = ft_strlcat(dst1, src1, sizeof(dst1));
	printf("After: dst = \"%s\", len = %zu\n\n", dst1, len1);

	// Test case 2: destination buffer size smaller than the concatenated string
	char dst2[10] = "abc";
	char src2[] = "defghijkl";
	printf("Test Case 2: dst = \"abc\", src = \"defghijkl\", dstsize = %zu\n", sizeof(dst2));
	printf("Expected Output: dst = \"abcdefghi\", len = 10\n");
	printf("Before: dst = \"%s\"\n", dst2);
	size_t len2 = ft_strlcat(dst2, src2, sizeof(dst2));
	printf("After: dst = \"%s\", len = %zu\n\n", dst2, len2);

	// Test case 3: destination buffer already full
	char dst3[5] = "1234";
	char src3[] = "5678";
	printf("Test Case 3: dst = \"1234\", src = \"5678\", dstsize = sizeof(dst3)\n");
	printf("Expected Output: dst = \"1234\", len = 4\n");
	printf("Before: dst = \"%s\"\n", dst3);
	size_t len3 = ft_strlcat(dst3, src3, sizeof(dst3));
	printf("After: dst = \"%s\", len = %zu\n\n", dst3, len3);

	// Test case 4: empty source string
	char dst4[10] = "abc";
	char src4[] = "";
	printf("Test Case 4: dst = \"abc\", src = \"\", dstsize = sizeof(dst4)\n");
	printf("Expected Output: dst = \"abc\", len = 3\n");
	printf("Before: dst = \"%s\"\n", dst4);
	size_t len4 = ft_strlcat(dst4, src4, sizeof(dst4));
	printf("After: dst = \"%s\", len = %zu\n\n", dst4, len4);

	// Test case 5: NULL pointers
	printf("Test Case 5: NULL pointers\n");
	printf("Expected Output: No change, len = 0\n");
	printf("Before: dst = NULL, src = NULL\n");
	size_t len5 = ft_strlcat(NULL, NULL, 0);
	printf("After: dst = NULL, src = NULL, len = %zu\n\n", len5);

	// Test case 6: custom strings
	// printf("Enter a custom destination string: ");
	// char customDst[100];
	// scanf(" %99[^\n]", customDst);
	// printf("Enter a custom source string: ");
	// char customSrc[100];
	// scanf(" %99[^\n]", customSrc);
	// printf("Enter the size of the destination buffer: ");
	// size_t customDstSize;
	// scanf("%zu", &customDstSize);
	// printf("Before: dst = \"%s\"\n", customDst);
	// size_t len6 = ft_strlcat(customDst, customSrc, customDstSize);
	// printf("After: dst = \"%s\", len = %zu\n\n", customDst, len6);
}
