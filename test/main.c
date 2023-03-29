#include "main.h"


/**
 * main - Run tests
 * 
 * Returns: always 0
 */
int main(void)
{
    int (*tests[])(void) = { test1, test2, test3 };
    int passed = 0;
    int count;

    for (count = 0; count < 3; count++)
    {
        if ((*tests[count])() == 0)
        {
            passed++;
            printf("\nPassed\n");
        }
        else
        {
            printf("\nFailed\n");
        }
        printf("\n");
    }

    printf("\nPassed %d tests\n", passed);

    return (0);
}
