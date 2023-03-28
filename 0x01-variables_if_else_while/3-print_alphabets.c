#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *Description: print lower and upper
 *Return: 0 always
*/
int main(void)
{
	char n;


	for (n = 'a' ; n <= 'z' ; n++)
		putchar(n);
	for (n = 'A' ; n <= 'Z' ; n++)
		putchar(n);
	putchar('\n');
	return (0);


}

