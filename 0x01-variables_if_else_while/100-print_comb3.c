#include <stdio.h>
/**
 * main - Entry point
 *
 * main - Print a A to z Z.
 * Return: 0 (Success)
 */
int main(void)
{
	int n1 = 48;

	while (n1 <= 56)
	{
		int n2 = 49;

		while (n2 <= 57)
		{
			if (n2 > n1)
			{
				putchar(n1);
				putchar(n2);
				if (n1 != 56 || n2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
			n2++;
		}
		n1++;
	}
	putchar('\n');
	return (0);
}
