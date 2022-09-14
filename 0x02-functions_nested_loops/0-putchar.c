#include "main.h"
/**
* main - Entry point
*
* Return: On success 0
*/
int main(void)
{
int count;
int vals[] = {95, 112, 117, 114, 99, 104, 97, 114};

for (count = 0; count <= 7; count++)
{
_putchar(vals[count]);
}
_putchar('\n');
return (0);
}
