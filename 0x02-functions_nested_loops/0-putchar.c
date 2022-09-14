#include <stdio.h>
#include "main.h"
/**
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
*/

int main(void)
{
int count;
int vals[] = {95,112,117,114,99,107,97,114};

for(count = 0; count <= 7; count++)
{
_putchar(vals[count]);
}
_putchar('\n');
return (0);
}
