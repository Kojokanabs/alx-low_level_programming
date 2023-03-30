#include "main.h"
/**
 *_abs - printing only positive side of a number
 *
 *@n: number to be checked
 *
 *Return: @n
*/
int _abs(int n)
{
	if (n < 0)
		n = -(n);
	else if (n >= 0)
		n = n;
	return (n);
}
