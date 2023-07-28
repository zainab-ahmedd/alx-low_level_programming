#include <stdio.h>
#include "main.h"
/**
 * *rot13 - Entry point
 *
 * *rot13 - encodes a string using rot13
 * @c: string to be encode
 * Return: 0 (Success)
*/
char *rot13(char *c)
{
	int i, j;
	char str1[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz";
	char str2[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str1[j] == c[i])
			{
				c[i] = str2[j];
				break;
			}
		}
	}
	return (c);
}
