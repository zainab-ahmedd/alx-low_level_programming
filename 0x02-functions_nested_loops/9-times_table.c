#include <stdio.h>
#include "main.h"
/**
 * times_table - Entry point
 *
 * times_table - prints the 9 times table
 * Return: 0 (Success)
 */
void times_table(void)
{
	int n1, n2, result;

	for (n1 = 0; n1 <= 9; n1++)
	{
		for (n2 = 0; n2 <= 9; n2++)
		{
			result = n2 * n1;
			if (n2 == 0)
			{
				_putchar(result + '0');
			}
			if (result <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(result + 48);
			}
			else if (result > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
		}
				_putchar('$');
				_putchar('\n');
	}
}
