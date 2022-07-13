#include <unistd.h>
/**
 *_putchar - writes a character to the stdout
 *@c:character to print
 *Return:no. of characters written
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
