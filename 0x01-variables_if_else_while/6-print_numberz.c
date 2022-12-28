#include <stdio.h>

/**
 * main - ptints single digits  in base 10 using putchar
 * Return: 0
 */

int main(void)
{
	int numbers = 0;

		while (numbers <= 9)
		{
			putchar('0' + numbers);
			numbers++;
		}
	putchar('\n');

	return (0);
}
