#include <stdio.h>
#include "main.h"
/**
 * _strcmp - Entry point
 *
 * _strcmp - that compares two strings
 * @s1: fitst string
 * @s2: second string
 * Return: 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, comp;

	j = 0;
	for (i = 0; s1[i] != '\0' && s2[j] != '\0'; i++)
	{
		comp = s1[i] - s2[j];
		j++;
	}
	return (comp);
}
