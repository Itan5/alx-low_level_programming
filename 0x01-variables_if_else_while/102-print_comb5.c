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

	int pdd[50];

	int ppd[50];

	pdd[0] = 0;

	while
		(pdd[0] < 99)
	{
		ppd[0] = pdd[0] + 1;
	while
		(ppd[0] < 100)
	{
		if (pdd < ppd)
	{
		putchar('0' + pdd[0] / 10);

		putchar('0' + pdd[0] % 10);

		putchar(' ');

		putchar('0' + ppd[0] / 10);
		putchar('0' + ppd[0] % 10);

	if (pdd[0] != 98 || ppd[0] != 99)
	{
		putchar(',');
		putchar(' ');
	}
	}

	ppd[0]++;
	}
	pdd[0]++;
	}

		putchar('\n');
	return (0);
}

