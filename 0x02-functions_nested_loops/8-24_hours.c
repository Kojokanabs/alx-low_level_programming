#include "main.h"
/**
* jack_bauer - printing minutes
*
* Return: 0 always
*/

void jack_bauer(void)
{
	int a;
	int b;

	for (i = 0 ; i <= 23 ; i++)
	{
		for (b = 1 ; b <= 59 ; b++)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');


		}
	}
}
