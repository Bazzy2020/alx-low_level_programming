#include "main.h"

/**
 *print_alphabet - prints alphabet -- lower case.
 *Return: Always 0.
 */

int print_alphabet(void)
{
	char Alphas;

	for (Alphas = 'a'; Alphas <= 'z'; Alphas++)
	{
		putchar(Alphas);
	}
	putchar('\n');
	return (0);
}
