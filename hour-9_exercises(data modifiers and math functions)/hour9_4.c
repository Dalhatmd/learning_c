#include <stdio.h>
/**
 * main - A program that prints negative integers im hex format along with their signed int equivalent
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int a, b, c;

	a = -123;
	b = -456;
	c = -789;

	printf("The hex value of %d is %x \n ", a, a);
	printf("The hex value of %d is %x \n ",b, b);
	printf("The hex value f %d is %x \n", c, c);

	return (0);
}

