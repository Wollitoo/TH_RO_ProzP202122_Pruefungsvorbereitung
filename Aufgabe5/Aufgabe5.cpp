// Aufgabe5.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <stdlib.h>
#include "Aufgabe5.h"
#include <string.h>
#include <time.h>
#include <stdio.h>

int main()
{

	char pn1[STRLEN] = "Gaertnern";
	char pn2[STRLEN] = "DACH12";
	char pn3[STRLEN] = "TURBOTEX";

	t_listenkopf* li = generiereTestdaten();
	if (li != NULL) {
		printf("Ist die Liste sortiert? 0/1: %i\n", istListeSortiert(li));
		printf("Wie viele Stunden hat das Projekt Gaertnern? %8.2f\n", dauerBerechnen(li, pn1));

		printf("Wie viele Stunden hat das Projekt DACH12? %8.2f\n", dauerBerechnen(li, pn2));

		printf("Wie viele Stunden hat das Projekt TURBOTEX? %8.2f \n", dauerBerechnen(li, pn3));

	}
}

int istListeSortiert(t_listenkopf* li) {
	double max = 0.0;

	if (li->anzahlKnoten > 0) {
		t_knoten* tmp = li->ersterKnoten;
		while (tmp != NULL) {
			if (tmp->dauer < max) {
				return 0; // nicht sortiert 
			}
			max = tmp->dauer;
			tmp = tmp->next;
		}
	}
	else {
		return 0; // Keine Element, also sortiert
	}
	return 1; // alles richtig sortiert
}


double dauerBerechnen(t_listenkopf* li, char* pn) {
	double dauer = 0.0;

	if (li->anzahlKnoten > 0) {
		t_knoten* tmp = li->ersterKnoten;

		while (tmp != NULL) {
			if (strcmp(tmp->name, pn) == 0) { //0 bedeutet match
				dauer += tmp->dauer;
			}
			tmp = tmp->next;
		}
	}

	return dauer;
}

t_listenkopf*  generiereTestdaten() {
	t_listenkopf* li = (t_listenkopf*)malloc(sizeof(t_listenkopf));
	
	if (li!= NULL) {
		li->anzahlKnoten = 0;
		li->ersterKnoten = NULL;
		li->letzterKnoten = NULL;
		
		char pn1[STRLEN] = "Gaertnern";
		char pn2[STRLEN] = "DACH12";
		char pn3[STRLEN] = "TURBOTEX";

		for (int i = 0; i < 5; i++) {
			t_knoten* tmp = generiereKnoten(pn1, li->anzahlKnoten);
			if (li->anzahlKnoten == 0) {
				li->ersterKnoten = tmp;
				li->letzterKnoten = tmp;
			}
			else {
				li->letzterKnoten->next = tmp;
				li->letzterKnoten = tmp;
			}
			li->anzahlKnoten++;
		}
		for (int i = 0; i < 5; i++) {
			t_knoten* tmp = generiereKnoten(pn2, li->anzahlKnoten);
			if (li->anzahlKnoten == 0) {
				li->ersterKnoten = tmp;
				li->letzterKnoten = tmp;
			}
			else {
				li->letzterKnoten->next = tmp;
				li->letzterKnoten = tmp;
			}
			li->anzahlKnoten++;
		}
		for (int i = 0; i < 5; i++) {
			t_knoten* tmp = generiereKnoten(pn3, li->anzahlKnoten);
			if (li->anzahlKnoten == 0) {
				li->ersterKnoten = tmp;
				li->letzterKnoten = tmp;
			}
			else {
				li->letzterKnoten->next = tmp;
				li->letzterKnoten = tmp;
			}
			li->anzahlKnoten++;
		}
	}

	return li;
}

t_knoten* generiereKnoten(char* pn, int num) {
	time_t t;
	srand((unsigned)time(&t));
	t_knoten* node = (t_knoten*)malloc(sizeof(t_knoten));
	if (node != NULL) {
		node->dauer = rand() % 100;
		strcpy(node->name, pn);
		node->nummer = num;
		node->next = NULL;
	}

	return node;
}
