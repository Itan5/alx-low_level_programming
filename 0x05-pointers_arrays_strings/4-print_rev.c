#include "main.h"

/**
 * print_rev - Entry point of program
 * Description: Prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 * Return: no return value for void data type
 */
void print_rev(char *s)
{
	int dp = 0;
	int lnt = 0;
	int dm;

	while (s[dp] != '\0')
	{
		lnt++;
		dp++;
	}
	dm = lnt - 1;
	while (dm >= 0)
	{
		_putchar(s[dm]);
		dm--;
	}
	_putchar('\n');
}

