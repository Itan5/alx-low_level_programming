#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: Prints sum of all the multiples of 3 or 5
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int s;

		for (n = 1; n < 1024; n++)
		{
		if (n % 3 == 0 || n % 5 == 0)
			{
			s += n;
			}
		}
					printf("%d\n", s);
	return (0);
}
