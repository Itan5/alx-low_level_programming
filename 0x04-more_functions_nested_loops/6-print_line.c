#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 *@n: Lenght of line
 * Return: Always 0.
 */
void print_line(int n)
{
	int d = 0;

	while
		(d < n)
		{
			if (n > 0)
			{
			_putchar('_');
			}
		d++;
		}
	_putchar('\n');
}
