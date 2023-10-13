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
	unsigned int dp = n;

	if (n < 0)
	{
		_putchar('-');
		dp *= -1;
	}
	if (n / 10)
	{
		print_number(dp / 10);
	}
		_putchar('0' + (dp % 10));

}
