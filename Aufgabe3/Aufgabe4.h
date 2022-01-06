#pragma once
typedef struct Knoten_s {
	int wert;
	int HoeheLinkerTeilbaum;
	int HoeheRechterTeilbaum;
	struct Knoten_s* links;
	struct Knoten_s *rechts;
} Knoten_t;

Knoten_t generiereKnoten(void);
