#include<stdio.h>
/**
 * main - Entry point
 *
 * main - Print a to z ecept q and e
 * Return: 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
		{		ch++;
		}
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
