#include <stdio.h>
/**
 * main - converts to lowercasr
 *
 * Return: Always 0 (success)
 */
int main()
{
	int i = 0;
	int change = 'a' - 'A';

	char str1[100] = "a bOY wENT tO tHE mARKET";

	printf("%s\n", str1);

	while (str1[i])
	{
		if (str1[i] >= 'A' && str1[i] <= 'Z')
		{
			str1[i] += change;
		}
		i++;
	}

	printf("%s\n" ,str1);

	return (0);
}
