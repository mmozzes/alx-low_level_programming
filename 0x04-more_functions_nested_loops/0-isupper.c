#include "main.h"

/**
 *  _isupper - checks for lowercase character
 * @c: character being checked
 * Return: 1 if its lowercase and 0 if not lowercase.
 */

int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (0);
	else
		return (1);
}
