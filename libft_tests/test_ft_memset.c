#include <stdio.h>
#include <string.h>
#include <assert.h>
#include "../libft/libft.h"

// # define ft_memset memset

// Function for easy comparison and printing of results
void compare_and_print(const char *test_name, const char *expected, const char *result, size_t len) {
    if (memcmp(expected, result, len) == 0) {
        printf("Test PASSED: %s\n\n", test_name);
    } else {
        printf("Test FAILED: %s\n", test_name);
        printf("  Expected: [%.*s]\n", (int)len, expected);
        printf("  Result:   [%.*s]\n\n", (int)len, result);
    }
}

int main() {
    // Test Cases
    char str1[20] = "This is a string";
    char expected1[20] = "XXXX is a string";
	void	*mem;
    mem = ft_memset(str1, 'X', 4);
	printf("mem = %p\n", mem);
    compare_and_print("Basic String Test", expected1, str1, 17);

    char str2[10] = "123456789";
    char expected2[10] = "000056789";
    mem = ft_memset(str2, '0', 4);
	printf("mem = %p\n", mem);
    compare_and_print("Numeric String Test", expected2, str2, 9);

    char str3[5] = "abcd";
    char expected3[5] = "\0\0\0\0\0";
    ft_memset(str3, '\0', 5);
    compare_and_print("Null Character Test", expected3, str3, 5);

    int arr[5] = {1, 2, 3, 4, 5};
    int expected_arr[5] = {-1, -1, -1, 4, 5};
    ft_memset(arr, -1, 3 * sizeof(int));
    compare_and_print("Integer Array Test", (char*)expected_arr, (char*)arr, 5 * sizeof(int));

    char *str4 = NULL;
    char *expected4 = NULL;
    printf("Testing: NULL Pointer Test -- should seg fault!!\n");
    ft_memset(str4, 'Z', 10); // Should seg fault
    assert(str4 == expected4);
    printf("TEST PASSED: NULL Pointer Test\n");

    return 0;
}
