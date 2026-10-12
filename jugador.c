#include <stdio.h>
#include "jugador.h"

void ingresarJugador(Jugador *jugador) {
    printf("Ingrese las 4iniciales del jugador: ");
    scanf("%3s", jugador->iniciales);

    printf("Ingrese el puntaje: ");
    scanf("%d", &jugador->puntaje);
}
