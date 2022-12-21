#include "main.h"


/**
 * strcat - Concatenates two strings.
 * @dest: a pointer to the string to be concatenated upon.
 * @scr: the source to be appended to @dest
 * Return: Apointer to the destinatin string @dest.
 */

char *strcat(char *dest, const char *scr)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; scr[index]; index++)
		dest[dest_len++] = scr[index];

	return (dest);
}
