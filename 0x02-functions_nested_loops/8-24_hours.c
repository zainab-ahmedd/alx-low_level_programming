#include <stdio.h>
#include "main.h"
/**
 * jack_bauer - Entry point
 *
 * jack_bauer - prints every minute of the day of Jack Bauer
 * Return: 0 (Success)
 */
void jack_bauer(void)
{
	int n1, n2;

	for (n1 = 0; n1 < 24 ; n1++)
	{
		for (n2 = 0; n2 < 60; n2++)
		{
			putchar((n1 / 10) + 48);
			putchar((n1 % 10) + 48);
			putchar(':');
			putchar((n2 / 10) + 48);
			putchar((n2 % 10) + 48);
			putchar('\n');
		}
	}
}
