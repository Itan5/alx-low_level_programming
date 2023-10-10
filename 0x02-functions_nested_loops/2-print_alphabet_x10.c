#include "main.h"
/**
 * print_alphabet_x10 - Input point
 *
 *Description: Prints "all alphabets in lower casein 10 places"
 *
 * Return: Always 0 (success)
 */
void print_alphabet_x10(void)
{
	int dp;

	char alph;

	for (dp = 0; dp < 10; dp++)
	{
		alph = 'a'

		while
		(alph <= 'z')
		{
		_putchar(alph);
		alph++;
		}
		_putchar('\n');

	}
}
