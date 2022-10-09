#include <main.h>
#include "main.h"

/**
 * main - prints the number of arguments in it
 *
 * @argc: counts the num,ber of characters
 *
 * @argv: arguments
 *
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%i\n", argc - 1);
	return 0;
}

