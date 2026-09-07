#include <stdio.h>
#define xd 10

int sumar(int vector[], int tam);

int main() {
    
    int vector[xd];
    int hola;
    int suma;
    float promedio;

    printf("ingrese 10 valores:\n");

    for (int i = 0; i < xd; i++) {
        printf("valor %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (int i = 0; i < xd - 1; i++) {
        for (int j = i + 1; j < xd; j++) {
            if (vector[i] < vector[j]) {
                hola = vector[i];
                vector[i] = vector[j];
                vector[j] = hola;
            }
        }
    }

    printf("\nvector ordenado de mayor a menor:\n");

    for (int i = 0; i < xd; i++) {
        printf("%d ", vector[i]);
    }

    suma = sumar(vector, xd);
    promedio = (float)suma / xd;

    printf("\n\nsuma de los elementos: %d", suma);
    printf("\npromedio: %.2f\n", promedio);

    return 0;
}

int sumar(int vector[], int tam) {
    int suma = 0;

    for (int i = 0; i < tam; i++) {
        suma += vector[i];
    }

    return suma;
}
