#include <stdio.h>
/**
 * main - A program that reads letters as inputs and displays their numeric value if input = 'A','B' or 'C'
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int x;


	x = getchar();
	switch(x){
	case 'A':
		printf("%d\n", 'A');
			break;
	case 'B':
			printf("%d\n",'B');
				break;
	case 'C':
				printf("%d\n", 'C');
				    break;
	case 'Q':
				    break;
	default:
				    printf("Not A or B or C\n");}
	

	return 0;
}
