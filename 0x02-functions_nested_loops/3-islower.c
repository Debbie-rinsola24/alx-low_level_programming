#include "main.h"

/**
 * _islowercase - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islowercase(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
