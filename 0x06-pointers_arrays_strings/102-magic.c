#include <stdio.h>
#include <unistd.h>
/**
 * main - prints exactly ine of code here...
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
/*
 * write your line of code here...
 * Remember:
 * - you are not allowed to use a in your new line of code
 * - you are not allowed to modify p
 * - you can only write one statement
 * - you are not allowed to use ,
 * - you are not allowed to code anything else than the line of expected line
 * - your code should be written at line 19, before the ;
 * - do not remove anything from the initial code
 * - and don’t change anything but the line of code you are adding
 * - you are allowed to use the standard library
 */
	*(p + 5) = 98;
	/* ...so that this prints 98\n */
	printf("a[2] = %d\n", a[2]);
	return (0);
}
