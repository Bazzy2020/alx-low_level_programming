#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - prints alphabet -- lower case.
 *Return: Always 0.
 */
void print_alphabet(int);

int print_alphabet(void)
{
char Alphas;
void _putchar(int);

for (Alphas = 'a'; Alphas <= 'z'; Alphas++)
{
putchar(Alphas);
}
_putchar('\n');
return (0);
}
