#include <stdio.h>
#include "main.h"
/**
 * *leet - Entry point
 *
 * *leet - encodes a string
 * @c: string to be leet
 * Return: n (Success)
*/
char *leet(char *c)
{
	int i, j;
	char string[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (string[j] == c[i])
			{
				c[i] = num[j];
			}
		}
	}
	return (c);
}
