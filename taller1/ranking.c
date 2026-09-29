#include <stdio.h>
#include <string.h>
#include "ranking.h"

void inicializarRanking(Jugador ranking[]) {
    strcpy(ranking[0].iniciales, "---");
    ranking[0].puntaje = 0;

    strcpy(ranking[1].iniciales, "---");
    ranking[1].puntaje = 0;

    strcpy(ranking[2].iniciales, "---");
    ranking[2].puntaje = 0;
}

void mostrarRanking(const Jugador ranking[]) {
    printf("\n===== TOP 3 =====\n");

    for (int i = 0; i < MAX_JUGADORES; i++) {
        printf("%d. %s - %d puntos\n",
               i + 1,
               ranking[i].iniciales,
               ranking[i].puntaje);
    }
}

void actualizarRanking(Jugador ranking[], Jugador nuevoJugador) {
    if (nuevoJugador.puntaje <= ranking[MAX_JUGADORES - 1].puntaje) {
        return;
    }

    ranking[MAX_JUGADORES - 1] = nuevoJugador;

    for (int i = MAX_JUGADORES - 1; i > 0; i--) {
        if (ranking[i].puntaje > ranking[i - 1].puntaje) {
            Jugador temporal = ranking[i];
            ranking[i] = ranking[i - 1];
            ranking[i - 1] = temporal;
        }
    }
}
