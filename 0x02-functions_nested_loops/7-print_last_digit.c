#include "main.h"
/**
 * print_last_digit - Entry point of program
 *
 *Description: Prints "last digit of a number"
 *
 *@d: contains the number
 * Return: Always 0 (success)
 */
int print_last_digit(int d)
{
	if (d > 10)
	return (d % 10);

	else
	return (d);
}
