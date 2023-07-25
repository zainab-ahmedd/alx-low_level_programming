#include <stdio.h>
#include "main.h"
/**
 * swap_int - Entry point
 *
 * swap_int - swaps the values of two integers
 * @a: first int
 * @b: second int
 * Return: 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
