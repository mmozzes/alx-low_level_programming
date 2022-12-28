#include <stdio.h>


/**
 * main -  prints all the numbers of base 16 in lowercase.
 * Return: 0
 */

int main(void)
{
	int hexnum = 0;
	int letters = 'a';

	while (hexnum <= 9)
	{
		putchar('0' + hexnum);
		hexnum++;
	}
	while (letters <= 'f')
	{
		putchar(letters);
		letters++;
	}
	putchar('\n');

	return (0);
}
