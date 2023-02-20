#include <stdio.h>
#include <math.h>
/**
 * main - A program that prints the sine and tangent fo 30 degrees
 *
 * Return: Always 0 success
 */
int main(void)
{
	double deg;

	deg = 30.0;
/* Convert to radians */
	deg *= 3.14 / 180;

	printf("The sine of 30 is %f \n", sin(deg));
	printf("The tangent of 30 is %f \n", tan(deg));
	return (0);
}
