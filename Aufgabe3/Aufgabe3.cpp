// Aufgabe3.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include <string.h>
#include <stdio.h>

int StringUntersuchen(char*);

int main()
{
	char txt[20] = "0a1b7cd99";

	printf("%i", strlen(txt));

	printf("Anzahl der Zahlen im Text: %i", StringUntersuchen(txt));
}

int StringUntersuchen(char* txt) {
	int count = 0;



	for (int i = 0; i < strlen(txt); i++) {
		if (txt[i] <= '9' && txt[i] >= '0'){
			count++;
		}
	}


	return count;
}
