#include <stdio.h>
/**
 *main - main block
 *Description: Print all possible combinations of two digits.
 *Numbers must be separated by commas and a space.
 *01 and 10 are considered as the same combination of tow digits.
 *Print only the smallest combination of two digits.
 *Numbers should be printed in ascending order, with two digits.
 *You can only use `putchar`.
 *You can only use `putchar` up to 5 times.
 *You are not allowed to use any variable of type `char`.
 *Return: 0
 */

int main(void)
{
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
