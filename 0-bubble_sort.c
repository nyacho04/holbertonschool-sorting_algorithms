#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
* bubble_sort - sorts an array of integers in ascending order
*
* @array: the array to be sorted
*
* @size: the size of the array
*
* Return: void
*/

void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t a;
	int nya;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (a = 0; a < size - i - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				nya = array[a];
				array[a] = array[a + 1];
				array[a + 1] = nya;
				print_array(array, size);
			}
		}
	}
}
