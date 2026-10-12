#include <stdio.h>
#include "competidor.h"

static void limpiarBufferEntrada(void) {
    int c;

    while ((c = getchar()) != '\n' && c != EOF) {
    }
}

void ingresarCompetidor(Competidor *competidor) {
    int i;

    if (competidor == NULL) {
        return;
    }

    printf("Ingrese el ID del competidor: ");
    while (scanf("%d", &competidor->id) != 1) {
        printf("Entrada no valida. Intente de nuevo: ");
        limpiarBufferEntrada();
    }
    limpiarBufferEntrada();

    printf("Ingrese las iniciales o nombre corto: ");
    while (scanf("%19s", competidor->iniciales) != 1) {
        printf("Entrada no valida. Intente de nuevo: ");
        limpiarBufferEntrada();
    }
    limpiarBufferEntrada();

    do {
        printf("Cuantos puntajes desea registrar (1-%d): ", MAX_puntajes);
        while (scanf("%d", &competidor->cantidadpuntajes) != 1) {
            printf("Cantidad no valida. Intente de nuevo.\n");
            limpiarBufferEntrada();
            printf("Cuantos puntajes desea registrar (1-%d): ", MAX_puntajes);
        }

        if (competidor->cantidadpuntajes < 1 ||
            competidor->cantidadpuntajes > MAX_puntajes) {
            printf("Cantidad no valida. Intente de nuevo.\n");
        }
    } while (competidor->cantidadpuntajes < 1 ||
             competidor->cantidadpuntajes > MAX_puntajes);
    limpiarBufferEntrada();

    for (i = 0; i < competidor->cantidadpuntajes; i++) {
        printf("Ingrese el puntaje %d: ", i + 1);
        while (scanf("%d", &competidor->puntajes[i]) != 1) {
            printf("Puntaje no valido. Intente de nuevo.\n");
            limpiarBufferEntrada();
            printf("Ingrese el puntaje %d: ", i + 1);
        }
    }
    limpiarBufferEntrada();
}

void mostrarCompetidor(const Competidor *competidor) {
    int i;

    if (competidor == NULL) {
        return;
    }

    printf("\nID: %d\n", competidor->id);
    printf("Competidor: %s\n", competidor->iniciales);
    printf("Puntajes: ");

    for (i = 0; i < competidor->cantidadpuntajes; i++) {
        printf("%d ", competidor->puntajes[i]);
    }

    printf("\n");
}
