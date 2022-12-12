#include <stdio.h>

/**
 * main - entry point
 * @void: null value
 *
 * Description: print numbers from 0 to 9
 * Return: zero value
 */

int main(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	putchar('\n');
	return (0);
}

