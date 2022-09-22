#include "main.h"

/**
 * reverse_array - is a function that reverses an array of integers
 *
 * @a: the arrayof integers to be reversed
 *
 * @n: the number of elements in the array that is to be reversed
 *
 */

void reverse_array(int *a, int n)
{
	int i;
	int b;

	i = 0;
	while (i < n)
	{
		n--;
		b = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
