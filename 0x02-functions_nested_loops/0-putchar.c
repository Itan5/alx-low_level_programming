#include "main.h"
/**
 * main - Input point of program
 *
 *Description: Prints "_putchar"
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char dp[10] = "_putchar\n";

	int x = 0;

	while (x < 9)
	{
	_putchar(dp[x]);
	x++;
	}

	return (0);
}
