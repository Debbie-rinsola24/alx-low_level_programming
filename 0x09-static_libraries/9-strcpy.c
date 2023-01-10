#include "main.h"

/**
 * _strcpy - copier el contenidio de uno a otra variable
 * @dest: this is a destiny
 * @src: This is the copy
 *
 * Return: This return copy
 */

char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
