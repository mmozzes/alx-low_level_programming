#include "main.h"


/**
 * _isalpha - checks for alphabetic characters
 * @c: character being checked
 * Return: 1 for alphabet and 0 for non alphabet
 */


int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
