#include "main.h"


/**
 * strcat - Concatenates two strings.
 * @dest: a pointer to the string to be concatenated upon.
 * @src: the source.
 * Return: A pointer to dest.
 */

char *strcat(char *dest, const char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
