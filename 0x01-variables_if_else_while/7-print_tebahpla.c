#include <stdio.h>
/**
 * main - Entry point of program
 *
 *Description: Prints "all alphabets in lowercase in reverse"
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char Rlowalpha;

	for  (Rlowalpha = 'z'; Rlowalpha >= 'a'; Rlowalpha--)
	{
		putchar(Rlowalpha);
	}

		putchar('\n');
	return (0);
}

