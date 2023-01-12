#include <stdio.h>
#include "main.h"

/**
 * main - print the name of program
 * @argc: gives number of arguments
 * @argv: an array of string of arguments
 * Return: 0 on success
*/

int main(int argc, char *argv[])

{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
