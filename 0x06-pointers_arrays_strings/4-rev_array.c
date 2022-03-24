#include "main.h"
/**
 * reverse_array - a function to reverse an array of
 * @a: an input
 * @n: number of elements in the array
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int rev;

	while (i < n--)
	{
		rev = a[i];
		a[i++] = a[n];
		a[n] = rev;
	}
}
