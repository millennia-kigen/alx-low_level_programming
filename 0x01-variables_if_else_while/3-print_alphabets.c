#include <stdio.h>
/**
 * main -Entry
 * Return: 0 (success)
 */
int main(void)
{
char ch;
for(ch = 'a'; ch <= 'z'; ch++)
putchar(ch);
for(ch = 'A'; ch <= 'z'; ch++)
putchar(ch);
putchar('\n');
return (0);
}
