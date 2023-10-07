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

	comint[0] = 10;

	while
		(comint[0] <= 99)
	{
		putchar('0' + comint[0] / 10);
		putchar('0' + comint[0] % 10);
		comint[0]++;
		if (comint[0] <= 99)
	{
		putchar(',');
	}
	}

		putchar('\n');
	return (0);
}

