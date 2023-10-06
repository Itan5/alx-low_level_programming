#include <stdio.h>
/**
 * main - Entry point of program
 *
 *Description: Prints "all alphabets in lowercase and uppercase"
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char bothalpha;

	for  (bothalpha = 'a'; bothalpha <= 'z'; bothalpha++)
	{
		putchar(bothalpha);
	}
	for  (bothalpha = 'A'; bothalpha <= 'Z'; bothalpha++)
	{
		putchar(bothalpha);
	}

	putchar('\n');
	return (0);
}
