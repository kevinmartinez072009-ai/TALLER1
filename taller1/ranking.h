#ifndef RANKING_H
#define RANKING_H

#include "jugador.h"

#define MAX_JUGADORES 3

void inicializarRanking(Jugador ranking[]);
void mostrarRanking(const Jugador ranking[]);
void actualizarRanking(Jugador ranking[], Jugador nuevoJugador);

#endif
