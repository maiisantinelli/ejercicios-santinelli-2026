#include <stdio.h>

struct estudiante {
    char nombre[50];
    int edad;
    int anio;
};

int main() {

    struct estudiante alumnos[3];

    for (int i = 0; i < 3; i++) {

        printf("\nestudiante %d\n", i + 1);
        printf("ingrese el nombre: ");
        scanf("%s", alumnos[i].nombre);
        printf("ingrese la edad: ");
        scanf("%d", &alumnos[i].edad);
        printf("ingrese el año al que pertenece: ");
        scanf("%d", &alumnos[i].anio);
    }

    printf("\ndatos originales\n");

    for (int i = 0; i < 3; i++) {

        printf("\nalumno %d:\n", i + 1);
        printf("nombre: %s\n", alumnos[i].nombre);
        printf("edad: %d años\n", alumnos[i].edad);
        printf("año: %d\n", alumnos[i].anio);
    }

    printf("\nmodificar datos\n");
    for (int i = 0; i < 3; i++) {

        printf("\nmodificar alumno %d\n", i + 1);
        printf("ingrese el nuevo nombre: ");
        scanf("%s", alumnos[i].nombre);
        printf("ingrese la nueva edad: ");
        scanf("%d", &alumnos[i].edad);
        printf("ingrese el nuevo año: ");
        scanf("%d", &alumnos[i].anio);
    }

    printf("\ndatos modificados\n");
    for (int i = 0; i < 3; i++) {

        printf("\nalumno %d:\n", i + 1);
        printf("nombre: %s\n", alumnos[i].nombre);
        printf("edad: %d años\n", alumnos[i].edad);
        printf("año: %d\n", alumnos[i].anio);
    }

    return 0;
}
