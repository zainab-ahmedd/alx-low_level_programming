#include<stdio.h>
/**
 * main - Entry point
 *
 * main - Print 0 to 9
 * Return: 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%i", num);
		num++;
	}
	putchar('\n');
	return (0);
}
