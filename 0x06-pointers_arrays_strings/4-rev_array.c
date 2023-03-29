#include "main.h"
/**
 * reverse_array - prints reverse array.
 * @a: array to be compared.
 * @n: size of array.
 * Return: reversed array.
 */
void reverse_array(int *a, int n)
{
	int x, w, z;

	w = 0;
         z = n - 1;
	while (w < z)
	{
		x = *(a + w);
		*(a + w) = *(a + z);
		*(a + z) = x;
		w++;
	        z--;
	}
}
