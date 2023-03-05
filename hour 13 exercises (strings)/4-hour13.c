#include <stdio.h>
/**
 * main - takes two numbers from standard input and prints the sum
 *
 * Return: Always 0 (success)
 */
int main()
{
	int x, y, sum;

	printf("Enter first number \n");
	scanf("%d", &x);
	
	printf("Enter second number \n");
	scanf("%d", &y);

	sum = x + y;

	printf("The sum is %d \n", sum);

	return (0);
}
