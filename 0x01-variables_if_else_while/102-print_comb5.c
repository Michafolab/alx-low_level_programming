#include<stdio.h>

/**
 * main -Entry point
 *
 * Description: prints all possible combinations of two two-digit numbers.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int d1 = 0, d2, d3, d4;

	while (d1 <= 9)
	{
		d2 = 0;
		while (d2 <= 9)
		{
			d3 = 0;
			while (d3 <= d4)
			{
				d4 = 0;
				while (d4 <= 9)
				{
					if ((d1 == d2) || (d1 < d2))
					{
					putchar(d1 + 48);
					putchar(d2 + 48);
					putchar(' ');
					if ((d1 + d2) < (d3 + d4))
					{
					putchar(d3 + 48);
					putchar(d4 + 48);
					if ((d1 + d2 + d3 + d4) != 35)
					{
					putchar(',');
					putchar(' ');
					}
					}
					}
					d4++;
				}
				d3++;
			}
			d2++;
		}
		d1++;
	}
	putchar('\n');

return (0);
}
