#include "main.h"
/**
 *_islower - short description, single line
 *@c: contains value to be compared
 *Return: Always returns 0.
 */

int _islower(int c)
{
	int islower = 0;
	char ch = c;

	if (ch >= 'a' && ch <= 'z')
	{
		islower = 1;
	}
	return (islower);
}
