#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Entry point of program
 *
 * Description: Prints all number from n to 98.
 *@n: inputed number
 *
 * Return: Always 0 (success)
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
	while
	(n <= 98)
	{
	printf("%d", n);
	if (n != 98)
	{
	printf(", ");
	}
	else
	{
	printf("\n");
	}
	n++;
	}
	}
	else
	{
	while
	(n >= 98)
	{
	printf("%d", n);
	if (n != 98)
	{
	printf(", ");
	}
	else
	{
	printf("\n");
	}
	n--;
	}
	}
}
