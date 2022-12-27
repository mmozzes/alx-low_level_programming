#include <stdio.h>


/**
* main - print the letters of the alphabet in lower and upper case
* Return: 0
*/

int main(void)
{
	int lowercase = 'a';
	int uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}

	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}
		putchar(10);

	return (0);
}
