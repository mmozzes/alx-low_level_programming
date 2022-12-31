#include "main.h"


/**
 * print_alphabet_x10 - prints alphabrt in lowercase 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	int times = 0;
	char alphabet = 'a';

	while (times <= 9)
	{

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		_putchar(alphabet);
	}
		_putchar('\n');

		times++;
	}
}
