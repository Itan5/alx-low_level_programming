#include <stdio.h>
/**
 * main - Entry point of program
 *
 *Description: Prints "all possible combinations of single-digit numbers"
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	int comint[50];

	comint[0] = 0;

	while
		(comint[0] <= 9)
	{
		putchar('0' + comint[0]);
		comint[0]++;
		if (comint[0] <= 9)
	{
		putchar(',');
		putchar(' ');
	}
	}

		putchar('\n');
	return (0);
}

