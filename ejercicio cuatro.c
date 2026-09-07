#include <stdio.h>
int cantidad;

void comparar(int vector1[], int vector2[], int cantidad) {
    for (int i = 0; i < cantidad; i++) {
        if (vector1[i] > vector2[i]) {
            printf("posicion %d: %d es mayor y pertenece al vector 1\n",
            i + 1, vector1[i]);
        }

        else if (vector2[i] > vector1[i]) {
            printf("posicion %d: %d es mayor y pertenece al vector 2\n",
            i + 1, vector2[i]);
        }

        else {
            printf("posicion %d: los valores son iguales\n", i + 1);
        }
    }
}

int main() {
    printf("ingrese la cantidad de valores para el vector: ");
    scanf("%d", &cantidad);

    int vector1[cantidad];
    int vector2[cantidad];

    printf("\ningrese los valores del vector 1:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("valor %d: ", i + 1);
        scanf("%d", &vector1[i]);
    }

    printf("\ningrese los valores del vector 2:\n");
    for (int i = 0; i < cantidad; i++) {
        printf("valor %d: ", i + 1);
        scanf("%d", &vector2[i]);
    }

    printf("\na continuacion, haremos la comparacion:\n");
    comparar(vector1, vector2, cantidad);
    return 0;
}
