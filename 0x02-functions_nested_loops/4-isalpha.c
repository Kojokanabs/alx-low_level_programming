#include "main.h"
/**
 *_isalpha - function that check alphabets
 *
 *@c: parameter to be printed
 *
 *Return: 1 if parameter is lower or uppercase, 0 otherwise
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
