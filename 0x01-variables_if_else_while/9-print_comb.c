#include <stdio.h>
/**
 * main - Entry point
 *
 * main - Print all possible combinations of single-digit numbers
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
