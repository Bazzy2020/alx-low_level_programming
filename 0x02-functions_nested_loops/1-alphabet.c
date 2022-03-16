#include "main.h"

/**
 * print_alphabet - prints alphabets, then new line
 * Description: uses for function
 *Return: Always 0
 */

int print_alphabet(void)
{
char Ch;
for (Ch = 'a'; Ch <= 'z'; Ch++)
{
_putchar(Ch);
}
_putchar('\n');
return (0);
}
