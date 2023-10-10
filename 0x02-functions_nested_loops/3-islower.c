#include "main.h"
/**
 * _islower - Entry point of program
 *
 *Description: Prints "1 if an alphabet is lower case and 0 if not"
 *
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	_putchar('1');
	_putchar('\n');
	}
	
	else 
	{
	_putchar('0');
	}
}
