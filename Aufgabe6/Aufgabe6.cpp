// Aufgabe6.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <stdio.h>
void baum(int n);
int fkt(unsigned int n, unsigned int m);
void strich(void);


int main()
{
	baum(3);
	strich();
	printf("Fakultätsergebnis: %i",fkt(3, 9));
}

void baum(int n) {
	if (n > 1) {
		printf(" % d\n", n);
		baum(n - 1);
		baum(n - 1);
		printf(" % d\n", n);
	}
}

int fkt(unsigned int n, unsigned int m) {
	if (m == 0) {
		return 0;
	}
	return n + fkt(n, m - 1);
}





void strich(void) {
	for (int i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");
}
