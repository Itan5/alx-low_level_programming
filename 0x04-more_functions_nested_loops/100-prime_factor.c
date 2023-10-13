#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: prints the last prime factor of a number
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long num = 612852475143;
	unsigned long dp = 2;

	while
		(dp <= num)
		{
		while
			((num % dp) == 0)
			{
			num /= dp;
			}
		dp++;
		}
			printf("%lu\n", dp - 1);
	return (0);
}
