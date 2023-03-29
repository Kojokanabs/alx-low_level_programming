#include "main.h"
/**
 *print_sign -function that print signs
 *
 *@n: parameters to be printed
 *
 *Return: 1, 0 and -1
*/

int print_sign(int n)
{
	if (n > 0)
	{
		-putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		-putchar('0');
		return (0);
	}
	else
		-putchar('-');
		return (-1);
}
