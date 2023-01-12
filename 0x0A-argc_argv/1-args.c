#include <stdio.h>
#include "main.h"

/**
 * main - prints number of arguments
 * @argc: returns number of arguments
 * @argv: returns array of arguments
 * Return: 0
*/

int main(int argc, char *argv[]__attribute__((unused)))

{
	if (argc > 0)
		printf("%d\n", argc - 1);

	return (0);
}
