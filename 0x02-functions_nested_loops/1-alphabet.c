#include "main.h"

/**
 *print_alphabet - prints alphabet -- lower case.
 *Return: Always 0.
 */

int Print_alphabet(void)
{
char Alphas;
void _putchar(int);
void putchar(int);

for (Alphas = 'a'; Alphas <= 'z'; Alphas++)
{
putchar(Alphas);
}
_putchar('\n');
return (0);
}
