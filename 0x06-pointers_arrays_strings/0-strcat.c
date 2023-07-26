#include <stdio.h>
#include "main.h"
/**
 * *_strcat - Entry point
 *
 * *_strcat - concatenates two strings
 * @dest: from string
 * @src: to string
 * Return: 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	for (; dest[i]; i++)
	{
	}
	for (j = 0; src[j]; j++)
	{
		dest[i] = src[j];
		dest++;
		src++;
	}
	dest[j++] = '\0';
	return (dest);
}
