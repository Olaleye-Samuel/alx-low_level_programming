#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * first - to first prints a sentence before the main
 * next function is executed
 */
void first(void)
{
 printf("You're beat! and yet, you must allow,\n");
 printf("I bore my house upon my back!\n");
}
