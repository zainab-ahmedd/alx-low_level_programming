#include <stdio.h>
#include "main.h"
/**
 * leet - Entry point
 *
 * leet - encodes a string
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
		j = 0;
		for (; j < 10; j++)
		{
			if (c[i] == string[j])
			{
				c[i] == num[j];
			}
		}
	}
	return (c);
}
