#include "main.h"
/**
 * _isalpha - Entry point of program
 *
 *Description: Prints "1 if it is an alphabet and 0 if not"
 *
 *@c: contains all character
 * Return: Always 0 (success)
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	return (1);

	else if (c >= 'A' && c <= 'Z')
	return (1);

	else
	return (0);
}
