#include "sort.h"
/**
 * bubble_sort - Bubble sort
 * @array: Array thats sorted
 * @size: Size of array
 */

void bubble_sort(int *array, size_t size)
{
	size_t index, counterIndex;

	for (counterIndex = 1; counterIndex != 0;)
	{
		for (index = 0, counterIndex = 0; index < size - 1; index++)
		{
			if (array[index] > array[index + 1])
			{
				swap_array(array, size, index, index + 1);
				counterIndex++;
			}
		}
	}
}

/**
 * swap_array - function that swaps two array elements
 * @array: Array
 * @s: Size of array
 * @a: Index of first element
 * @b: Index of second element
 */

void swap_array(int *array, size_t s, int a, int b)
{
	int t = array[a];

	array[a] = array[b];
	array[b] = t;
	print_array(array, s);
}
