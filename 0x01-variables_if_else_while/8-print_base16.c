#include <stdio.h>

/**
 * main - entry point
 * @void: null value
 *
 * Description: print numbers of base 16
 * Return: zero value
 */

int main(void)
{
	char c;
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
	for (c = 'a'; c <= 'f'; c++)
		putchar(c);
	putchar('\n');
	return (0);
}

