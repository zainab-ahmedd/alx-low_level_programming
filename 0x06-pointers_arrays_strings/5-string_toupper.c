#include <stdio.h>
#include "main.h"
/**
 * *string_toupper - Entry point
 *
 * *string_toupper - changes all lowercase letters of a string to uppercase
 * @c: charcter of array
 * Return: 0 (Success)
*/
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] <= 122 && c[i] >= 97)
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
}
