#include <stdio.h>
/**
 * main - another print alphabet
 *
 * Decscription: using another putchar
 * this is how to write a putchar
 * Return: 0
 */

int main(void)
{
	char ch;
	
	for (ch = 'a' ; ch <= 'z' ; ch++)
	
	{
		putchar(ch);
	}
	
	for (ch = 'A' ; ch <= 'Z' ; ch++)
	
	{ 
		putchar(ch);
	}
	
	putchar('\n');
	return (0);
}
