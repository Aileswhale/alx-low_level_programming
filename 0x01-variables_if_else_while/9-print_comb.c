#include <stdio.h>
/**
 * main- entry point
 *
 * return: always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
{
	for (j = 0; j < 10; j++)
{
	putchar(i + '0');
	putchar(j + '0');
	if (i == 9 && j == 9)
{
	putchar('\n');
}
	else
{
	putchar(',');
	putchar(' ');
}
}
}
	return (0);
}
