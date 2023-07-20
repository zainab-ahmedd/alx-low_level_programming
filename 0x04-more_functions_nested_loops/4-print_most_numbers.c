#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - Entry point
 *
 * print_most_numbers - prints the numbers, from 0 to 9
 * Return: 0 (Success)
 */
void print_most_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		if (n != 50 || n != 52)
		{
			_putchar(n);
		}
	}
	_putchar('\n');
}
