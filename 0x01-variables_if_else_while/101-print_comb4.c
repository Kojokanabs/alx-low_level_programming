#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - entry point
 * Description:printing three digits
 * Return: 0 always
*/
int main(void)
{
	int n;
	int m;
	int o;

	for (n = 0 ; n < 10 ; n++)
	{
		for (m = 1 ; m < 10 ; m++)
		{
			for (o = 3 ; o < 10 ; o++)
			{
				if (n < m && m < o)
				{
					putchar(n + '0');
					putchar(m + '0');
					putchar(o + '0');
					if (n + m + o != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
