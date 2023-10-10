#include "main.h"
/**
 * print_last_digit - Entry point of program
 *
 *Description: Prints "last digit of a number"
 *
 *@num: contains the number
 * Return: Always 0 (success)
 */
int print_last_digit(int num)
{
	int d = num % 10;

	if (num > 0)
	{
	_putchar('0' + d);
	return (d);
	}

	else if (num < 0)
	{
	_putchar('0' + d);
	return (d);
	}

	else
	{
	_putchar('0');
	return (0);
	}
}
