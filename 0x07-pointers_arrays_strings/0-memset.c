#include "main.h"
/* function fills the first n
 * bytes of the memory area pointed to by s
 * with constant byte b
 * Returns a pointer to the memory area s
 * Author @Ose O
 */

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

