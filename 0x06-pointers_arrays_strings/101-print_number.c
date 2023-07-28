#include <stdio.h>
#include "main.h"
/**
 * print_number - Entry point
 *
 * print_number - prints an integer
 * @n: integer
 * Return: 0 (Success)
*/
void print_number(int n)
{
	unsigned int m;

	m = n;

	if (m < 0)
	{
		_putchar('-');
		m = -n;
	}
	if (m / 10 != 0)
	{
		print_number(m / 10);
	}
	_putchar((m % 10) + '0');
}
