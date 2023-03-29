#include "main.h"
/**
 *print_alphabet_x10 - printing of alphabets by 10
*/

void print_alphabet_x10(void)
{
	int i;
	char n;

	for (i = 1 ; i <= 10 ; i++)
	{
		for (n = 'a' ; n <= 'z' ; n++)
			_putchar(n);

		_putchar('\n');

	}
}
