#include "main.h"
/**
 * reverse_array - reverses contents of the array of integers
 * @a: an array of integers
 *@n : number of elements of the array
 *Return :reversed contents
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int k;

	i = 0;
	j = n - 1;

	while (i < j)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
		i++;
		j--;
	}
}
