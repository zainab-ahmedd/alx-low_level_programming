#include <stdio.h>
#include "main.h"
/**
 * _isalpha - Entry point
 *
 * _isalpha - check lowercase
 * @c: the character to be checked
 * Return: 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
