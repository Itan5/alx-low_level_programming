#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 *
 * @n: Length of the diagonal line
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int d = 0;
	int dp;

	if (n <= 0)
	_putchar('\n');
	while (d < n)
	{
		dp = 0;
		while (dp < d)
		{
			if (n > 0)
			{
				_putchar(' ');
			}
			dp++;
		}
		_putchar('\\');
		_putchar('\n');
		d++;
	}
}
