#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *Description: printing base 16
 *Return: 0 always
*/
int main(void)
{
	int n;
	char j;

	for (n = 0 ; n < 10 ; n++)
		putchar(n + '0');
	for (j = 'a' ; j <= 'f' ; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
