#include "main.h"

/**
 * *cap_string - Entry point of program
 * Description: capitalizes first character of all words of a string
 * @str: string to be operated on
 * Return: Returns str when success
 */
char *cap_string(char *str)
{
	int capnxt = 1;
	int dp = 0;
	int i;
	char separators[] = "\t\n,.;!{}()\" ";

	while (str[dp] != '\0')
	{
		if ((str[dp] >= 'a' && str[dp] <= 'z') || (str[dp] >= 'A' && str[dp] <= 'Z'))
		{
			if (capnxt == 1)
			{
				if (str[dp] >= 'a' && str[dp] <= 'z')
				{
					str[dp] = str[dp] - 'a' + 'A';
				}
				capnxt = 0;
			}
			else
			{
				capnxt = 0;
			}
		}
		else
		{
			i = 0;
			while (separators[i] != '\0')
			{
				if (str[dp] == separators[i])
				{
					if (str[dp + 1] >= 'a' && str[dp + 1] <= 'z')
					{
					str[dp + 1] = str[dp + 1] - 'a' + 'A';
					}
				}
			i++;
			}
		}
		dp++;
	}
	return (str);
}
