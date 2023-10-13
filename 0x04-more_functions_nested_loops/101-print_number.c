#include "main.h"

/**
 * print_number - print inputted numbers
 *
 * @n:inputted numbers to be printed
 *
 * Return: Always 0.
 */
void print_number(int n)
{
	if (n < 0)
	{
	_putchar('-');
	n = -n;
	}
	if (n >= 0 && n <= 9)
	{
	_putchar('0' + n);
	}
	if (n >= 10)
	{
	print_number(n / 10);
	_putchar('0' + (n % 10));
	}
}
