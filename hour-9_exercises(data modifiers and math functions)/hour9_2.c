#include <stdio.h>
/**
 * main - Program to print the sizes of long int,short int and long double 
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	printf("Size of long int is :%d \n", sizeof(long int));
	printf("Size of short int is :%d \n", sizeof(short int));
	printf("Size of long double is :%d \n", sizeof(long double));

	return (0);
}
