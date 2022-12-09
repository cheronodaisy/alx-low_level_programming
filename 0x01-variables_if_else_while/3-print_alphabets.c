#include <stdio.h>

/*
 *
 *  * main -  print lowercase and uppercase a-zA-Z using putchar
 *
 *   * Description: 'prints A-Z and a-z'
 *
 *    * Return: Always 0 (Success)
 *
 *     */

int main(void)

{

	char lower = 'a';

	char upper = 'A';

	while (lower <= 'z') /*lowercase*/

	{

		putchar(lower);

		lower++;

	}

	while (upper <= 'Z')/*uppercase*/

	{

		putchar(upper);

		upper++;

	}

	putchar('\n');

	return (0);

}
