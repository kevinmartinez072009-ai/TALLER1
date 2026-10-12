#include <stdio.h>
#include "competidor.h"
#include "ordenamiento.h"

// Funcion main para ejecutar los métodos de ordenamientos base #CP
// Funcion main para ejecutar los métodos de ordenamientos base #NoBorrar

int main(void) {
    Competidor competidor;
    int opcion;
    int ascendente;

    ingresarCompetidor(&competidor);

    do {
        printf("\n===== MENU DE ORDENAMIENTO =====\n");
        printf("1. Bubble Sort\n");
        printf("2. Selection Sort\n");
        printf("3. Insertion Sort\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        if (opcion >= 1 && opcion <= 3) {
            printf("\n1. Menor a mayor\n");
            printf("0. Mayor a menor\n");
            printf("Seleccione el sentido: ");
            scanf("%d", &ascendente);

            if (ascendente != 0 && ascendente != 1) {
                printf("Sentido no valido.\n");
                continue;
            }

            printf("\nAntes del ordenamiento:\n");
            mostrarCompetidor(&competidor);

            switch (opcion) {
                case 1:
                    bubbleSort(competidor.puntajes,
                               competidor.cantidadpuntajes,
                               ascendente);
                    break;

                case 2:
                    selectionSort(competidor.puntajes,
                                  competidor.cantidadpuntajes,
                                  ascendente);
                    break;

                case 3:
                    insertionSort(competidor.puntajes,
                                  competidor.cantidadpuntajes,
                                  ascendente);
                    break;
            }

            printf("\nDespues del ordenamiento:\n");
            mostrarCompetidor(&competidor);

        } else if (opcion != 4) {
            printf("Opcion no valida.\n");
        }

    } while (opcion != 4);

    printf("Programa finalizado.\n");

    return 0;
}
