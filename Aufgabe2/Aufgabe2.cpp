// Aufgabe2.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//


#include <stdio.h>
#include "task1.h";

int task2(void);
void task3(void);
void calculate(double, int); //task 4

void strich(void);

int main()
{
	task1();
	strich();
	task2();
	strich();
	task3();
	strich();
	int n = 5;// in der Angabe global
	int x = 5;// in der Angabe global

	calculate(n/2+0.1, x +0.5);

	return 0;
}

int task2(void) {
	int a = 10, b = 20, c = 30;
	a -= 2;
	c += --b * 2 + a++ * 3;

	printf("a: %i, b: %i, c: %i\n", a, b,c);

	return 0;
}

void task3(void) {
	float x, y;
	x = 2 / 5.0;
	y = 2 / 5;

	printf("x: %4.4f, y: %4.4f\n", x,y); 
}

void calculate(double a, int b) { //task 4
	printf("a: %4.4f, b: %i", a,b); // f steht für floating point. ein d wäre einfach ein unsigend int
}

void strich(void) {
	for (int i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");
}
