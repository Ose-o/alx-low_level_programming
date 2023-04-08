#include <unistd.h>
/**
 *_putchar - write the character c to stdout
 *@c: The charater to print
 *
 *Return:On success 1
 * On the error, -1 is returnd and error is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
