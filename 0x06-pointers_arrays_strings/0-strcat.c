#include "main.h"


/**
 * _strcat - Concatenates two strings.
 * @dest: a pointer to the string to be concatenated upon.
 * @src: the source.
 * Return: A pointer to dest.
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(*dest + count) = *(scr + count2);
		if (*(scr + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest)
}
