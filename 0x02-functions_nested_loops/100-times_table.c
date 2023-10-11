#include "main.h"

/**
 * print_times_table - Entry point of program
 *
 * Description: Prints the times table of the number in n
 *@n: contains number to be worked on
 * Return: Always 0 (success)
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
	int h, m, tt;

		for (h = 0; h <= n; h++)
		{
			for (m = 0; m <= n; m++)
			{
				tt = h * m;
				if (m == 0)
				{
					_putchar('0' + tt);
				} else if (tt <= 9 && m != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + tt);
				} else if (tt >= 10 && tt <= 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar('0' + (tt / 10));
					_putchar('0' + (tt % 10));
				} else if (tt >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar('0' + (tt / 100));
					_putchar('0' + ((tt % 100) / 10));
					_putchar('0' + (tt % 10));
				}
			}
			_putchar('\n');
		}
	}
}
