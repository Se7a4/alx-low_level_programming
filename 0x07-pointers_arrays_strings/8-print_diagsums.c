#include "main.h"
#include <complex.h>
#include <stdio.h>

/**
* print_diagsums - function that prints the sum of.
* the two diagonals of a square matrix of integers.
* @a: parameter Pointer to an int type of array.
* @size: parameter to the size of the array
* return : always void.
*/

void print_diagsums(int *a, int size)
{
unsigned int sum = 0, sum2 = 0;
int i = 0;
for (i = 0; i < size; i++)
{
sum += (*(a + i * size + i));
sum2 += (*((a + size - 1) + i * (size - 1)));
}
printf("%d, %d\n", sum, sum2);
}
