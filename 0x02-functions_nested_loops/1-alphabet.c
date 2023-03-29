#include "main.h"
/**
 * Printing alphabets - print_alphabets in lower case
*/
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a' ; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);
	_putchar('\n');
}
