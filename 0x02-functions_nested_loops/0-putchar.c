#include <unistd.h>
/*#include "main.h"*/
/**
 * main - Entry point
 * Description: prints 'Holberton \n'
 * Return: Always 0 (success)
 */
int main(void)
{
C

char str[] = "putchar\n";
int i = 0;

while (str[i] != '\0')
	{
	char c = str[i];

	_putchar(c);
	i++;
	}
return (0);
}
