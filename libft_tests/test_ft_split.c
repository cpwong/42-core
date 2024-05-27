#include "../libft/libft.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to compare two string arrays
int compareArrays(char **arr1, char **arr2) {
    int i = 0;
    while (arr1[i] != NULL && arr2[i] != NULL) {
        if (strcmp(arr1[i], arr2[i]) != 0) {
            return 0;
        }
        i++;
    }
    if (arr1[i] == NULL && arr2[i] == NULL) {
        return 1;
    }
    return 0;
}

int main(void) {
    // Test cases with known input and expected output
    char str1[] = "hello,world,test";
    char charset1 = ',';
    printf("Test Case 1: str = \"hello,world,test\", charset = \",\"\n");
    printf("Expected Output: [\"hello\", \"world\", \"test\"]\n");
    char **result1 = ft_split(str1, charset1);
    char *expected1[] = {"hello", "world", "test", NULL};
    printf("Result: ");
    if (compareArrays(result1, expected1)) {
        printf("Pass\n\n");
    } else {
        printf("Fail\n\n");
    }
    // Free the allocated memory
    for (int i = 0; result1[i] != NULL; i++) {
        free(result1[i]);
    }
    free(result1);

    char str2[] = "hello world test";
    char charset2 = ' ';
    printf("Test Case 2: str = \"hello world test\", charset = \" \"\n");
    printf("Expected Output: [\"hello\", \"world\", \"test\"]\n");
    char **result2 = ft_split(str2, charset2);
    char *expected2[] = {"hello", "world", "test", NULL};
    printf("Result: ");
    if (compareArrays(result2, expected2)) {
        printf("Pass\n\n");
    } else {
        printf("Fail\n\n");
    }
    // Free the allocated memory
    for (int i = 0; result2[i] != NULL; i++) {
        free(result2[i]);
    }
    free(result2);

    char str3[] = "hello";
    char charset3 = ',';
    printf("Test Case 3: str = \"hello\", charset = \",\"\n");
    printf("Expected Output: [\"hello\"]\n");
    char **result3 = ft_split(str3, charset3);
    char *expected3[] = {"hello", NULL};
    printf("Result: ");
    if (compareArrays(result3, expected3)) {
        printf("Pass\n\n");
    } else {
        printf("Fail\n\n");
    }
    // Free the allocated memory
    for (int i = 0; result3[i] != NULL; i++) {
        free(result3[i]);
    }
    free(result3);

    char str4[] = "";
    char charset4 = ',';
    printf("Test Case 4: str = \"\", charset = \",\"\n");
    printf("Expected Output: [\"\"]\n");
    char **result4 = ft_split(str4, charset4);
    char *expected4[] = {""};
    printf("Result: ");
    if (compareArrays(result4, expected4)) {
        printf("Pass\n\n");
    } else {
        printf("Fail\n\n");
    }
    // Free the allocated memory
    for (int i = 0; result4[i] != NULL; i++) {
        free(result4[i]);
    }
    free(result4);

    char str5[] = "hello,,world,,test";
    char charset5 = ',';
    printf("Test Case 5: str = \"hello,,world,,test\", charset = \",\"\n");
    printf("Expected Output: [\"hello\", \"world\", \"test\"]\n");
    char **result5 = ft_split(str5, charset5);
    char *expected5[] = {"hello", "world", "test", NULL};
    printf("Result: ");
    if (compareArrays(result5, expected5)) {
        printf("Pass\n\n");
    } else {
        printf("Fail\n\n");
    }
    // Free the allocated memory
    for (int i = 0; result5[i] != NULL; i++) {
        free(result5[i]);
    }
    free(result5);

    return 0;
}