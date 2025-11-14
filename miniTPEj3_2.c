#include <stdlib.h>
#include <stdio.h>
#include <pthread.h>
#include <time.h>

void* calculo_aritmetico(void* arg) {
    int contador = 0;
    while (contador < 2147483647) {
        contador++;
    }
    return NULL;
}

int main() {
    pthread_t hilos[5];
    struct timespec inicio, fin;
    double tiempo;

    clock_gettime(CLOCK_MONOTONIC, &inicio);
    
    for (int i = 0; i < 5; i++) {
        if (pthread_create(&hilos[i], NULL, calculo_aritmetico, NULL) != 0) {
            perror("Error al crear hilo");
            return 1;
        }
    }

    // Espera a que se terminen los hilos
    for (int i = 0; i < 5; i++) {
        pthread_join(hilos[i], NULL);
    }

    clock_gettime(CLOCK_MONOTONIC, &fin);

    tiempo = (fin.tv_sec - inicio.tv_sec) + (fin.tv_nsec - inicio.tv_nsec) / 1e9;
     printf("Tiempo total: %.2f segundos\n", tiempo);

    return 0;
}
