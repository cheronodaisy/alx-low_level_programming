#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * rev_string - reverses string
 * @s: string to be reversed
 * Return: nothing
*/

void rev_string(char *s)

{
	int len, i;

	char *begin_ptr, *end_ptr, ch;

	len = strlen(s);
	begin_ptr = s;
	end_ptr = s;

	for (i = 0; i < len - 1; i++)
		end_ptr++;

	for (i = 0; i < len / 2; i++)
	{
		ch = *end_ptr;
		*end_ptr = *begin_ptr;
		*begin_ptr = ch;
		begin_ptr++;
		end_ptr--;
	}
}


