#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry points
 * Description: reverse low case
 * Return: 0 always
*/
int main(void)
{
	char n;

	for (n = 'z' ; n >= 'a' ; n--)
		putchar(n);
	putchar('\n');
	return (0);
}
