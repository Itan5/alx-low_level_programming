#include "main.h"
/**
 * times_table - Entry point of program
 *
 *Description: Prints "multiplication table between 0 and 9"
 *
 *
 * Return: Always 0 (success)
 */
void times_table(void)
{
	int m, t;
	int tt, x, y;

	m = 0;
	while
	(m <= 9)
	{
	t = 0;
	while
	(t <= 9)
	{
	tt = m * t;
	if (t > 0)
	{
	_putchar(',');
	_putchar(' ');
	if  (tt < 10)
	{
	_putchar(' ');
	}
	}
	if  (tt < 10)
	{
	_putchar('0' + tt);
	}
	else
	{
	x = tt / 10;
	y = tt % 10;
	_putchar('0' + x);
	}
	_putchar('0' + y);
	t++;
	}
	_putchar('\n');
	m++;
	}
}
