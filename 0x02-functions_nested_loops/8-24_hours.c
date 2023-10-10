#include "main.h"
/**
 * jack_bauer - Entry point of program
 *
 *Description: Prints "all time of the day"
 *
 *
 * Return: Always 0 (success)
 */
void jack_bauer(void)
{
	int hrs;

	int mins;

	int th;

	int tih;

	int tm;

	int tim;

	hrs = 0;

	while
	(hrs <= 23)
	{
	mins = 0;

	th = hrs / 10;
	tih = hrs % 10;

	while
	(mins <= 59)
	{
	tm = mins / 10;
	tim = mins % 10;
	_putchar('0' + th);
	_putchar('0' + tih);
	_putchar(':');
	_putchar('0' + tm);
	_putchar('0' + tim);
	_putchar('\n');
	mins++;
	}
	hrs++;
	}
}
