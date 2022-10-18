#include "main.h"
/**
 *_isalpha - Return 1 int value if c is a letter.
 *
 *@c: The int valu to be  printed
 *
 *Return: Always 0 as int
 */

int _isalpha(int c)

{
if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))

{
return (1);
}

else
{
return (0);
}

}
