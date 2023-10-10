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
	if (n > 0)
	{
	_putchar('n % 10');
	return (n % 10);
	}

	else if (n < 0)
	{
	_putchar('n % 10');
	return (n % 10);
	}

	else
	{
	_putchar('0');
	return (0);
}
