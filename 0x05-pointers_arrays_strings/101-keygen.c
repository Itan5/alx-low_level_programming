#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - program that generates a random password
 *
 * Return: 0 for success
 */
int main(void)
{
		char password[100];
		int dp = 2772;
		int dm = 0;
		int x = 0;
		int y;

		srand(time(0));

		while (x < 100)
		{
				y = rand() % 128;
				password[x] = y;
				dm += y;

				if (dm >= dp)
				{
						dm -= y;
						password[x] = (dp - dm);
						break;
				}

				x++;
		}

		while (x < 100)
		{
				putchar(password[x]);
				x++;
		}

		return 0;
}

