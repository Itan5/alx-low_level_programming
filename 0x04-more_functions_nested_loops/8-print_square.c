#include "main.h"

/**
 * print_square - prints a square, followed by a new line
 *
 * @size: width of square
 *
 * Return: Always 0.
 */
void print_square(int size)
{
	int d = 0;
	int dp;

	if (size <= 0)
	_putchar('\n');
	while (d < size)
	{
		dp = 0;
		while (dp < size)
		{
			if (size > 0)
			{
				_putchar('#');
			}
			dp++;
		}
		_putchar('\n');
		d++;
	}
}
