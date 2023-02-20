#include <stdio.h>
/**
 * main - Program to update the value of a variable using a pointer
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	double num, *ptr_num;

	num = 123.45;

	ptr_num = &num;

	*ptr_num = 543.21;


	printf("%5.2f\n",*ptr_num);

	return (0);
}
