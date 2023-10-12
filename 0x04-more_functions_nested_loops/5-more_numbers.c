#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: Always 0.
 */
void more_numbers(void)
{
	int n = 0;
	int d;

		while
			(n <= 9)
			{
			d = 0;
			while
				(d < 15)
				{
				if (d > 9)
					{
					_putchar('1');
					}
					_putchar('0' + (d % 10));
					d++;
				}
			_putchar('\n');
			n++;
			}
}
