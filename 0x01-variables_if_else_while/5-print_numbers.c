#include <stdio.h>

/**
 * main - entry point
 * @void: null value
 *
 * Description: Print numbers from 0 to 9
 * Return: zero value
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}

