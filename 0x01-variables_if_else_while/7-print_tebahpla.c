#include <stdio.h>


/**
 * main - prints alphabet in lowercase in reverseorder
 * Return: 0
 */

int main(void)
{
	int lowercase = 'z';

	while (lowercase >= 'a')
	{
		putchar(lowercase);
		lowercase--;
	}
	putchar('\n');

	return (0);
}
