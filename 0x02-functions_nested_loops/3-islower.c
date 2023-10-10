#include "main.h"
/**
 * _islower - Entry point of program
 *
 *Description: Prints "1 if an alphabet is lower case and 0 if not"
 *
 *@c: contains all alphabets
 * Return: Always 0 (success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	else
	return (0);

}
