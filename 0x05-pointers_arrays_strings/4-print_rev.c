#include "main.h"


/**
 * print_rev - Display a string s in reverse sense.
 * @s: string to reverse
 *
 * Return: Always 0.
 */

void print_rev(char *s)
{
	int i,  n;

	n = 0;
	while (s[n] != '\0')
	n++;

	for (i = n - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
		_putchar('\n');
}
