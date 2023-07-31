#include <stdio.h>
#include "main.h"
/**
 * *_memset - Entry point
 *
 * *_memset - prints an integer
 * @n: integer
 * @b: constant byte
 * @s: pointer
 * Return: 0 (Success)
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
