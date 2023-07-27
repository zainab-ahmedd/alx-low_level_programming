#include <stdio.h>
#include "main.h"
/**
 * *_strncpy - Entry point
 *
 * *_strncpy - copy a string
 * @dest: to string
 * @src: from string
 * @n: bytes
 * Return: 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0, src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = 0 ;i < n ; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
