#include <stdio.h>
/**
 * main - Entry point
 *
 * main - Print 0 to 9
 * Return:0 (Success)
 */
int main(void)
{
	int num = 48, chr = 97;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	while (chr <= 102)
	{
		putchar(chr);
		chr++;
	}
	putchar('\n');
	return (0);
}
