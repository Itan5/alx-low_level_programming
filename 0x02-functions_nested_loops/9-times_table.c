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
	int x;
	int y;

	h = 0;
	while
	(h <= 9) {
	m = 0;
	while
	(m <= 9)
	{
	tt = h * m;
	if (tt < 10 && m > 0)
	{
	_putchar('0' + tt);
	_putchar(',');
	_putchar(' ');
	_putchar(' ');
	}
	else if
	(tt >= 10)
	{
	x = tt / 10;
	y = tt % 10;
	_putchar('0' + x);
	_putchar('0' + y);
	_putchar(',');
	_putchar(' ');
	}
	m++;
	}
	_putchar('\n');
	h++;
	}
}
