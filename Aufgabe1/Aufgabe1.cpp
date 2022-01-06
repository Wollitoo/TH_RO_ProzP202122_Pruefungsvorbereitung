// Aufgabe1.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include "Task1.h";
#include <stdio.h>
#include <string.h>
void eingabe(int fp, struct s_punkt* fn);
void strich(void);
int suche(struct s_punkt *, int num, char *);

int main()
{
	struct s_punkt PointsOfInterest[20];
	eingabe(0, PointsOfInterest);
	strich();

	char bez[20] = "Nepomuk-Brunnen";

	printf("Gefunden 1 / !Gefunden 0: %i", suche(PointsOfInterest, 1, bez));

	return 0;
}

void eingabe(int fp, struct s_punkt *fn) {
	printf("Bitte geben Sie den Ortsnamen an.\n");
	scanf("%200s", fn[fp].Bezeichnung);
	printf("Bitte geben Sie die X-Kord ein.\n");
	scanf("%f", &fn[fp].x);
	printf("Bitte geben Sie die Y-Kord ein.\n");
	scanf("%f", &fn[fp].y);
}

int suche(struct s_punkt* fn, int num, char* bez) {
	for (int i = 0; i < num; i++) {
		if ((strcmp(fn[i].Bezeichnung, bez)) == 0) {
			return 1;
		}
	}

	return 0;
}


void strich(void) {
	for (int i = 0; i < 50; i++) {
		printf("-");
	}
	printf("\n");
}
