#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Program print the alphabet in lower case followed by new line
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	char alphabet = 'a';
	while (alphabet <= 'z') {
		putchar(alphabet);
		alphabet++;
	}
	putchar('\n');
	return (0);
}
