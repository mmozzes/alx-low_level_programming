#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int numbers = 0;

	while (numbers <= 9)
	{
		printf("%d", numbers);
		numbers++;
	}
	putchar(10);

		return (0);
}
