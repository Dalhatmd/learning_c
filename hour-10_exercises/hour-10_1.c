#include <stdio.h>
/**
 * main - This program will print all numbers between 1 and 100 that are divisible by 6
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x < 101; x++)
	{
		if (x % 6 == 0)
			printf("%d is divisible by six\n", x);
	}
	return 0;
}
