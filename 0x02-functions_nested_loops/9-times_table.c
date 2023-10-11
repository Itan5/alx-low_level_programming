#include "main.h"

/**
 * times_table - Entry point of program
 *
 * Description: Prints the times table between 0 and 9 using while loops.
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int h, m, tt;

	h = 0;
	while (h <= 9)
	{
	m = 0;
	while (m <= 9)
	{
	tt = h * m;
	_putchar('0' + tt);
	if (tt < 10 && m != 9)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else if (tt > 10)
	{
	_putchar('0' + (tt / 10));
	_putchar('0' + (tt % 10));
	if (tt > 10 && m != 9)
	{
	_putchar(',');
	_putchar(' ');
	}
	}
	_putchar('\n');
	m++;
	}
	h++;
	}
}
