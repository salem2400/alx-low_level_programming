#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	int x;

	if (array == NULL)
	{
		return (-1);
	}
	for (x = 0; x < size; x++)
	{
		if (value == array[x])
		{
			return (x);
		}
	}
	return (-1);
}
