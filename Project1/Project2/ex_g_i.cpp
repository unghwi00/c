#include <stdio.h>
int g_i = 0;

extern int g_i;

int function1()
{
	g_i += 2;
	printf("%d", g_i);
}
