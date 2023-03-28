#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main - entry point
 *Description: exclude q and e
 *Return: 0 always
*/
int main(void)
{
	char n;

	for (n = 'a'; n <= 'z'; n++)
		if (n != 'q' && n != 'e')
			putchar(n);

	putchar('\n');
	return (0);
}
