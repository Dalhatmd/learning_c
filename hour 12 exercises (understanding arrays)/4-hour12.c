#include <stdio.h>
/**
 * main - Program to print the number of bytes in a multidimensional array and the contents of the array 
 *
 * Return: Always 0 (success)
 */
int main (void)
{
	char list_ch[6][2] = {
		1, 'A',
		2, 'B',
		3, 'C',
		4, 'D',
		5, 'E',
		6, 'F'};

	printf("The number of bytes is %d\n", sizeof(list_ch));
	int i, j;

	for (i = 0; i < 6; i++)
	{
		putchar(10);
		for (j = 0; j < 2; j++)
			printf("%d %c", list_ch[i][j]);
	}
	putchar(10);
	return (0);
}





