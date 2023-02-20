#include <stdio.h>
/**
 * main - rewriting the program from exercise one but using a for loop to initialize the array
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char array[5];

	int i;

	for (i = 0; i < 5; i++)
		 array[i] = i + 65;

	printf("%s",array);
	putchar(10);

	return (0);
}
