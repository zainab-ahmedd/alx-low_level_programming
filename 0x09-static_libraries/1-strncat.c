#include <stdio.h>
#include "main.h"
/**
 * *_strncat - Entry point
 *
 * *_strncat - concatenates two strings
 * @dest: to string
 * @src: from string
 * @n: bytes
 * Return: 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	for (; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
