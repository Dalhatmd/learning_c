#include <stdio.h>
/**
 * main - Rewriting the program from figure 10.1 using nested if statements
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	for (x = 0; x <= 100; x++)
	{
		if (x % 2 == 0)
			if (x % 3 == 0)
				printf("%d\n",x);
	}
	return (0);
}
