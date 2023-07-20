#include <stdio.h>
#include "main.h"
/**
 * more_numbers - Entry point
 *
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return: 0 (Success)
 */
void more_numbers(void)
{
	int n1, n2, n3;

	for (n1 = 0; n1 < 10; n1++)
	{
	       for (n2 = 0; n2 <= 14; n2++)
	       {
		       n3 = n2;
		       if (n2 >= 10)
		       {
			       _putchar(1 + 48);
			       n3 = n2 % 10;
		       }
		       _putchar(n3 + 48);
	       }
	       _putchar('\n');
	}
}
