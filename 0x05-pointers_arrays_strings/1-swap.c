#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: First entry
 * @b: Second entry
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}
