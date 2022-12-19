#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every second character of a string, followed by a new line
 *  @str: string to print
 *  Return: nothing
*/

void puts2(char *str)

{
	int i = 0;

	while (*(str + i) != '\0')
	{
		if (i % 2 == 0)
			putchar(*(str + i));
		i++;
	}
	putchar(10);
}
