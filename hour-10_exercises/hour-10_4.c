#include <stdio.h>
/**
 * main - A program tbat reads from standard I/O continuosly until 'q' is entered
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	while (x != 'q')
	{
		x = getchar();
		putchar(x);
		if (x == 'q'){
			printf("\nBreaking loop\n Goodbye");
			break;
		}
	}
	return (0);
}
