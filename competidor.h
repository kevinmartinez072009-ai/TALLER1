#ifndef COMPETIDOR_H
#define COMPETIDOR_H

#define MAX_puntajes 100

typedef struct {
    int id;
    char iniciales[20];
    int puntajes[MAX_puntajes];
    int cantidadpuntajes;
} Competidor;

void ingresarCompetidor(Competidor *competidor);
void mostrarCompetidor(const Competidor *competidor);

#endif
