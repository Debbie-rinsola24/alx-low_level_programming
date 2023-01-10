#include "main.h"

/**
 * _puts -> this is a function that puts
 * @str: a param to _putss function
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
