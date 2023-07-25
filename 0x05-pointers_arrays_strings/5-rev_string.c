#include <stdio.h>
#include "main.h"
/**
 * rev_string - Entry point
 *
 * rev_string - string reverse
 * @s: string
 * Return: 0 (Success)
 */
void rev_string(char *s)
{
	int i, l;
	char reverse; 

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < l; i++)
	{
		l--;
		reverse = s[i];
		s[i] = s[l];
		s[1] = reverse;
	}
}
