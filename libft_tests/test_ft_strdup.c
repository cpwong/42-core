#include "../libft/libft.h"
#include <stdio.h>
#include <string.h>

// #define ft_strdup strdup

int main(void)
{
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
