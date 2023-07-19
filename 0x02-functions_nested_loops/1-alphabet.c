#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * print_alphabet - Print a to z
 * Return: 0 (Success)
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
