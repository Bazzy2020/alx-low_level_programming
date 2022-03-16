#include "main.h"
#include <stdio.h>
/**
 *print_alphabet - prints alphabet -- lower case.
 *Return: Always 0.
 */
int print_alphabet(void);

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
