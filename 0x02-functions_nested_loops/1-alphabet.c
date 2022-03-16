#include "print_alphabet.h"

/**
 * main - prints alphabets, then new line
 * Description: uses for function
 */

void print_alphabet(void)
{
	char ch;
	void _putchar(int);
	void print_alphabet();

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
