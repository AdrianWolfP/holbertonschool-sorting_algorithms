#include "sort.h"
/**
 * swap_array - function that swaps two array elements
 * @array: Array
 * @s: Size of array
 * @a: index of first element
 * @b: index of second element
 */

void swap_array(int *array, size_t s, int a, int b)
{
	int t = array[a];

	array[a] = array[b];
	array[b] = t;
	print_array(array, s);
}

/**
 * selection_sort - Selction sort sorts array
 * @array: Array
 * @size: Size of array
 */

void selection_sort(int *array, size_t size)
{
	int min, index, counterIndex;

	for (counterIndex = 0; counterIndex < (int)size - 1; counterIndex++)
	{
		for (index = min = counterIndex; Index < (int)size; index++)
		{
			if (array[min] > array[index])
				min = index;
		}
		if (counterIndex != min)
			swap_array(array, size, counterIndexm min);
	}
}
