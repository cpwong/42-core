#include "../libft/libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function prototype
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

// Test case 1: Apply uppercaseChar function to "hello"
char uppercaseChar(unsigned int i, char c)
{
    (void)i;
    return c - 32; // Convert to uppercase
}

void test_case_1()
{
    char str[] = "hello";
    char *result = ft_strmapi(str, uppercaseChar);
    printf("Test Case 1: s = \"hello\", f = uppercaseChar\n");
    printf("Expected Output: \"HELLO\"\n");
    printf("Actual Output: %s\n\n", result);
    free(result);
}

// Test case 2: Apply lowercaseChar function to "WORLD"
char lowercaseChar(unsigned int i, char c)
{
    (void)i;
    return c + 32; // Convert to lowercase
}

void test_case_2()
{
    char str[] = "WORLD";
    char *result = ft_strmapi(str, lowercaseChar);
    printf("Test Case 2: s = \"WORLD\", f = lowercaseChar\n");
    printf("Expected Output: \"world\"\n");
    printf("Actual Output: %s\n\n", result);
    free(result);
}

// Test case 3: Apply addOffset function to "012345"
char addOffset(unsigned int i, char c)
{
    return c + i; // Add index to character
}

void test_case_3()
{
    char str[] = "012345";
    char *result = ft_strmapi(str, addOffset);
    printf("Test Case 3: s = \"012345\", f = addOffset (add index to character)\n");
    printf("Expected Output: \"02468:\"\n");
    printf("Actual Output: %s\n\n", result);
    free(result);
}

// Test case 4: Apply multiplyByIndex function to "abcd"
char multiplyByIndex(unsigned int i, char c)
{
    return (c - 'a') * i + 'a'; // Multiply each character by its index
}

void test_case_4()
{
    char str[] = "abcd";
    char *result = ft_strmapi(str, multiplyByIndex);
    printf("Test Case 4: s = \"abcd\", f = multiplyByIndex (multiply each character by its index)\n");
    printf("Expected Output: \"abej\"\n");
    printf("Actual Output: %s\n\n", result);
    free(result);
}

int main(void)
{
    test_case_1();
    test_case_2();
    test_case_3();
    test_case_4();
    return 0;
}
