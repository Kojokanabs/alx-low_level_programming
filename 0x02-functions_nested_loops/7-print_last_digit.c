#include "main.h"
/**
 *print_last_digit - printing of last digit of a number
 *
 *@a: parameter to be printed
 *
 * Return: @a
*/

int print_last_digit(int a)
{
	a = a % 10
	if (a < 0)
		a = -(a);
	return (a);
}

