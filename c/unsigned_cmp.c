#include <stdio.h>

void unsigned_cmp (unsigned int a, unsigned int b)
{
	if (a>b)
		printf ("a>b\n");
	if (a==b)
		printf ("a==b\n");
	if (a<b)
		printf ("a<b\n");
};