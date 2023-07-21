#include <stdio.h>
#include "main.h"
/**
 * print_line - Entry point
 *
 * print_line - draws a straight line in the terminal
 * @n:  is the number of times the character _ should be printed
 * Return: 0 (Success)
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('-');
		}
		_putchar('\n');
	}
}
