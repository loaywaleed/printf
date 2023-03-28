#include "main.h"

/**
 * put_char - writes the character c to stdout
 * @character: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int put_char(char character)
{
	return (write(1, &character, 1));
}
