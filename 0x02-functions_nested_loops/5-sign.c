#include "main.h"
/**
 * print_sign - Entry point of program
 *
 *Description: Prints "1 if it is a positive number and 0 if not"
 *
 *@n: contains all number
 * Return: Always 0 (success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	_putchar(',');
	_putchar(' ');
	return (1);
	}

	else if (n == 0)
	{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	return (0);
	}

	else
	{
	_putchar('-');
	_putchar(',');
	_putchar(' ');
	return (-1);
	}
}
