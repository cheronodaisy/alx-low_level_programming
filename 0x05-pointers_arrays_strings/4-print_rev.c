#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints in reverse
 * @s: string to be printed
 * Return: nothing
*/

void print_rev(char *s)

{
	int len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
	}
	putchar(10);
}
