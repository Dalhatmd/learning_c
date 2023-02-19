#include <stdio.h>
#include <math.h>
/**
 * main - a program that prints the square root of 0x19A1
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;

	x = 0x19A1;

	printf("The square root of %4x is %2.0f \n", x, sqrt(x));
	return (0);
}
