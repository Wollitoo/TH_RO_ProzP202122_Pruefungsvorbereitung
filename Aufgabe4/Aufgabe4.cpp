// Aufgabe4.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include "Aufgabe4.h"
#include <stdlib.h>
#include <stdio.h>


int main()
{
	Knoten_t * node = generiereKnoten();
	if (node = NULL) {
		printf("Der Knoten ist NULL. Evtl liegt ein Fehler vor.");
	}
	else {
		printf("Der Knoten ist ein richtiges Element.");
	}
}

Knoten_t* generiereKnoten() {
	Knoten_t* node;

	node = (Knoten_t*)malloc(sizeof(Knoten_t));

	if (node != NULL) {
		node->wert = 0;
		node->HoeheLinkerTeilbaum = 0;
		node->HoeheRechterTeilbaum = 0;
		node->rechts = NULL;
		node->links = NULL;
	}

	return node;
}