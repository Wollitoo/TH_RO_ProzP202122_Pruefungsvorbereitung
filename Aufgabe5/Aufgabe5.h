#pragma once
#define STRLEN 128
typedef struct s_knoten
{
	int nummer;
	char name[STRLEN];
	double dauer;
	struct s_knoten* next;
}t_knoten;
typedef struct
{
	struct s_knoten* ersterKnoten;
	struct s_knoten* letzterKnoten;
	int anzahlKnoten;
}t_listenkopf;

double dauerBerechnen(t_listenkopf*li, char*pn);
int istListeSortiert(t_listenkopf* li);
 
t_listenkopf* generiereTestdaten(void);
t_knoten* generiereKnoten(char*, int);