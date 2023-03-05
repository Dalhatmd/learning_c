#include <stdio.h>
/**
 * main - copies a string to another
 *
 * Return: Always 0 (success)
 */
int main()
{
	char str1[] = "This is exercise 1.";
	char str2[100];

	int i;

	for (i = 0; str1[i] != '\0'; i++)
	{
		str2[i] = str1[i];
	}

	printf("%s\n", str2);
	return (0);
}
