#include <stdio.h>
int cantidad;
int suma = 0;
float promedio;

int main() {
    
    printf("ingrese el total de datos: ");
    scanf("%d", &cantidad);

    int vector[cantidad];
    for (int i = 0; i < cantidad; i++) {
        printf("ingrese el valor %d: ", i + 1);
        scanf("%d", &vector[i]);
    }

    for (int i = 0; i < cantidad; i++) {
        suma = suma + vector[i];
    }

    printf("la suma total de los valores es: %d\n", suma);

    promedio = (float)suma / cantidad;
    printf("el promedio es: %.2f\n", promedio);

    return 0;
}
