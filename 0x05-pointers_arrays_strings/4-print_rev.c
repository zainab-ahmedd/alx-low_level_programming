#include <stdio.h>
#include "main.h"
/**
 * print_rev - Entry point
 *
 * print_rev - prints a string, in reverse
 * @s: string
 * Return: 0 (Success)
 */
void print_rev(char *s)
{
	int l;

	for (l = 0; *s != '\0'; s++)
	{
		l++;
	}
	s--;
	for (; l > 0; l--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('/n');
}
