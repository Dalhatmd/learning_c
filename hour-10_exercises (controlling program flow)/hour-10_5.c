#include <stdio.h>
/**
 * main - Rewriting the program for listing 10.7 in the book
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, sum;

	for (x = 0; x < 8; x++)
	{
		if (x % 3 == 0 && x % 2 == 0)
			continue;
		sum += x;
	}

	printf("The sum is %d\n", sum);
	return 0;
}
