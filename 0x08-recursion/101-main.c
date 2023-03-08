#include "main.h"
#include <stdio.h>


/* function prototype for wildcmp */
int wildcmp(char *s1, char *s2);

/**
 * main - tests the wildcmp function
 *
 * Return: 0 on success
 */
int main(void)
{
    int r;

    r = wildcmp("main.c", "*.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*a*i*n*.*c*");
    printf("%d\n", r);
    r = wildcmp("main.c", "main.c");
    printf("%d\n", r);
    r = wildcmp("main.c", "m*c");
    printf("%d\n", r);
    r = wildcmp("main.c", "ma********************************c");
    printf("%d\n", r);
    r = wildcmp("main.c", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "***");
    printf("%d\n", r);
    r = wildcmp("", "*");
    printf("%d\n", r);
    r = wildcmp("main.c", "");
    printf("%d\n", r);
    return (0);
}

