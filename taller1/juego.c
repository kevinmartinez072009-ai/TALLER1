#include <stdio.h>
#include "jugador.h"
#include "ranking.h"

int main() {
    Jugador ranking[MAX_JUGADORES];
    Jugador nuevoJugador;
    int opcion;

    inicializarRanking(ranking);

    do {
        printf("\n===== RANKING GTA =====\n");
        printf("1. Registrar jugador\n");
        printf("2. Mostrar Top 3\n");
        printf("3. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ingresarJugador(&nuevoJugador);
                actualizarRanking(ranking, nuevoJugador);
                printf("\nJugador procesado correctamente.\n");
                break;

            case 2:
                mostrarRanking(ranking);
                break;

            case 3:
                printf("\nPrograma finalizado.\n");
                break;

            default:
                printf("\nOpcion invalida.\n");
        }

    } while (opcion != 3);

    return 0;
}
