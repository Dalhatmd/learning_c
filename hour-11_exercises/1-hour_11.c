#include <stdio.h>
/**
 * main - A program to print out the left values (addresses) of variables as well as the right values
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y, z;

	x = 512;
	y = 1024;
	z = 2048;

	printf("The left side value of %d is %p\n",x, &x);
	printf("The left side value of %d is %p\n", y, &y);
	printf("The left side value of %d is %p\n", z, &z);

	return (0);
}
