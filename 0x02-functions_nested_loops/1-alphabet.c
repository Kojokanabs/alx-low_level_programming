#include "main.h"
/**
 * print_alphabet - printing all in lower case
*/
void print_alphabet(void)
{
	char alphabets;

	for (alphabets = 'a' ; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);
	_putchar('\n');
}
