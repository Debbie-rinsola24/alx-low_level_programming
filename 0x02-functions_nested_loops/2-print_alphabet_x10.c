#include "main.h"

/**
 * print_alphabet_x10 - print in lowercase x10
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (count < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(c);
			ch++;
		}
		_putchar('\n');
		i++
	}
}

