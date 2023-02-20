#include <stdio.h>
/**
 * main - program to print "I like C!" to the screen
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	char ch[] = {'I',' ','l','i','k','e',' ','c','!','\0'};

	int i;

	for (i = 0; ch[i]; i++)
		printf("%c", ch[i]);

	putchar(10);

	return (0);
}
