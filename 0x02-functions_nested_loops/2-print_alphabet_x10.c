#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 *
 * print_alphabet_x10 - Print a to z 10 times
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int line, ch;

	for (line = 0; line < 10; line++)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
	}
