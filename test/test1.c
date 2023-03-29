#include "main.h"
#include <stdio.h>

void sep(void)
{
    printf("\n");
}

int test1(void)
{
    int len;
    int len2;

    len = _printf("Name: %s", "Ayomide");
    sep();
    len2 = printf("Name: %s", "Ayomide");

    if (len != len2)
        return (1);

    return (0);
}

int test2(void)
{
    int len;
    int len2;

    len = _printf("Name: %c %c", 'A', 'c');
    sep();
    len2 = printf("Name: %c %c", 'A', 'c');

    if (len != len2)
        return (1);

    return (0);
}

int test3(void)
{
    int len;
    int len2;

    len = _printf("Let's try to printf a simple sentence.\n");
    sep();
    len2 = printf("Let's try to printf a simple sentence.\n");

    if (len != len2)
        return (1);

    return (0);
}
