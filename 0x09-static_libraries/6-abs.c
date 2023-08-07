#include <stdio.h>
#include "main.h"
/**
 * _abs - Entry point
 *
 * _abs - computes the absolute value of an integer
 * @n: the number to be computes
 * Return: 0 (Success)
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
		return (-n);
}
