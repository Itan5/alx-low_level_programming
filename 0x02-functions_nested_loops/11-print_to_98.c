#include "main.h"
/**
 * print_to_98 - Entry point of program
 *
 * Description: Prints all number from n to 98.
 *@n: inputed number
 *
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	while
	(n <= 98)
	{
	_putchar('0' + n);
	_putchar(',');
	_putchar(' ');
	n++;
	}
	_putchar('\n');
	}
	else
	{
	while
	(n >= 98)
	{
	_putchar('0' + n);
	_putchar(',');
	_putchar(' ');
	n--;
	}
	_putchar('\n');
	}
}
