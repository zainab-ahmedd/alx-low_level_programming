#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * main - Print a to z
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
	return (0);
}
