#include <limits.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
// for size_max
#include <stdint.h>
// for file operations
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include "libft.h"

// Helper function to clear the screen
void clearScreen() {
	system("clear||cls");
}

// Test cases for each function
void testFtIsalpha() {
	clearScreen();
	printf("Function: int ft_isalpha(int c)\n");
	printf("Description: The ft_isalpha() function tests for any character for which isupper(c) or islower(c) is 1.\n");
	printf("Input: An integer representing a character\n");
	printf("Output: Non-zero value (1) if the character is an alphabetic letter, zero (0) otherwise\n\n");

	printf("Test Case 1: c = 'a'\n");
	printf("Expected Output: Non-zero value (1)\n");
	printf("Result: %d\n\n", ft_isalpha('a'));

	printf("Test Case 2: c = '5'\n");
	printf("Expected Output: Zero (0)\n");
	printf("Result: %d\n\n", ft_isalpha('5'));

	printf("Test Case 3: c = ' ' (space)\n");
	printf("Expected Output: Zero (0)\n");
	printf("Result: %d\n\n", ft_isalpha(' '));

	printf("Enter a custom character to test: ");
	char customChar;
	scanf(" %c", &customChar);
	printf("Result: %d\n\n", ft_isalpha(customChar));
}

void testFtIsdigit() {
	clearScreen();
	printf("Function: int ft_isdigit(int c)\n");
	printf("Description: The ft_isdigit() function tests for a decimal digit character.\n");
	printf("Input: An integer representing a character\n");
	printf("Output: Non-zero value (1) if the character is a decimal digit, zero (0) otherwise\n\n");

	printf("Test Case 1: c = '5'\n");
	printf("Expected Output: Non-zero value (1)\n");
	printf("Result: %d\n\n", ft_isdigit('5'));

	printf("Test Case 2: c = 'a'\n");
	printf("Expected Output: Zero (0)\n");
	printf("Result: %d\n\n", ft_isdigit('a'));

	printf("Test Case 3: c = ' ' (space)\n");
	printf("Expected Output: Zero (0)\n");
	printf("Result: %d\n\n", ft_isdigit(' '));

	printf("Enter a custom character to test: ");
	char customChar;
	scanf(" %c", &customChar);
	printf("Result: %d\n\n", ft_isdigit(customChar));
}
void testFtIsalnum() {
	clearScreen();
	printf("Function: int ft_isalnum(int c)\n");
	printf("Description: The ft_isalnum() function tests for any character for which isalpha(c) or isdigit(c) is 1.\n");
	printf("Input: An integer representing a character\n");
	printf("Output: Non-zero value (1) if the character is an alphanumeric character, zero (0) otherwise\n\n");

	printf("Test Case 1: c = 'a'\n");
	printf("Expected Output: Non-zero value (1)\n");
	printf("Result: %d\n\n", ft_isalnum('a'));

	printf("Test Case 2: c = '5'\n");
	printf("Expected Output: Non-zero value (1)\n");
	printf("Result: %d\n\n", ft_isalnum('5'));

	printf("Test Case 3: c = ' ' (space)\n");
	printf("Expected Output: Zero (0)\n");
	printf("Result: %d\n\n", ft_isalnum(' '));

	printf("Enter a custom character to test: ");
	char customChar;
	scanf(" %c", &customChar);
	printf("Result: %d\n\n", ft_isalnum(customChar));
}

/*
void testFtIsascii() {
	clearScreen();
	printf("Function: int ft_isascii(int c)\n");
	printf("Description: The ft_isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.\n");
	printf("Input: An integer representing a character\n");
	printf("Output: Non-zero value (1) if the character is an ASCII character, zero (0) otherwise\n\n");

	printf("Test Case 1: c = 'a'\n");
	printf("Expected Output: Non-zero value (1)\n");
	printf("Result: %d\n\n", ft_isascii('a'));

	printf("Test Case 2: c = 128 (outside ASCII range)\n");
	printf("Expected Output: Zero (0)\n");
	printf("Result: %d\n\n", ft_isascii(128));

	printf("Test Case 3: c = '\\n' (newline)\n");
	printf("Expected Output: Non-zero value (1)\n");
	printf("Result: %d\n\n", ft_isascii('\n'));

	printf("Enter a custom character to test: ");
	char customChar;
	scanf(" %c", &customChar);
	printf("Result: %d\n\n", ft_isascii(customChar));
}

void testFtIsprint() {
	clearScreen();
	printf("Function: int ft_isprint(int c)\n");
	printf("Description: The ft_isprint() function tests for any printing character, including space (` `).\n");
	printf("Input: An integer representing a character\n");
	printf("Output: Non-zero value (1) if the character is a printing character, zero (0) otherwise\n\n");

	printf("Test Case 1: c = 'a'\n");
	printf("Expected Output: Non-zero value (1)\n");
	printf("Result: %d\n\n", ft_isprint('a'));

	printf("Test Case 2: c = '\\n' (newline)\n");
	printf("Expected Output: Zero (0)\n");
	printf("Result: %d\n\n", ft_isprint('\n'));

	printf("Test Case 3: c = ' ' (space)\n");
	printf("Expected Output: Non-zero value (1)\n");
	printf("Result: %d\n\n", ft_isprint(' '));

	printf("Enter a custom character to test: ");
	char customChar;
	scanf(" %c", &customChar);
	printf("Result: %d\n\n", ft_isprint(customChar));
}

void testFtStrlen() {
	clearScreen();
	printf("Function: size_t ft_strlen(const char *s)\n");
	printf("Description: The ft_strlen() function computes the length of the string s.\n");
	printf("Input: A pointer to a null-terminated string\n");
	printf("Output: The length of the string\n\n");

	printf("Test Case 1: s = \"hello\"\n");
	printf("Expected Output: 5\n");
	printf("Result: %zu\n\n", ft_strlen("hello"));

	printf("Test Case 2: s = \"\"\n");
	printf("Expected Output: 0\n");
	printf("Result: %zu\n\n", ft_strlen(""));

	printf("Test Case 3: s = \"abcdefgh\"\n");
	printf("Expected Output: 8\n");
	printf("Result: %zu\n\n", ft_strlen("abcdefgh"));

	printf("Enter a custom string to test: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Result: %zu\n\n", ft_strlen(customStr));
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

void testFtMemset() {
	clearScreen();
	printf("Function: void *ft_memset(void *b, int c, size_t len)\n");
	printf("Description: The ft_memset() function fills the first len bytes of the memory area pointed to by b with the constant byte c.\n");
	printf("Input: A pointer to the memory area to be filled, the constant byte value, and the number of bytes to fill\n");
	printf("Output: None (modifies the memory area in-place)\n\n");

	// Test Case 1: Testing with a null pointer
	printf("Test Case 1: b = NULL, c = 'x', len = 5\n");
	printf("Expected Output: No memory area to modify\n");
	printf("Before: ");
	printMemory(NULL, 5); // Passing a null pointer
	printf("\n");
	ft_memset(NULL, 'x', 5); // Passing a null pointer
	printf("After: NULL (No memory area to modify)\n\n");

	char buffer1[] = "hello";
	printf("Test Case 2: b = \"hello\", c = 'x', len = 3\n");
	printf("Expected Output: \"xxxlo\" (ASCII representation of the null-terminated string \"xxxlo\")\n");
	printf("Before: ");
	printMemory(buffer1, sizeof(buffer1) - 1); // Exclude the null terminator from printing
	printf("\n");
	ft_memset(buffer1, 'x', 3);
	printf("After: ");
	printMemory(buffer1, sizeof(buffer1) - 1);
	printf("\n\n");

	int buffer2[] = {1, 2, 3, 4, 5};
	printf("Test Case 3: b = {1, 2, 3, 4, 5}, c = 0, len = sizeof(buffer2)\n");
	printf("Expected Output: {0, 0, 0, 0, 0} (interpreted as bytes)\n");
	printf("Before: ");
	printArray(buffer2, sizeof(buffer2));
	printf("\n");
	ft_memset(buffer2, 0, sizeof(buffer2));
	printf("After: ");
	printArray(buffer2, sizeof(buffer2));
	printf("\n\n");

	// Test Case 4: Testing with overlapping memory areas
	char buffer3[] = "abcdefgh";
	printf("Test Case 4: b = \"abcdefgh\", c = 'x', len = 4 (Overlapping memory areas)\n");
	printf("Expected Output: \"xxxxefgh\" (ASCII representation of the null-terminated string \"xxxxefgh\")\n");
	printf("Before: ");
	printMemory(buffer3, sizeof(buffer3) - 1); // Exclude the null terminator from printing
	printf("\n");
	ft_memset(buffer3, 'x', 4); // Overlapping memory areas
	printf("After: ");
	printMemory(buffer3, sizeof(buffer3) - 1);
	printf("\n\n");

	// Test Case 5: Testing with edge case (zero-length memory area)
	double buffer4[3] = {3.14, 2.718, 1.618};
	printf("Test Case 5: b = {3.14, 2.718, 1.618}, c = 0, len = 0 (Edge case)\n");
	printf("Expected Output: No change\n");
	printf("Before: ");
	printMemory(buffer4, sizeof(buffer4));
	printf("\n");
	ft_memset(buffer4, 0, 0); // Edge case: zero-length memory area
	printf("After: ");
	printMemory(buffer4, sizeof(buffer4));
	printf("\n\n");
}

void testFtBzero() {
	clearScreen();
	printf("Function: void ft_bzero(void *src, size_t len)\n");
	printf("Description: The ft_bzero() function erases the data in the n bytes of the memory starting at the location pointed to by src, by writing zeros (bytes containing '\\0') to that area.\n");
	printf("Input: A pointer to the memory area to be filled with zeros, and the number of bytes to fill\n");
	printf("Output: None (modifies the memory area in-place)\n\n");

	// Test Case 1: Testing with a null pointer
	printf("Test Case 1: src = NULL, len = 5\n");
	printf("Expected Output: No memory area to modify\n");
	printf("Before: ");
	ft_bzero(NULL, 5); // Passing a null pointer
	printf("After: NULL (No memory area to modify)\n\n");

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

size_t custom_strcspn(const char *s, const char *reject) {
    const char *p, *r;
    size_t count = 0;

    for (p = s; *p != '\0'; ++p) {
        for (r = reject; *r != '\0'; ++r) {
            if (*p == *r) {
                return count;
            }
        }
        ++count;
    }

    return count;
}

void testFtMemcpy() {
	clearScreen();
	printf("Function: void *ft_memcpy(void *dst, const void *src, size_t n)\n");
	printf("Description: The ft_memcpy() function copies n bytes from memory area src to memory area dst.\n");
	printf("Input: A pointer to the destination memory area, a pointer to the source memory area, and the number of bytes to copy\n");
	printf("Output: A pointer to the destination memory area dst\n\n");

	// Test case 1: different data types
	char dst1[10] = "";
	char src1[] = "hello";
	printf("Test Case 1: Copying characters\n");
	printf("Before: dst = \"%s\"\n", dst1);
	ft_memcpy(dst1, src1, ft_strlen(src1) + 1);
	printf("After: dst = \"%s\"\nExpected: \"hello\"\n\n", dst1);

	// Test case 2: NULL pointers
	printf("Test Case 2: NULL pointers\n");
	char *nullPtr = NULL;
	ft_memcpy(nullPtr, nullPtr, 0);
	printf("After: dst = NULL\nExpected: dst = NULL\n\n");

	// Test case 3: overlapping memory areas
	printf("Test Case 3: Overlapping memory areas\n");
	char overlappingDst[] = "123456";
	printf("Before: dst = \"%s\"\n", overlappingDst);
	ft_memcpy(overlappingDst + 2, overlappingDst, 4);
	printf("After: dst = \"%s\"\nExpected: \"12123456\"\n\n", overlappingDst);

	// Test case 4: non-overlapping memory areas
	printf("Test Case 4: Non-overlapping memory areas\n");
	char nonOverlappingDst[] = "123456";
	char nonOverlappingSrc[] = "abcdef";
	printf("Before: dst = \"%s\", src = \"%s\"\n", nonOverlappingDst, nonOverlappingSrc);
	ft_memcpy(nonOverlappingDst, nonOverlappingSrc, 4);
	printf("After: dst = \"%s\"\nExpected: \"abcd56\"\n\n", nonOverlappingDst);

	// Test case 5: custom lengths
	printf("Test Case 5: Custom lengths\n");
	printf("Enter the length of the memory areas: ");
	size_t n;
	scanf("%zu", &n);
	char customDst[100] = {0};
	char customSrc[100] = {0};
	printf("Enter the source string: ");
	if (scanf(" %99[^\n]", customSrc) == 1) {
		customSrc[custom_strcspn(customSrc, "\n")] = '\0'; // Null-terminate the string
	} else {
		printf("Error reading source string\n");
	}
	printf("Enter the destination string: ");
	if (scanf(" %99[^\n]", customDst) == 1) {
		customDst[custom_strcspn(customDst, "\n")] = '\0'; // Null-terminate the string
	} else {
		printf("Error reading destination string\n");
	}
	printf("Before: dst = \"%s\"\n", customDst);
	ft_memcpy(customDst, customSrc, n);
	printf("After: dst = \"%s\"\nExpected: <Depends on input>\n\n", customDst);
}

void testFtMemmove() {
    clearScreen();
    printf("Function: void *ft_memmove(void *dest, const void *src, size_t n)\n");
    printf("Description: The ft_memmove() function copies n bytes from memory area src to memory area dest. The memory areas may overlap.\n");
    printf("Input: A pointer to the destination memory area, a pointer to the source memory area, and the number of bytes to copy\n");
    printf("Output: A pointer to the destination memory area dest\n\n");

    // Test case 1: overlapping memory areas
    char dst1[10] = "abcdefgh";
    printf("Test Case 1: dest = \"abcdefgh\", src = dest + 2, n = 4\n");
    printf("Before: dest = \"%s\"\n", dst1);
    ft_memmove(dst1, dst1 + 2, 4);
    printf("After: dest = \"%s\"\n\n", dst1);

    // Test case 2: non-overlapping memory areas
    int dst2[5] = {1, 2, 3, 4, 5};
    printf("Test Case 2: dest = {1, 2, 3, 4, 5}, src = dest + 1, n = 3\n");
    printf("Before: dest = ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dst2[i]);
    }
    printf("\n");
    ft_memmove(dst2, dst2 + 1, 3 * sizeof(int));
    printf("After: dest = ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", dst2[i]);
    }
    printf("\n\n");

    // Test case 3: NULL pointers
    printf("Test Case 3: NULL pointers\n");
    char *nullPtr = NULL;
    printf("Attempting to move 0 bytes from NULL to NULL...\n");
    void *result = ft_memmove(nullPtr, nullPtr, 0);
    if (result == NULL) {
        printf("After: Result is NULL as expected.\n\n");
    } else {
        printf("After: Unexpected non-NULL result!\n\n");
    }

    // Test case 4: custom lengths
    printf("Enter the length of the memory areas: ");
    size_t n;
    scanf("%zu", &n);
    char customDst[100];
    char customSrc[100];
    printf("Enter the source string: ");
    scanf(" %99[^\n]", customSrc);
    printf("Enter the destination string: ");
    scanf(" %99[^\n]", customDst);
    printf("Before: dest = \"%s\"\n", customDst);
    ft_memmove(customDst, customSrc, n);
    printf("After: dest = \"%s\"\n\n", customDst);
}

void testFtStrlcpy() {
	clearScreen();
	printf("Function: size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)\n");
	printf("Description: The ft_strlcpy() function copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0.\n");
	printf("Input: A pointer to the destination string, a pointer to the source string, and the size of the destination buffer\n");
	printf("Output: The total length of the string that would have been copied (not including the NUL character)\n\n");

	// Test case 1: destination buffer size exactly fits the source string
	char dst1[10] = "";
	char src1[] = "hello";
	printf("Test Case 1: dst = \"\", src = \"hello\", dstsize = sizeof(dst1)\n");
	printf("Expected Output: dst = \"hello\", len = 5\n");
	printf("Before: dst = \"%s\"\n", dst1);
	size_t len1 = ft_strlcpy(dst1, src1, sizeof(dst1));
	printf("After: dst = \"%s\", len = %zu\n\n", dst1, len1);

	// Test case 2: destination buffer size smaller than the source string
	char dst2[5] = "";
	char src2[] = "world";
	printf("Test Case 2: dst = \"\", src = \"world\", dstsize = sizeof(dst2)\n");
	printf("Expected Output: dst = \"worl\", len = 5\n");
	printf("Before: dst = \"%s\"\n", dst2);
	size_t len2 = ft_strlcpy(dst2, src2, sizeof(dst2));
	printf("After: dst = \"%s\", len = %zu\n\n", dst2, len2);

	// Test case 3: destination buffer already full
	char dst3[5] = "1234";
	char src3[] = "5678";
	printf("Test Case 3: dst = \"1234\", src = \"5678\", dstsize = sizeof(dst3)\n");
	printf("Expected Output: dst = \"5678\", len = 5\n");
	printf("Before: dst = \"%s\"\n", dst3);
	size_t len3 = ft_strlcpy(dst3, src3, sizeof(dst3));
	printf("After: dst = \"%s\", len = %zu\n\n", dst3, len3);

	// Test case 4: empty source string
	char dst4[10] = "abc";
	char src4[] = "";
	printf("Test Case 4: dst = \"abc\", src = \"\", dstsize = sizeof(dst4)\n");
	printf("Expected Output: dst = \"\", len = 0\n");
	printf("Before: dst = \"%s\"\n", dst4);
	size_t len4 = ft_strlcpy(dst4, src4, sizeof(dst4));
	printf("After: dst = \"%s\", len = %zu\n\n", dst4, len4);

	// Test case 5: NULL pointers
	printf("Test Case 5: NULL pointers\n");
	printf("Expected Output: No change, len = 0\n");
	printf("Before: dst = NULL, src = NULL\n");
	size_t len5 = ft_strlcpy(NULL, NULL, 0);
	printf("After: dst = NULL, src = NULL, len = %zu\n\n", len5);

	// Test case 6: custom strings
	printf("Enter a custom destination string: ");
	char customDst[100];
	scanf(" %99[^\n]", customDst);
	printf("Enter a custom source string: ");
	char customSrc[100];
	scanf(" %99[^\n]", customSrc);
	printf("Enter the size of the destination buffer: ");
	size_t customDstSize;
	scanf("%zu", &customDstSize);
	printf("Before: dst = \"%s\"\n", customDst);
	size_t len6 = ft_strlcpy(customDst, customSrc, customDstSize);
	printf("After: dst = \"%s\", len = %zu\n\n", customDst, len6);
}

void testFtStrlcat() {
	clearScreen();
	printf("Function: size_t ft_strlcat(char *dst, const char *src, size_t dstsize)\n");
	printf("Description: The ft_strlcat() function appends the null-terminated string src to the end of dst. It will append at most dstsize - ft_strlen(dst) - 1 bytes, NUL-terminating the result.\n");
	printf("Input: A pointer to the destination string, a pointer to the source string, and the size of the destination buffer\n");
	printf("Output: The total length of the string that would have been created (not including the NUL character)\n\n");

	// Test case 1: destination buffer size exactly fits the concatenated string
	char dst1[10] = "hello";
	char src1[] = " world";
	printf("Test Case 1: dst = \"hello\", src = \" world\", dstsize = sizeof(dst1)\n");
	printf("Expected Output: dst = \"hello world\", len = 11\n");
	printf("Before: dst = \"%s\"\n", dst1);
	size_t len1 = ft_strlcat(dst1, src1, sizeof(dst1));
	printf("After: dst = \"%s\", len = %zu\n\n", dst1, len1);

	// Test case 2: destination buffer size smaller than the concatenated string
	char dst2[10] = "abc";
	char src2[] = "defghijkl";
	printf("Test Case 2: dst = \"abc\", src = \"defghijkl\", dstsize = sizeof(dst2)\n");
	printf("Expected Output: dst = \"abcdefg\", len = 10\n");
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
	printf("Enter a custom destination string: ");
	char customDst[100];
	scanf(" %99[^\n]", customDst);
	printf("Enter a custom source string: ");
	char customSrc[100];
	scanf(" %99[^\n]", customSrc);
	printf("Enter the size of the destination buffer: ");
	size_t customDstSize;
	scanf("%zu", &customDstSize);
	printf("Before: dst = \"%s\"\n", customDst);
	size_t len6 = ft_strlcat(customDst, customSrc, customDstSize);
	printf("After: dst = \"%s\", len = %zu\n\n", customDst, len6);
}
void testFtToupper() {
	clearScreen();
	printf("Function: int ft_toupper(int c)\n");
	printf("Description: The ft_toupper() function converts a lower-case letter to the corresponding upper-case letter.\n");
	printf("Input: An integer representing a character\n");
	printf("Output: The corresponding upper-case letter if the input is a lower-case letter, or the input character itself if it is not a lower-case letter\n\n");

	printf("Test Case 1: c = 'a'\n");
	printf("Expected Output: 'A'\n");
	printf("Result: '%c'\n\n", ft_toupper('a'));

	printf("Test Case 2: c = 'Z'\n");
	printf("Expected Output: 'Z'\n");
	printf("Result: '%c'\n\n", ft_toupper('Z'));

	printf("Test Case 3: c = '5'\n");
	printf("Expected Output: '5'\n");
	printf("Result: '%c'\n\n", ft_toupper('5'));

	printf("Enter a custom character to test: ");
	char customChar;
	scanf(" %c", &customChar);
	printf("Result: '%c'\n\n", ft_toupper(customChar));
}

void testFtTolower() {
	clearScreen();
	printf("Function: int ft_tolower(int c)\n");
	printf("Description: The ft_tolower() function converts an upper-case letter to the corresponding lower-case letter.\n");
	printf("Input: An integer representing a character\n");
	printf("Output: The corresponding lower-case letter if the input is an upper-case letter, or the input character itself if it is not an upper-case letter\n\n");

	printf("Test Case 1: c = 'A'\n");
	printf("Expected Output: 'a'\n");
	printf("Result: '%c'\n\n", ft_tolower('A'));

	printf("Test Case 2: c = 'z'\n");
	printf("Expected Output: 'z'\n");
	printf("Result: '%c'\n\n", ft_tolower('z'));

	printf("Test Case 3: c = '5'\n");
	printf("Expected Output: '5'\n");
	printf("Result: '%c'\n\n", ft_tolower('5'));

	printf("Enter a custom character to test: ");
	char customChar;
	scanf(" %c", &customChar);
	printf("Result: '%c'\n\n", ft_tolower(customChar));
}

void testFtStrchr() {
	clearScreen();
	printf("Function: char *ft_strchr(const char *s, int c)\n");
	printf("Description: The ft_strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.\n");
	printf("Input: A pointer to a null-terminated string, and an integer representing the character to search for\n");
	printf("Output: A pointer to the located character, or NULL if the character does not appear in the string\n\n");

	// Test case with string
	char str1[] = "hello";
	printf("Test Case 1: s = \"hello\", c = 'l'\n");
	printf("Expected Output: A pointer to the first 'l' in \"hello\"\n");
	char *result1 = ft_strchr(str1, 'l');
	printf("Result: %s\n\n", result1 != NULL ? result1 : "NULL");

	// Test case with string where character is not found
	char str2[] = "world";
	printf("Test Case 2: s = \"world\", c = 'x'\n");
	printf("Expected Output: NULL\n");
	char *result2 = ft_strchr(str2, 'x');
	printf("Result: %s\n\n", result2 != NULL ? result2 : "NULL");

	// Test case with empty string
	char emptyStr[] = "";
	printf("Test Case 3: Empty string\n");
	printf("Expected Output: NULL\n");
	char *result3 = ft_strchr(emptyStr, 'a');
	printf("Result: %s\n\n", result3 != NULL ? result3 : "NULL");

	// Test case with NULL pointer
	printf("Test Case 4: NULL pointer\n");
	printf("Expected Output: NULL\n");
	char *result4 = ft_strchr(NULL, 'a');
	printf("Result: %s\n\n", result4 != NULL ? result4 : "NULL");

	// Test case with special characters
	char str3[] = "hello, world!";
	printf("Test Case 5: s = \"hello, world!\", c = '!'\n");
	printf("Expected Output: A pointer to the first '!' in the string\n");
	char *result5 = ft_strchr(str3, '!');
	printf("Result: %s\n\n", result5 != NULL ? result5 : "NULL");
}
void testFtStrrchr() {
	clearScreen();
	printf("Function: char *ft_strrchr(const char *s, int c)\n");
	printf("Description: The ft_strrchr() function locates the last occurrence of c (converted to a char) in the string pointed to by s.\n");
	printf("Input: A pointer to a null-terminated string, and an integer representing the character to search for\n");
	printf("Output: A pointer to the located character, or NULL if the character does not appear in the string\n\n");

	// Test case with string
	char str1[] = "hello";
	printf("Test Case 1: s = \"hello\", c = 'l'\n");
	printf("Expected Output: A pointer to the last 'l' in \"hello\"\n");
	char *result1 = ft_strrchr(str1, 'l');
	printf("Result: %s\n\n", result1 != NULL ? result1 : "NULL");

	// Test case with string where character is not found
	char str2[] = "world";
	printf("Test Case 2: s = \"world\", c = 'x'\n");
	printf("Expected Output: NULL\n");
	char *result2 = ft_strrchr(str2, 'x');
	printf("Result: %s\n\n", result2 != NULL ? result2 : "NULL");

	// Test case with empty string
	char emptyStr[] = "";
	printf("Test Case 3: Empty string\n");
	printf("Expected Output: NULL\n");
	char *result3 = ft_strrchr(emptyStr, 'a');
	printf("Result: %s\n\n", result3 != NULL ? result3 : "NULL");

	// Test case with NULL pointer
	printf("Test Case 4: NULL pointer\n");
	printf("Expected Output: NULL\n");
	char *result4 = ft_strrchr(NULL, 'a');
	printf("Result: %s\n\n", result4 != NULL ? result4 : "NULL");

	// Test case with special characters
	char str3[] = "hello, world!";
	printf("Test Case 5: s = \"hello, world!\", c = '!'\n");
	printf("Expected Output: A pointer to the last '!' in the string\n");
	char *result5 = ft_strrchr(str3, '!');
	printf("Result: %s\n\n", result5 != NULL ? result5 : "NULL");
}

void testFtStrncmp() {
	clearScreen();
	printf("Function: int ft_strncmp(const char *s1, const char *s2, size_t n)\n");
	printf("Description: The ft_strncmp() function compares the first n bytes of the strings s1 and s2.\n");
	printf("Input: Two pointers to null-terminated strings, and the number of bytes to compare\n");
	printf("Output: An integer less than, equal to, or greater than zero if s1 is found, respectively, to be less than, to match, or be greater than s2\n\n");

	// Test case with strings
	char str1[] = "hello";
	char str2[] = "hello";
	printf("Test Case 1: s1 = \"hello\", s2 = \"hello\", n = 5\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_strncmp(str1, str2, 5));

	// Test case with different strings
	char str3[] = "hello";
	char str4[] = "world";
	printf("Test Case 2: s1 = \"hello\", s2 = \"world\", n = 3\n");
	printf("Expected Output: A value less than 0\n");
	printf("Result: %d\n\n", ft_strncmp(str3, str4, 3));

	// Test case with identical strings but limited comparison
	char str5[] = "abc";
	char str6[] = "abc";
	printf("Test Case 3: s1 = \"abc\", s2 = \"abc\", n = 2\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_strncmp(str5, str6, 2));

	// Test case with empty strings
	char emptyStr1[] = "";
	char emptyStr2[] = "";
	printf("Test Case 4: Empty strings\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_strncmp(emptyStr1, emptyStr2, 1));

	// Test case with NULL pointers
	printf("Test Case 5: NULL pointers\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_strncmp(NULL, NULL, 0));

	// Additional custom test case
	printf("Enter the first string: ");
	char customStr1[100];
	scanf(" %99[^\n]", customStr1);
	printf("Enter the second string: ");
	char customStr2[100];
	scanf(" %99[^\n]", customStr2);
	printf("Enter the number of bytes to compare: ");
	size_t n;
	scanf("%zu", &n);
	printf("Result: %d\n\n", ft_strncmp(customStr1, customStr2, n));
}


void testFtMemchr() {
	clearScreen();
	printf("Function: void *ft_memchr(const void *s, int c, size_t n)\n");
	printf("Description: The ft_memchr() function scans the first n bytes of the memory area pointed to by s for the first instance of c.\n");
	printf("Input: A pointer to the memory area, the value to search for, and the number of bytes to search\n");
	printf("Output: A pointer to the matching byte, or NULL if the byte does not occur in the given memory area\n\n");

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

void testFtMemcmp() {
	clearScreen();
	printf("Function: int ft_memcmp(void *dest, const void *src, size_t n)\n");
	printf("Description: The ft_memcmp() function compares the first n bytes of the memory areas dest and src.\n");
	printf("Input: Two pointers to memory areas, and the number of bytes to compare\n");
	printf("Output: An integer less than, equal to, or greater than zero if dest is found, respectively, to be less than, to match, or be greater than src\n\n");

	// Test cases with strings
	char str1[] = "hello";
	char str2[] = "hello";
	printf("Test Case 1: dest = \"hello\", src = \"hello\", n = ft_strlen(str1) + 1\n");
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
	printf("Test Case 3: dest = {1, 2, 3, 4, 5}, src = {1, 2, 3, 4, 5}, n = sizeof(arr1)\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_memcmp(arr1, arr2, sizeof(arr1)));

	// Test case with different data types (float)
	float f1 = 3.14f;
	float f2 = 3.14f;
	printf("Test Case 4: dest = %f, src = %f, n = sizeof(float)\n", f1, f2);
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

void testFtStrnstr() {
	clearScreen();
	printf("Function: char *ft_strnstr(const char *str, const char *tofind, size_t len)\n");
	printf("Description: The ft_strnstr() function locates the first occurrence of the null-terminated string tofind in the string str, where not more than len characters are searched.\n");
	printf("Input: A pointer to a null-terminated string, a pointer to the string to search for, and the maximum number of bytes to search\n");
	printf("Output: A pointer to the first character of the located substring, or NULL if the substring is not found\n\n");

	char str1[] = "hello world";
	char tofind1[] = "world";
	printf("Test Case 1: str = \"hello world\", tofind = \"world\", len = ft_strlen(str1)\n");
	printf("Expected Output: A pointer to the substring \"world\" in \"hello world\"\n");
	char *result1 = ft_strnstr(str1, tofind1, ft_strlen(str1));
	printf("Result: %s\n\n", result1 != NULL ? result1 : "NULL");

	char str2[] = "hello world";
	char tofind2[] = "xyz";
	printf("Test Case 2: str = \"hello world\", tofind = \"xyz\", len = ft_strlen(str2)\n");
	printf("Expected Output: NULL\n");
	char *result2 = ft_strnstr(str2, tofind2, ft_strlen(str2));
	printf("Result: %s\n\n", result2 != NULL ? result2 : "NULL");

	char str3[] = "hello world";
	char tofind3[] = "hello";
	printf("Test Case 3: str = \"hello world\", tofind = \"hello\", len = 5\n");
	printf("Expected Output: A pointer to the substring \"hello\" in \"hello world\"\n");
	char *result3 = ft_strnstr(str3, tofind3, 5);
	printf("Result: %s\n\n", result3 != NULL ? result3 : "NULL");

	// Additional test cases (edge cases)
	printf("Enter a string to search: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Enter a substring to find: ");
	char customTofind[100];
	scanf(" %99[^\n]", customTofind);
	printf("Enter the maximum number of bytes to search: ");
	size_t customLen;
	scanf("%zu", &customLen);
	char *result4 = ft_strnstr(customStr, customTofind, customLen);
	printf("Result: %s\n\n", result4 != NULL ? result4 : "NULL");
}

void testFtAtoi() {
	clearScreen();
	printf("Function: int ft_atoi(const char *str)\n");
	printf("Description: The ft_atoi() function converts the initial portion of the string pointed to by str to int representation.\n");
	printf("Input: A pointer to a null-terminated string\n");
	printf("Output: The converted integral number\n\n");

	char str1[] = "42";
	printf("Test Case 1: str = \"42\"\n");
	printf("Expected Output: 42\n");
	printf("Result: %d\n\n", ft_atoi(str1));

	char str2[] = "-2147483648";
	printf("Test Case 2: str = \"-2147483648\"\n");
	printf("Expected Output: -2147483648\n");
	printf("Result: %d\n\n", ft_atoi(str2));

	char str3[] = "   +456";
	printf("Test Case 3: str = \"   +456\"\n");
	printf("Expected Output: 456\n");
	printf("Result: %d\n\n", ft_atoi(str3));

	char str4[] = " +01a6";
	printf("Test Case 4: str = \" +01a6\"\n");
	printf("Expected Output: 1\n");
	printf("Result: %d\n\n", ft_atoi(str4));

	char str5[] = "a 1";
	printf("Test Case 4: str = \"a 1\"\n");
	printf("Expected Output: 0\n");
	printf("Result: %d\n\n", ft_atoi(str5));

	printf("Enter a custom string to convert: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Result: %d\n\n", ft_atoi(customStr));
}

void testFtCalloc() {
	clearScreen();
	printf("Function: void *ft_calloc(size_t nmemb, size_t size)\n");
	printf("Description: The ft_calloc() function allocates memory for an array of nmemb elements of size bytes each and returns a pointer to the allocated memory. The memory is set to zero.\n");
	printf("Input: The number of elements to be allocated, and the size of each element\n");
	printf("Output: A pointer to the allocated memory, or NULL if the request fails\n\n");

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

	printf("Enter the number of elements to allocate: ");
	size_t numElements;
	scanf("%zu", &numElements);
	printf("Enter the size of each element: ");
	size_t elementSize;
	scanf("%zu", &elementSize);
	void *ptr3 = ft_calloc(numElements, elementSize);
	if (ptr3 != NULL) {
		printf("Allocated memory (hex): ");
		for (size_t i = 0; i < numElements * elementSize; i++) {
			printf("%02X ", *((unsigned char *)ptr3 + i));
		}
		printf("\n");
		free(ptr3);
	} else {
		printf("Memory allocation failed.\n");
	}
	printf("\n");
}

void testFtStrdup() {
	clearScreen();
	printf("Function: char *ft_strdup(const char *s1)\n");
	printf("Description: The ft_strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it.\n");
	printf("Input: A pointer to a null-terminated string\n");
	printf("Output: A pointer to the duplicated string, or NULL if insufficient memory was available\n\n");

	char str1[] = "hello";
	printf("Test Case 1: s1 = \"hello\"\n");
	char *dup1 = ft_strdup(str1);
	if (dup1 != NULL) {
		printf("Duplicated string: %s\n", dup1);
		free(dup1);
	} else {
		printf("String duplication failed.\n");
	}
	printf("\n");

	char str2[] = "";
	printf("Test Case 2: s1 = \"\"\n");
	char *dup2 = ft_strdup(str2);
	if (dup2 != NULL) {
		printf("Duplicated string: %s\n", dup2);
		free(dup2);
	} else {
		printf("String duplication failed.\n");
	}
	printf("\n");

	printf("Enter a custom string to duplicate: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	char *dup3 = ft_strdup(customStr);
	if (dup3 != NULL) {
		printf("Duplicated string: %s\n", dup3);
		free(dup3);
	} else {
		printf("String duplication failed.\n");
	}
	printf("\n");
}

void testFtStrnew() {
	clearScreen();
	printf("Function: char *ft_strnew(size_t size)\n");
	printf("Description: The ft_strnew() function allocates and returns a new string object, which represents an empty string of size characters plus a terminating null character ('\\0').\n");
	printf("Input: The size of the string to allocate\n");
	printf("Output: A pointer to the newly allocated string, or NULL if the allocation fails\n\n");

	printf("Test Case 1: size = 5\n");
	char *str1 = ft_strnew(5);
	if (str1 != NULL) {
		printf("Allocated memory (hex): ");
		for (size_t i = 0; i < 5; i++) {
			printf("%02X ", (unsigned char)str1[i]);
		}
		printf("\n");
		free(str1);
	} else {
		printf("String allocation failed.\n");
	}
	printf("\n");

	printf("Test Case 2: size = 0\n");
	char *str2 = ft_strnew(0);
	if (str2 != NULL) {
		printf("Allocated memory (hex): ");
		printf("%02X ", (unsigned char)str2[0]); // Print the first byte
		printf("\n");
		free(str2);
	} else {
		printf("String allocation failed.\n");
	}
	printf("\n");

	printf("Enter the size of the string to allocate: ");
	size_t customSize;
	scanf("%zu", &customSize);
	char *str3 = ft_strnew(customSize);
	if (str3 != NULL) {
		printf("Allocated memory (hex): ");
		for (size_t i = 0; i < customSize; i++) {
			printf("%02X ", (unsigned char)str3[i]);
		}
		printf("\n");
		free(str3);
	} else {
		printf("String allocation failed.\n");
	}
	printf("\n");
}

void testFtIsspace() {
    clearScreen();
    printf("Function: int ft_isspace(const int c)\n");
    printf("Description: The ft_isspace() function tests for white-space characters. In C, these are: space (' '), form-feed ('\\f'), newline ('\\n'), carriage return ('\\r'), horizontal tab ('\\t'), and vertical tab ('\\v').\n");
    printf("Input: An integer representing a character\n");
    printf("Output: Non-zero value (1) if the character is a white-space character, zero (0) otherwise\n\n");

    printf("Test Case 1: c = ' ' (space)\n");
    printf("Expected Output: Non-zero value (1)\n");
    printf("Result: %d\n\n", ft_isspace(' '));

    printf("Test Case 2: c = '\\n' (newline)\n");
    printf("Expected Output: Non-zero value (1)\n");
    printf("Result: %d\n\n", ft_isspace('\n'));

    printf("Test Case 3: c = '\\f' (form-feed)\n");
    printf("Expected Output: Non-zero value (1)\n");
    printf("Result: %d\n\n", ft_isspace('\f'));

    printf("Test Case 4: c = '\\r' (carriage return)\n");
    printf("Expected Output: Non-zero value (1)\n");
    printf("Result: %d\n\n", ft_isspace('\r'));

    printf("Test Case 5: c = '\\t' (horizontal tab)\n");
    printf("Expected Output: Non-zero value (1)\n");
    printf("Result: %d\n\n", ft_isspace('\t'));

    printf("Test Case 6: c = '\\v' (vertical tab)\n");
    printf("Expected Output: Non-zero value (1)\n");
    printf("Result: %d\n\n", ft_isspace('\v'));

    printf("Enter a custom character to test: ");
    char customChar = getchar(); // Read a single character including whitespace
    while (getchar() != '\n'); // Clear the input buffer
    printf("Result: %d\n\n", ft_isspace(customChar));
}

void testFtSubstr() {
	clearScreen();
	printf("Function: char *ft_substr(char const *s, unsigned int start, size_t len)\n");
	printf("Description: The ft_substr() function allocates and returns a substring from the string 's'. The substring begins at index 'start' and is of maximum size 'len'.\n");
	printf("Input: A pointer to a null-terminated string, the starting index, and the maximum length of the substring\n");
	printf("Output: A pointer to the newly allocated substring, or NULL if the allocation fails\n\n");

	char str1[] = "hello, world";
	printf("Test Case 1: s = \"hello, world\", start = 0, len = 5\n");
	printf("Expected Output: \"hello\"\n");
	char *result1 = ft_substr(str1, 0, 5);
	if (result1 != NULL) {
		printf("Result: %s\n\n", result1);
		free(result1);
	} else {
		printf("Result: NULL\n\n");
	}

	char str2[] = "hello, world";
	printf("Test Case 2: s = \"hello, world\", start = 7, len = 5\n");
	printf("Expected Output: \"world\"\n");
	char *result2 = ft_substr(str2, 7, 5);
	if (result2 != NULL) {
		printf("Result: %s\n\n", result2);
		free(result2);
	} else {
		printf("Result: NULL\n\n");
	}

	char str3[] = "hello, world";
	printf("Test Case 3: s = \"hello, world\", start = 0, len = 100\n");
	printf("Expected Output: \"hello, world\"\n");
	char *result3 = ft_substr(str3, 0, 100);
	if (result3 != NULL) {
		printf("Result: %s\n\n", result3);
		free(result3);
	} else {
		printf("Result: NULL\n\n");
	}

	char str4[] = "hello, world";
	printf("Test Case 4: s = \"hello, world\", start = 20, len = 5\n");
	printf("Expected Output: \"\"\n");
	char *result4 = ft_substr(str4, 20, 5);
	if (result4 != NULL) {
		printf("Result: %s\n\n", result4);
		free(result4);
	} else {
		printf("Result: NULL\n\n");
	}

	char str5[] = "hello, world";
	printf("Test Case 5: s = \"hello, world\", start = 5, len = 0\n");
	printf("Expected Output: \"\"\n");
	char *result5 = ft_substr(str5, 5, 0);
	if (result5 != NULL) {
		printf("Result: %s\n\n", result5);
		free(result5);
	} else {
		printf("Result: NULL\n\n");
	}

	printf("Enter a string to test: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Enter the starting index: ");
	unsigned int start;
	scanf("%u", &start);
	printf("Enter the maximum length: ");
	size_t len;
	scanf("%zu", &len);
	char *customResult = ft_substr(customStr, start, len);
	if (customResult != NULL) {
		printf("Result: %s\n\n", customResult);
		free(customResult);
	} else {
		printf("Result: NULL\n\n");
	}
}

void testFtStrjoin() {
	clearScreen();
	printf("Function: char *ft_strjoin(char const *s1, char const *s2)\n");
	printf("Description: The ft_strjoin() function allocates and returns a new string, which is the result of the concatenation of 's1' and 's2'.\n");
	printf("Input: Two pointers to null-terminated strings\n");
	printf("Output: A pointer to the newly allocated string, or NULL if the allocation fails\n\n");

	char str1[] = "hello";
	char str2[] = ", world";
	printf("Test Case 1: s1 = \"hello\", s2 = \", world\"\n");
	printf("Expected Output: \"hello, world\"\n");
	char *result1 = ft_strjoin(str1, str2);
	if (result1 != NULL) {
		printf("Result: %s\n\n", result1);
		free(result1);
	} else {
		printf("Result: NULL\n\n");
	}

	char str3[] = "";
	char str4[] = "";
	printf("Test Case 2: s1 = \"\", s2 = \"\"\n");
	printf("Expected Output: \"\"\n");
	char *result2 = ft_strjoin(str3, str4);
	if (result2 != NULL) {
		printf("Result: %s\n\n", result2);
		free(result2);
	} else {
		printf("Result: NULL\n\n");
	}

	char str5[] = "hello";
	char str6[] = "";
	printf("Test Case 3: s1 = \"hello\", s2 = \"\"\n");
	printf("Expected Output: \"hello\"\n");
	char *result3 = ft_strjoin(str5, str6);
	if (result3 != NULL) {
		printf("Result: %s\n\n", result3);
		free(result3);
	} else {
		printf("Result: NULL\n\n");
	}

	char str7[] = "";
	char str8[] = "world";
	printf("Test Case 4: s1 = \"\", s2 = \"world\"\n");
	printf("Expected Output: \"world\"\n");
	char *result4 = ft_strjoin(str7, str8);
	if (result4 != NULL) {
		printf("Result: %s\n\n", result4);
		free(result4);
	} else {
		printf("Result: NULL\n\n");
	}

//	char str9[] = "hello";
	char str10[] = "world";
	printf("Test Case 5: s1 = NULL, s2 = \"world\"\n");
	printf("Expected Output: NULL\n");
	char *result5 = ft_strjoin(NULL, str10);
	if (result5 != NULL) {
		printf("Result: %s\n\n", result5);
		free(result5);
	} else {
		printf("Result: NULL\n\n");
	}

	// Test case: Concatenating two very long strings
	char longStr1[1000000] = "a";
	char longStr2[1000000] = "b";
	char *longResult = ft_strjoin(longStr1, longStr2);
	printf("Test Case 6: Concatenating two very long strings\n");
	printf("Expected Output: A string of length 2000000 (approx.)\n\n");
	if (longResult != NULL) {
		printf("Result length: %zu\n\n", ft_strlen(longResult));
		free(longResult);
	} else {
		printf("Result: NULL\n\n");
	}

	// Test case: Passing NULL as both input strings
	char *nullResult = ft_strjoin(NULL, NULL);
	printf("Test Case 7: Passing NULL as both input strings\n");
	printf("Expected Output: NULL\n\n");
	if (nullResult != NULL) {
		printf("Result: %s\n\n", nullResult);
		free(nullResult);
	} else {
		printf("Result: NULL\n\n");
	}

	printf("Enter the first string: ");
	char customStr1[100];
	scanf(" %99[^\n]", customStr1);
	printf("Enter the second string: ");
	char customStr2[100];
	scanf(" %99[^\n]", customStr2);
	char *customresult = ft_strjoin(customStr1, customStr2);
	if (customresult != NULL) {
		printf("Result: %s\n\n", customresult);
		free(customresult);
	} else {
		printf("Result: NULL\n\n");
	}
}

void testFtStrtrim() 
{
	clearScreen();
	printf("Function: char *ft_strtrim(char const *s1, char const *set)\n");
	printf("Description: The ft_strtrim() function allocates and returns a copy of 's1' with the characters specified in 'set' removed from the beginning and the end of the string.\n");
	printf("Input: A pointer to a null-terminated string, and a pointer to a set of characters to trim\n");
	printf("Output: A pointer to the newly allocated trimmed string, or NULL if the allocation fails\n\n");

	char str1[] = "  hello  ";
	char set1[] = " ";
	printf("Test Case 1: s1 = \"  hello  \", set = \" \"\n");
	printf("Expected Output: \"hello\"\n");
	char *result1 = ft_strtrim(str1, set1);
	if (result1 != NULL) {
		printf("Result: %s\n\n", result1);
		free(result1);
	} else {
		printf("Result: NULL\n\n");
	}

	char str2[] = "hello, world";
	char set2[] = ",";
	printf("Test Case 2: s1 = \"hello, world\", set = \",\"\n");
	printf("Expected Output: \"hello, world\"\n");
	char *result2 = ft_strtrim(str2, set2);
	if (result2 != NULL) {
		printf("Result: %s\n\n", result2);
		free(result2);
	} else {
		printf("Result: NULL\n\n");
	}

	char str3[] = "   ";
	char set3[] = " ";
	printf("Test Case 3: s1 = \"   \", set = \" \"\n");
	printf("Expected Output: \"\"\n");
	char *result3 = ft_strtrim(str3, set3);
	if (result3 != NULL) {
		printf("Result: %s\n\n", result3);
		free(result3);
	} else {
		printf("Result: NULL\n\n");
	}

	char str4[] = "abcdefghijk";
	char set4[] = "abcdefghijk";
	printf("Test Case 4: s1 = \"abcdefghijk\", set = \"abcdefghijk\"\n");
	printf("Expected Output: \"\"\n");
	char *result4 = ft_strtrim(str4, set4);
	if (result4 != NULL) {
		printf("Result: %s\n\n", result4);
		free(result4);
	} else {
		printf("Result: NULL\n\n");
	}

	char str5[] = "   hello   ";
	char set5[] = " ";
	printf("Test Case 5: s1 = \"   hello   \", set = \" \"\n");
	printf("Expected Output: \"hello\"\n");
	char *result5 = ft_strtrim(str5, set5);
	if (result5 != NULL) {
		printf("Result: %s\n\n", result5);
		free(result5);
	} else {
		printf("Result: NULL\n\n");
	}

	// User input case
	printf("Enter a string S1 to trim: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Enter the set of characters to trim: ");
	char customSet[100];
	scanf(" %99[^\n]", customSet);
	char *customResult = ft_strtrim(customStr, customSet);
	if (customResult != NULL) {
		printf("Result: %s\n\n", customResult);
		free(customResult);
	} else {
		printf("Result: NULL\n\n");
	}
}

void testFtSplit() 
{
	clearScreen();
	printf("Function: char **ft_split(char *str, char *charset)\n");
	printf("Description: The ft_split() function allocates and returns an array of strings obtained by splitting 'str' using the characters from 'charset' as delimiters.\n");
	printf("Input: A pointer to a null-terminated string, and a pointer to a set of characters used as delimiters\n");
	printf("Output: A pointer to the newly allocated array of strings, or NULL if the allocation fails\n\n");

	// Test cases with known input and expected output
	char str1[] = "hello,world,test";
	char charset1[] = ",";
	printf("Test Case 1: str = \"hello,world,test\", charset = \",\"\n");
	printf("Expected Output: [\"hello\", \"world\", \"test\"]\n");
	char **result1 = ft_split(str1, charset1);
	printf("Result: ");
	if (result1 != NULL) {
		for (int i = 0; result1[i] != NULL; i++) {
			printf("\"%s\" ", result1[i]);
		}
		printf("\n\n");
		// Free the allocated memory
		for (int i = 0; result1[i] != NULL; i++) {
			free(result1[i]);
		}
		free(result1);
	} else {
		printf("NULL\n\n");
	}

	char str2[] = "hello world test";
	char charset2[] = " ";
	printf("Test Case 2: str = \"hello world test\", charset = \" \"\n");
	printf("Expected Output: [\"hello\", \"world\", \"test\"]\n");
	char **result2 = ft_split(str2, charset2);
	printf("Result: ");
	if (result2 != NULL) {
		for (int i = 0; result2[i] != NULL; i++) {
			printf("\"%s\" ", result2[i]);
		}
		printf("\n\n");
		// Free the allocated memory
		for (int i = 0; result2[i] != NULL; i++) {
			free(result2[i]);
		}
		free(result2);
	} else {
		printf("NULL\n\n");
	}

	char str3[] = "hello";
	char charset3[] = ",";
	printf("Test Case 3: str = \"hello\", charset = \",\"\n");
	printf("Expected Output: [\"hello\"]\n");
	char **result3 = ft_split(str3, charset3);
	printf("Result: ");
	if (result3 != NULL) {
		for (int i = 0; result3[i] != NULL; i++) {
			printf("\"%s\" ", result3[i]);
		}
		printf("\n\n");
		// Free the allocated memory
		for (int i = 0; result3[i] != NULL; i++) {
			free(result3[i]);
		}
		free(result3);
	} else {
		printf("NULL\n\n");
	}

	char str4[] = "";
	char charset4[] = ",";
	printf("Test Case 4: str = \"\", charset = \",\"\n");
	printf("Expected Output: [\"\"]\n");
	char **result4 = ft_split(str4, charset4);
	printf("Result: ");
	if (result4 != NULL) {
		for (int i = 0; result4[i] != NULL; i++) {
			printf("\"%s\" ", result4[i]);
		}
		printf("\n\n");
		// Free the allocated memory
		for (int i = 0; result4[i] != NULL; i++) {
			free(result4[i]);
		}
		free(result4);
	} else {
		printf("NULL\n\n");
	}

	char str5[] = "hello,,world,,test";
	char charset5[] = ",";
	printf("Test Case 5: str = \"hello,,world,,test\", charset = \",\"\n");
	printf("Expected Output: [\"hello\", \"world\", \"test\"]\n");
	char **result5 = ft_split(str5, charset5);
	printf("Result: ");
	if (result5 != NULL) {
		for (int i = 0; result5[i] != NULL; i++) {
			printf("\"%s\" ", result5[i]);
		}
		printf("\n\n");
		// Free the allocated memory
		for (int i = 0; result5[i] != NULL; i++) {
			free(result5[i]);
		}
		free(result5);
	} else {
		printf("NULL\n\n");
	}

	// User input case
	printf("Enter a string to split: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Enter the set of characters to use as delimiters: ");
	char customCharset[100];
	scanf(" %99[^\n]", customCharset);
	char **customResult = ft_split(customStr, customCharset);
	printf("Result: ");
	if (customResult != NULL) {
		for (int i = 0; customResult[i] != NULL; i++) {
			printf("\"%s\" ", customResult[i]);
		}
		printf("\n\n");
		// Free the allocated memory
		for (int i = 0; customResult[i] != NULL; i++) {
			free(customResult[i]);
		}
		free(customResult);
	} else {
		printf("NULL\n\n");
	}
}

void testFtItoa() 
{
	clearScreen();
	printf("Function: char *ft_itoa(int n)\n");
	printf("Description: The ft_itoa() function allocates and returns a string representing the integer received as an argument.\n");
	printf("Input: An integer value\n");
	printf("Output: A pointer to the newly allocated string representing the integer, or NULL if the allocation fails\n\n");

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

void uppercaseChar(unsigned int i, char *c) {
	int k = i;
	i = k;
	*c = ft_toupper(*c);
}

void lowercaseChar(unsigned int i, char *c) {
	int k = i;
	i = k;
		*c = ft_tolower(*c);
}

	void addOffset(unsigned int i, char *c) {
		int k = i;
		i = k;
		*c += i;
	}

	void multiplyByIndex(unsigned int i, char *c) {
		int k = i;
		i = k;
		*c = (*c - 'a') * i + 'a';
	}

void testFtStriteri() {
	clearScreen();
	printf("Function: void ft_striteri(char *s, void (*f)(unsigned int, char *))\n");
	printf("Description: The ft_striteri() function applies the function 'f' on each character of the string passed as argument, passing its index as the first argument. Each character is passed by address to 'f' to be modified if necessary.\n");
	printf("Input: A pointer to a null-terminated string, and a pointer to a function that takes an unsigned integer index and a pointer to a character\n");
	printf("Output: None (modifies the string in-place)\n\n");

	char str1[] = "HELlo2";
	printf("Test Case 1: s = \"HELlo2\", f = uppercaseChar\n");
	printf("Expected Output: \"HELLO2\"\n");
	printf("Before: %s\n", str1);
	ft_striteri(str1, uppercaseChar);
	printf("After: %s\n\n", str1);

	char str2[] = "WORld1";
	printf("Test Case 2: s = \"WORld1\", f = lowercaseChar\n");
	printf("Expected Output: \"world1\"\n");
	printf("Before: %s\n", str2);
	ft_striteri(str2, lowercaseChar);
	printf("After: %s\n\n", str2);

	char str3[] = "012345";

	printf("Test Case 3: s = \"012345\", f = addOffset (add index to character)\n");
	printf("Expected Output: \"012345\"\n");
	printf("Before: %s\n", str3);
	ft_striteri(str3, addOffset);
	printf("After: %s\n\n", str3);

	char str4[] = "abcd";

	printf("Test Case 4: s = \"abcd\", f = multiplyByIndex (multiply each character by its index)\n");
	printf("Expected Output: \"adce\"\n");
	printf("Before: %s\n", str4);
	ft_striteri(str4, multiplyByIndex);
	printf("After: %s\n\n", str4);

	printf("Enter a string to modify: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	printf("Enter 1 to uppercase, 2 to lowercase, or 3 to add offset: ");
	int choice;
	scanf("%d", &choice);
	printf("Before: %s\n", customStr);
	switch (choice) {
		case 1:
			ft_striteri(customStr, uppercaseChar);
			break;
		case 2:
			ft_striteri(customStr, lowercaseChar);
			break;
		case 3:
			ft_striteri(customStr, addOffset);
			break;
		default:
			printf("Invalid choice.\n");
			break;
	}
	printf("After: %s\n\n", customStr);
}

void testFtPutcharFd() 
{
	clearScreen();
	printf("Function: void ft_putchar_fd(char c, int fd)\n");
	printf("Description: The ft_putchar_fd() function writes the character c to the file descriptor fd.\n");
	printf("Input: A character and a file descriptor\n");
	printf("Output: The character is written to the specified file descriptor\n\n");

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
	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1) {
		printf("Failed to open or create the file.\n");
		return;
	}
	ft_putchar_fd(customChar, fd);
	close(fd);
	printf("Character written to the file 'test_file.txt'\n\n");
}

void testFtPutstrFd() 
{
	clearScreen();
	printf("Function: void ft_putstr_fd(char const *s, int fd)\n");
	printf("Description: The ft_putstr_fd() function writes the null-terminated string s to the file descriptor fd.\n");
	printf("Input: A pointer to a null-terminated string and a file descriptor\n");
	printf("Output: The string is written to the specified file descriptor\n\n");

	// Test Case 1: Writing to standard output (fd = 1)
	printf("Test Case 1: Writing to standard output (fd = 1)\n");
	printf("Expected Output: 'Hello, world!' should be printed to the console\n");
	ft_putstr_fd("Hello, world!", 1);
	printf("\n\n");

	// Test Case 2: Writing to standard error (fd = 2)
	printf("Test Case 2: Writing to standard error (fd = 2)\n");
	printf("Expected Output: 'Error message' should be printed to the standard error stream\n");
	ft_putstr_fd("Error message", 2);
	printf("\n\n");

	// Test Case 3: Writing to a file (fd = 3)
	printf("Test Case 3: Writing to a file (fd = 3)\n");
	printf("Enter a string to write to a file: ");
	char customStr[100];
	scanf(" %99[^\n]", customStr);
	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1) {
		printf("Failed to open or create the file.\n");
		return;
	}
	ft_putstr_fd(customStr, fd);
	close(fd);
	printf("String written to the file 'test_file.txt'\n\n");
}

void testFtPutendlFd() 
{
	clearScreen();
	printf("Function: void ft_putendl_fd(char const *s, int fd)\n");
	printf("Description: The ft_putendl_fd() function writes the null-terminated string s to the file descriptor fd, followed by a newline character.\n");
	printf("Input: A pointer to a null-terminated string and a file descriptor\n");
	printf("Output: The string is written to the specified file descriptor, followed by a newline character\n\n");

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
	int fd = open("test_file.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd == -1) {
		printf("Failed to open or create the file.\n");
		return;
	}
	ft_putendl_fd(customStr, fd);
	close(fd);
	printf("String written to the file 'test_file.txt', followed by a newline\n\n");
}

void	testFtPutnbrFd(void)
{
	clearScreen();
	printf("Function: void ft_putnbr_fd(int n, int fd)\n");
	printf("Description: The ft_putnbr_fd() function writes the integer n to the file descriptor fd.\n");
	printf("Input: An integer and a file descriptor\n");
	printf("Output: The integer is written to the specified file descriptor\n\n");

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
		return ;
	}
	ft_putnbr_fd(customInt, fd);
	close(fd);
	printf("Integer written to the file 'test_file.txt'\n\n");
}
*/
int main(void)
{
    int choice = -1; // Initialize choice to a non-zero value to enter the loop

    while (choice != 0)
    {
        clearScreen();
        printf("Menu:\n");
		printf("Basic:\n");
		printf("%-25s%-25s%-25s\n", "1. ft_isalpha", "2. ft_isdigit",
			"3. ft_isalnum");
		printf("%-25s%-25s%-25s\n", "4. ft_isascii", "5. ft_isprint",
			"6. ft_strlen");
		printf("%-25s%-25s%-25s\n", "7. ft_memset", "8. ft_bzero",
			"9. ft_memcpy");
		printf("%-25s%-25s%-25s\n", "10. ft_memmove", "11. ft_strlcpy",
			"12. ft_strlcat");
		printf("%-25s%-25s%-25s\n", "13. ft_toupper", "14. ft_tolower",
			"15. ft_strchr");
		printf("%-25s%-25s%-25s\n", "16. ft_strrchr", "17. ft_strncmp",
			"18. ft_memchr");
		printf("%-25s%-25s%-25s\n", "19. ft_memcmp", "20. ft_strnstr",
			"21. ft_atoi");
		printf("%-25s%-25s\n", "22. ft_calloc", "23. ft_strdup");
		printf("\nAdditional:\n");
		printf("%-25s%-25s%-25s\n", "24. ft_substr", "25. ft_strjoin",
			"26. ft_strtrim");
		printf("%-25s%-25s%-25s\n", "27. ft_split", "28. ft_itoa",
			"29. ft_striteri");
		printf("%-25s%-25s%-25s\n", "30. ft_putchar_fd", "31. ft_putstr_fd",
			"32. ft_putendl_fd");
		printf("%-25s\n", "33. ft_putnbr_fd");
		printf("\nHelper:\n");
		printf("%-25s%-25s\n", "34. ft_strnew", "35. ft_isspace");
		printf("\n0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
		// Basic functions
		case 1:
			testFtIsalpha();
			break ;
		case 2:
			testFtIsdigit();
			break ;
		case 3:
			testFtIsalnum();
			break ;
		// case 4:
		// 	testFtIsascii();
		// 	break ;
		// case 5:
		// 	testFtIsprint();
		// 	break ;
		// case 6:
		// 	testFtStrlen();
		// 	break ;
		// case 7:
		// 	testFtMemset();
		// 	break ;
		// case 8:
		// 	testFtBzero();
		// 	break ;
		// case 9:
		// 	testFtMemcpy();
		// 	break ;
		// case 10:
		// 	testFtMemmove();
		// 	break ;
		// case 11:
		// 	testFtStrlcpy();
		// 	break ;
		// case 12:
		// 	testFtStrlcat();
		// 	break ;
		// case 13:
		// 	testFtToupper();
		// 	break ;
		// case 14:
		// 	testFtTolower();
		// 	break ;
		// case 15:
		// 	testFtStrchr();
		// 	break ;
		// case 16:
		// 	testFtStrrchr();
		// 	break ;
		// case 17:
		// 	testFtStrncmp();
		// 	break ;
		// case 18:
		// 	testFtMemchr();
		// 	break ;
		// case 19:
		// 	testFtMemcmp();
		// 	break ;
		// case 20:
		// 	testFtStrnstr();
		// 	break ;
		// case 21:
		// 	testFtAtoi();
		// 	break ;
		// case 22:
		// 	testFtCalloc();
		// 	break ;
		// case 23:
		// 	testFtStrdup();
		// 	break ;
		// // Additional functions
		// case 24:
		// 	testFtSubstr();
		// 	break ;
		// case 25:
		// 	testFtStrjoin();
		// 	break ;
		// case 26:
		// 	testFtStrtrim();
		// 	break ;
		// case 27:
		// 	testFtSplit();
		// 	break ;
		// case 28:
		// 	testFtItoa();
		// 	break ;
		// case 29:
		// 	testFtStriteri();
		// 	break ;
		// case 30:
		// 	testFtPutcharFd();
		// 	break ;
		// case 31:
		// 	testFtPutstrFd();
		// 	break ;
		// case 32:
		// 	testFtPutendlFd();
		// 	break ;
		// case 33:
		// 	testFtPutnbrFd();
		// 	break ;
		// // Helper functions
		// case 34:
		// 	testFtStrnew();
		// 	break ;
		// case 35:
		// 	testFtIsspace();
		// 	break ;
		case 0:
			printf("Exiting...\n");
			break ;
		default:
			printf("Invalid choice. Please try again.\n");
			break ;
        }

        if (choice != 0)
        {
            printf("Press Enter to continue...");
            getchar(); // Clear the newline character
            getchar(); // Wait for user to press Enter
        }
    }
    printf("Exiting...\n");
    return 0;
}
