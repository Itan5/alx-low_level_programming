#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * Description: Prints all lowercase alphabets.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char alph = 'a';

	while
	(alph <= 'z')
	{
	_putchar(alph);
	alph++;
	}
	_putchar('\n');

}
