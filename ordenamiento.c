#include "ordenamiento.h"

void bubbleSort(int *puntajes, int cantidad, int ascendente) {
    int i, j, temporal;

    for (i = 0; i < cantidad - 1; i++) {
        for (j = 0; j < cantidad - 1 - i; j++) {

            if ((ascendente && puntajes[j] > puntajes[j + 1]) ||
                (!ascendente && puntajes[j] < puntajes[j + 1])) {

                temporal = puntajes[j];
                puntajes[j] = puntajes[j + 1];
                puntajes[j + 1] = temporal;
            }
        }
    }
}

void selectionSort(int *puntajes, int cantidad, int ascendente) {
    int i, j, posicion, temporal;

    for (i = 0; i < cantidad - 1; i++) {
        posicion = i;

        for (j = i + 1; j < cantidad; j++) {
            if ((ascendente &&
                 puntajes[j] < puntajes[posicion]) ||
                (!ascendente &&
                 puntajes[j] > puntajes[posicion])) {

                posicion = j;
            }
        }

        temporal = puntajes[i];
        puntajes[i] = puntajes[posicion];
        puntajes[posicion] = temporal;
    }
}

void insertionSort(int *puntajes, int cantidad, int ascendente) {
    int i, j, actual;

    for (i = 1; i < cantidad; i++) {
        actual = puntajes[i];
        j = i - 1;

        while (j >= 0 &&
               ((ascendente && puntajes[j] > actual) ||
                (!ascendente && puntajes[j] < actual))) {

            puntajes[j + 1] = puntajes[j];
            j--;
        }

        puntajes[j + 1] = actual;
    }
}
