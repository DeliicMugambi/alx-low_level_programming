#include "main.h"
/**
 * _strlen - Returns the lenght of a string.
 *
 * @s: the string to get the length of.
 *
 * return: the length of @s.
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
