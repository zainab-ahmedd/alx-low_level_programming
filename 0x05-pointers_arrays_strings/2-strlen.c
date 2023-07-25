#include <stdio.h>
#include "main.h"
/**
 * _strlen - Entry point
 *
 * _strlen - returns the length of a string
 * @s: string
 * Return: 0 (Success)
 */
int _strlen(char *s)
{
	int l;

	for (l = 0; *s != NULL; s++)
	{
		l++;
	}
	return (l); 
}
