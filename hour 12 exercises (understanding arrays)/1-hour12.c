#include <stdio.h>
/**
 * main - This program prints the elements of am array to the screen
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char array_char[5] = {'A','B','C','D','E'};

	int i;

	for (i = 0; i < 6; i++)
		printf("%c", array_char[i]);
	putchar(10);
	return (0);
}
