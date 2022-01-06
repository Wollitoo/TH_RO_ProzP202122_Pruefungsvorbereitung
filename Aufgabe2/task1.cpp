#include <stdio.h>
#include "task1.h"

int i, j;


int task1(void) {
	i = 3;
	i = f() + 1;

	printf("main:-> i: %i, j; %i\n", i,j);
	return 1;
}

int f(void) {
	int i = 3;
	for (j = 0; j < 3; j++) i = i+7;
	g(i);
	printf("f:-> i: %i, j; %i\n", i, j);
	return j + 1;
}

int g(int eingabe) {

	i *= eingabe;

	printf("g:-> i: %i, j; %i\n", i, j);

	return i;
}

