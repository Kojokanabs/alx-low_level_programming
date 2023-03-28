#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *Description: printing space followed by comma
 *Return: 0 always
*/
int main(void)
{
	int n;

	for (n = 0 ; n < 10 ; n++)
	{

		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
