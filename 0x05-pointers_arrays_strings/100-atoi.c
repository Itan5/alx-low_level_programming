#include "main.h"
/**
*_atoi - convert a string to an integer
*@s: string to be printed
*Return: (num *sign)
*/
int _atoi(char *s)
{
	unsigned int dp = 0;
	unsigned int num = 0;
	int sign = 1;

	while (s[dp] != '\0' && (s[dp] < '0' || s[dp] > '9'))
	{
		if (s[dp] == '-')
		{
			sign *= -1;
		}
		dp++;
	}

	while (s[dp] != '\0' && (s[dp] >= '0' && s[dp] <= '9'))
	{
		num = (num * 10 + (s[dp] - '0'));
		dp++;
	}

	return (num * sign);
}

