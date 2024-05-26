#include "../libft.h"
#include <stdio.h>

void uppercaseChar(unsigned int i, char *c) 
{
	int k = i;
	i = k;
	*c = ft_toupper(*c);
}

void lowercaseChar(unsigned int i, char *c) 
{
	int k = i;
	i = k;
		*c = ft_tolower(*c);
}

void addOffset(unsigned int i, char *c) 
{
	int k = i;
	i = k;
	*c += i;
}

void multiplyByIndex(unsigned int i, char *c) 
{
	int k = i;
	i = k;
	*c = (*c - 'a') * i + 'a';
}

int main(void)
{
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
	printf("Expected Output: \"02468:\"\n");
	printf("Before: %s\n", str3);
	ft_striteri(str3, addOffset);
	printf("After: %s\n\n", str3);

	char str4[] = "abcd";

	printf("Test Case 4: s = \"abcd\", f = multiplyByIndex (multiply each character by its index)\n");
	printf("Expected Output: \"abej\"\n");
	printf("Before: %s\n", str4);
	ft_striteri(str4, multiplyByIndex);
	printf("After: %s\n\n", str4);
}