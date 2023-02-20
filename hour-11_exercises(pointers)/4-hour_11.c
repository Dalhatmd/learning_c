#include <stdio.h>
/**
 * main - Program to multiply two numbers using indirection
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x, y, sol;

	x = 5;
	y = 6;

	int *ptr_x, *ptr_y;

	ptr_x = &x;
	ptr_y = &y;

	sol = *ptr_x * *ptr_y;
	printf("The answer is %d\n", sol);

	return (0);
}
