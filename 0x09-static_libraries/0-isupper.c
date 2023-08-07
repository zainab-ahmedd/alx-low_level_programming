#include <stdio.h>
#include "main.h"
/**
 * _isupper - Entry point
 *
 * _isupper - checks for uppercase character
 * @c: The character to be printed
 * Return: 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
