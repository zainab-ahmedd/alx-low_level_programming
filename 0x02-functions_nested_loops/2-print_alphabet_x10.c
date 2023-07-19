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
	int line;

	for (line = 0; line <= 10; line++)
	{
		print_alphabet();
		_putchar('\n');
	}
