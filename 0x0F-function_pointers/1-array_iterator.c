#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a functio given as a param
 * on each element of array
 * @array: the array
 * @size: the size
 * @action: pointer to the func
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
