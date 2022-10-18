include "main.h"
/**
 *print_sign - returns 0 or 1 as int
 *
 *@n: the int to print out
 *
 *Return: Always returns 0
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar ('+');
return (1);
}

else if (n == 0)
{
_putchar ('0');
return (0);
}

else
{
_putchar ('-');
return (-1);
}

}
