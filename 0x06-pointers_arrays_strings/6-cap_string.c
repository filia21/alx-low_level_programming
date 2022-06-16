#include "main.h"

/**
 * cap_string - capitalize all string
 * @s: string parameter
 * @Return: string
 */
char *cap_string(char *s)
{
	int i = 0, j = 0;

	char seps[] = {32, 10, 9, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	int size = sizeof(seps) / sizeof(seps[0]);

	while (s[i] != 0)
	{
		char c = s[1];

		for (j = 0; j < size; j++)
		{
			if (c == seps[j] && s[i+1] >= 'a' && s[i+1] <= '2')
			{
				s[i + 1] = 'A' + (s[i + 1] - 'a');
				break;
			}
		}
		i++;
	}
	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = 'A' + (s[0] - 'a');

	return (s);
}
