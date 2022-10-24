#include "function_pointers.h"

/**
 * int_index - searches for an int
 * @array: array to search
 * @size: size of array
 * @cmp: pointer to comparing func
 *
 * Return: index of first element for which
 * the cmp func oes not return 0, or -1 if match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}
