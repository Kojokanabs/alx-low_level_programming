#include "main.h"
/**
 * main - entry point
 * Description: printing alphabets in lower case
 * Return: 0 always
*/
int main(void)
{
	char alphabets;

	for (alphabets = 'a' ; alphabets <= 'z'; alphabets++)
		_putchar(alphabets);
	_putchar('\n');
	return (0);
}
