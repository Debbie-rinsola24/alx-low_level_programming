#include "search_algos.h"
#include <stdio.h>

/**
 * search -  searches for a value in an array using Binary search recursion
 * @array: the input array to search integer
 * @s: start of array
 * @e: end of the array
 * @value: value to search
 * Return: first index where value is located or -1 if not found
 */
int search(int *array, size_t s, size_t e, int value)
{
	size_t c = 0, m = 0;
	char *delm;

	if (s > e)
		return (-1);
	printf("Searching in array:");
	delm = " ";
	for (c = s; c <= e; c++)
	{
		printf("%s%d", delm, array[c]);
		delm = ", ";
	}
	printf("\n");
	m = (s + e) / 2;
	if (array[m] == value)
		return (m);
	if (array[m] < value)
		return (search(array, m + 1, e, value));
	return (search(array, s, m - 1, value));
}

/**
 * exponential_search - searches for a value in an array exponential
 * @array: the input array to search integer
 * @size: size of array
 * @value: value to search
 * Return: first index where value is located or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t b = 1;

	if (array == NULL)
		return (-1);
	while (b < size && array[b] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", b, array[b]);
		b *= 2;
	}
	if (b < size)
		size = b + 1;
	b /= 2;
	printf("Value found between indexes [%lu] and [%lu]\n", b, size - 1);
	return (search(array, b, size - 1, value));
}
