#include "main.h"



/**
 * print_alphabet - prints letters of the alphabet using _putchar
 * Return: 0
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
		_putchar('\n');
	}
}
