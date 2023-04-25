#include "sort.h"
/**
 * selection_sort - Selction sort sorts array
 * @array: Array
 * @size: Size of array
 * Return: Void
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int temp = 0;
	int temp_i = 0;
	int flag = 0;

	while (i < (size - 1))
	{
		flag = 0;
		for (j = i + 1; j < size; j++)
		{
			if (flag == 0)
			{
				if (array[i] > array[j])
				{
					flag = 1;
					temp = array[j];
					temp_i = j;
				}
			}
			else
			{
				if (temp > array[j])
				{
					temp = array[j];
					temp_i = j;
				}
			}
		}
		if (flag == i)
		{
			array[temp_i] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
		i++;
	}
}
