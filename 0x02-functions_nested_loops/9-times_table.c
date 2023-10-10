#include "main.h"
/**
 * times_table - Entry point of program
 *
 *Description: Prints "all timetable between 0 and 9"
 *
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int h;

	int m;

	int tt;

	h = 0;

	while
	(h <= 9)
	{
	m = 0;

	while

	(m <= 9)
	tt = h * m;
	{
	_putchar('0' + tt);
	if (tt != 81)
	{
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	m++;
	}
	_putchar('\n');
	h++;
	}
}
