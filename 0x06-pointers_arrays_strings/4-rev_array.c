#include "main.h"

/**
 * reverse_array - Entry point of program
 * Description: Reverses the content of an array of integers
 * @a: Array to be reversed
 * @n: Lenght of array
 * Return: no return value for void data type
 */
void reverse_array(int *a, int n)
{
	int dm = 0;
	int dy = n - 1;

	dm = 0;
	dy = n - 1;

	while (dm < dy)
	{
		int dx = a[dm];

		a[dm] = a[dy];
		a[dy] = dx;

		dm++;
		dy--;
	}
}
