#include <stdio.h>
/**
 *main - main block
 *Description: Use `putchar` to print lowecase and then uppercase alphabet.
 *Return: 0
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		puchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar(c);
		c++
	}

	putchar('\n');
	return (0);
}
