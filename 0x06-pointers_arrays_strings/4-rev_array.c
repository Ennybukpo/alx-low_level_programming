#include "main.h"
/**
 * reverse_array - reverses array
 * @a: pointer to the array to be changed
 * @n: no. of elements
 * Return: returns void
 */

void reverse_array(int *a, int n)

{
	int *start_c, *end_c, c;
	int i;


	start_c = a;
	end_c = a;


	for (i = 0; i < n - 1; i++)
	{
		end_c++;
	}




	for (i = 0; i < n / 2; i++)
	{


		c = *end_c;
		*end_c = *start_c;
		*start_c = c;

		start_c++;
		end_c--;
	}

}
