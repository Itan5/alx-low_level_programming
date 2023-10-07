#include <stdio.h>
/**
 * main - Entry point of program
 *
 *Description: Prints "all possible different combinations of three digits"
 *
 * Return: Always 0 (success)
 */
int main(void)
{

	int comint[50];

	int comdec[50];

	int comhex[50];

	comint[0] = 0;

	while
		(comint[0] < 10)
	{
		comdec[0] = comint[0] + 1;
	while
		(comdec[0] < 10)
	{
		comhex[0] = comdec[0] + 1;
	while
		(comhex[0] < 10)
	{
		putchar('0' + comint[0]);

		putchar('0' + comdec[0]);

		putchar('0' + comhex[0]);

		if (comint[0] != 7 || comdec[0] != 8 || comhex[0] != 9)
	{
		putchar(',');
		putchar(' ');
	}
	comhex[0]++;
	}
	comdec[0]++;
	}
	comint[0]++;
	}

		putchar('\n');
	return (0);
}

