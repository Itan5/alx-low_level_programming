#include "main.h"

/**
 *print_triangle - Program entry point
 *
 * @size: Size of the triangle
 *
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int d = 0;
	int dm;
	int dp;
	int dk;

	if (size <= 0)
	_putchar('\n');
	else
	{
	while (d < size)
	{
		dm = size - d;
		dp = 1;
		dk = 0;
		while (dp < dm)
		{
			_putchar(' ');
			dp++;
		}
		while (dk <= d)
		{
		_putchar('#');
		dk++;
		}
		_putchar('\n');
		d++;
	}
	}
}
