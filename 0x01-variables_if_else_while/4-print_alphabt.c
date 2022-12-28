#include <stdio.h>

/**
 *  main - prints all letters af the aplphabet in lowrcase except e and q
 *  Return: 0
 */

int main(void)
{
	int lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'e' && lowercase != 'q')
		{
		putchar(lowercase);
		}

		lowercase++;
	}

	putchar(10);

	return (0);
}
