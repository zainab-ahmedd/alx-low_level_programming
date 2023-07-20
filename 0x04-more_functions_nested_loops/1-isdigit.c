#include <stdio.h>
#include "main.h"
/**
 * _isdigit - Entry point
 *
 * _isdigit - checks for a digit
 * @c: The degit to be checked
 * Return: 0 (Success)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
