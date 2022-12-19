#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string followed by  a new line
 * @str: string to print
 * Returns:No error on success
*/

void _puts(char *str)

{
	while (*str != '\0')
	{
		putchar(*str++);
	}
	putchar('\n');
}
