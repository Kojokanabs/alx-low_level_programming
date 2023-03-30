#include "main.h"
/**
 *print_to_98 - printing of natural numbers
 *
 *@n: parameter of function
 *
 * Return: 0 always
*/

void print_to_98(int n)
{
	int i;

	if (n > 0 && n <= 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			_putchar(i + '0');
			if (i != 98)
				-putchar(',');
				_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n < 98)
	{
		for (i = n ; i <= 98 ; i++)
		{
			_putchar(i + '0');
			if (i != 98)
				_putchar(',');
				_putchar(' ');
		}
		_putchar('\n');
	}
	else if (n > 98)
		for (i = n ; i > 98 ; i--)
		{
			_putchar(i + '0');
			if (i != 98)
				_putchar(',');
				_putchar(' ');
		}
		_putchar('\n');
	else if (n == 98)
		_putchar(n)


}
