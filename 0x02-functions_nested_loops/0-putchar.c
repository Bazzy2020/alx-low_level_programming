#include "_putchar.h"
#include "main.h"

/**
 *main - Entry point
 *Return:0
 */


int main(void)
{
void _putchar(int);

char c[9] = "_putchar";
int i = 0;

while (i < 8)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
