#include <stdio.h>
#include "main.h"
/**
 * print_numbers - Entry point
 *
 * print_numbers - prints the numbers, from 0 to 9
 * Return: 0 (Success)
 */
void print_numbers(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		_putchar(n);
	}
	putchar('\n');
}
