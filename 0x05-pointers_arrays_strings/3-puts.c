#include <stdio.h>
#include "main.h"
/**
 * _puts - Entry point
 *
 * _puts - prints a string, followed by a new line
 * @str: string
 * Return: 0 (Success)
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
