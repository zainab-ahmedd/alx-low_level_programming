#include <stdio.h>
#include "main.h"
/**
 * reverse_array - Entry point
 *
 * reverse_array - reverses the content of an array of integers
 * @a: array name
 * @n: number of elements of the array
 * Return: 0 (Success)
 */
void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	for (i = 0; i < n; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		n--;
	}
}
