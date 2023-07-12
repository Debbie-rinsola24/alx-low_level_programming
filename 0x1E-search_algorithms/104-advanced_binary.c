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
	if (array[s] == value)
		return (s);
	m = (s + e) / 2;
	if (array[m] < value)
		return (search(array, m + 1, e, value));
	return (search(array, s, m, value));
}


/**
 * advanced_binary -  searches for a value in an array using Binary search
 * @array: the input array to search integer
 * @size: size of array
 * @value: value to search
 * Return: first index where value is l///ocated or -1 if not found
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (search(array, 0, size - 1, value));
}
