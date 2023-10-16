#include "main.h"

/**
 * rev_string - Entry point of program
 * Description: Prints a string, in reverse, followed by a new line.
 * @s: string to be printed
 * Return: no return value for void data type
 */
void rev_string(char *s)
{
	int x = 0;
	int y = 0;
	int length;
	int begin;
	int finish;

	while (s[x] != '\0')
	{
	y++;
	x++;
	}
	length = y;
	begin = 0;
	finish = length - 1;

	while (begin < finish)
	{
		char dp = s[begin];

		s[begin] = s[finish];
		s[finish] = dp;

		begin++;
		finish--;
	}
}
