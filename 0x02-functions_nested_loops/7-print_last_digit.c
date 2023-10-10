#include "main.h"
/**
 * print_last_digit - Entry point of program
 *
 *Description: Prints "last digit of a number"
 *
 *@n: contains the number
 * Return: Always 0 (success)
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (n > 0)
	{
	_putchar('d');
	return (d);
	}

	else if (n < 0)
	{
	_putchar('d');
	return (d);
	}

	else
	{
	_putchar('0');
	return (0);
	}
}
