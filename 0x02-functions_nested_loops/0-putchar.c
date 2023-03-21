#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * main - entry point
 *
 * Description: program that prints _putchar, followed by a new line
 *
 * Return: always 0 when successful
*/
int main(void)
{
	char c[] = "_putchar";

	write(1, &c, 8);
	putchar('\n');
	return (0);
}
