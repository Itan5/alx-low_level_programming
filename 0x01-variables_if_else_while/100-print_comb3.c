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

	int comdec[50];

	comint[0] = 0;

	while
		(comint[0] < 10)
	{
		comdec[0] = comint[0] + 1;
	while
		(comdec[0] < 10)
	{
		putchar('0' + comint[0]);

		putchar('0' + comdec[0]);


		if (comint[0] != 8 || comdec[0] != 9)
	{
		putchar(',');
		putchar(' ');
	}
	comdec[0]++;
	}
	comint[0]++;
	}

		putchar('\n');
	return (0);
}

