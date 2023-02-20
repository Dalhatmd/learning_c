#include <stdio.h>
/**
 * main - Program to update the value of a character variable to a decimal using pointers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch;

	int *ptr_ch;

	ch = 'A';

	ptr_ch = &ch;

	*ptr_ch = 66;

	printf("ch has been converted to %d\n", *ptr_ch);
	printf("%d\n", ch);
	return (0);
}


