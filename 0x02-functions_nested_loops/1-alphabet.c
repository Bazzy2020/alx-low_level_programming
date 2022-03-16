#include "main.h"

/**
 * print_alphabet - prints alphabets, then new line
 * Description: uses for function
 */

int print_alphabet(void)
{
char ch;
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
return (0);
}
