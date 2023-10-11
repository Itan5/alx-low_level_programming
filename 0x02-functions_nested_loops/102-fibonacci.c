#include <stdio.h>

/**
 * main - Entry point of program
 *
 * Description: Prints first fifty fibonancci numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	long long int x = 1, y = 2, z;

	printf("%lld, %lld, ", x, y);
	for (int d = 3; d <= 50; d++)
	{
	z = x + y;
	printf("%lld", z);
	if (d < 50)
	{
	printf(", ");
	}
	else
	{
	printf("\n");
	}
	x = y;
	y = z;
	}
	return (0);
}
