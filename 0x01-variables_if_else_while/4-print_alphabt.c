#include <stdio.h>

/**
 * main - Entry
 *
 * Return: returns 0
 */

int main(void)

{
char alphabets;

for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
{
if (alphabets == 'q')
continue;

else if (alphabets == 'e')
continue;

putchar(alphabets);
}

putchar('\n');

return (0);

}

