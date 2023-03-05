#include <stdio.h>
#include <string.h>
/**
 * main - Calculates the length of a string
 *
 * Return: Always 0 (success)
 */
int main()
{
	char str1[100] = "My name is Affan";
	int count, i;

	count = 0;

	for (i = 0; str1[i] != '\0'; i++)
	{
		count++;
	}

	printf("%d\n", count);

	/* To prove it works*/
	printf("%d\n", strlen(str1));

	return(0);
}
