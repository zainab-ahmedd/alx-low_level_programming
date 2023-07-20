#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * print_last_digit - prints the last digit of a number.
 * @n: the number
 * Return: 0 (Success)
 */
int print_last_digit(int n)
{
	int digit;

	if (n < 0)
	{
		digit = -n % 10;
	}
	else
	{
		digit = n % 10;
	}
	_putchar(digit + 48);
	return (digit);
}
