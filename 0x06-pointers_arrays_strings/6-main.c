#include "main.h"

#include <stdio.h>

/**
 * main - check the code
 * Return: Always 0.
 */

int main(void)
{

char str[] = "Expect the best.
	'\n'Prepare for the worst. Capitalize on what comes.
	'\n'hello world! hello-world0123456hello world\thello world.hello world";
	char *ptr;


	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
