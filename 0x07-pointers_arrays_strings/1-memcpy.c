#include <stdio.h>
#include "main.h"
/**
 * *_memcpy - Entry point
 *
 * *_memcpy - copies memory area.
 * @n: bytes
 * @scr: from
 * @dest: to
 * Return: 0 (Success)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
