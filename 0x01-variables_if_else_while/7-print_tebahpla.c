#include <stdio.h>

/**
 * main - entry point
 * @void: null value
 *
 * Description: print alphabet in reverse
 * Return: zero value
 */

int main(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
