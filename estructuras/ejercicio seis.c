#include <stdio.h>

struct estudiante {
    char nombre[50];
    int edad;
    int año;
};

int main() {
    struct estudiante alumno;
    printf("ingrese el nombre del alumno: ");
    scanf("%s", alumno.nombre);
    printf("ingrese la edad: ");
    scanf("%d", &alumno.edad);
    printf("ingrese el año al que pertenece: ");
    scanf("%d", &alumno.año);
    printf("\n datos del alumno:\n");
    printf("nombre: %s\n", alumno.nombre);
    printf("edad: %d años\n", alumno.edad);
    printf("año: %d\n", alumno.año);
    printf("\n modificar datos:\n");
    printf("ingrese el nuevo nombre: ");
    scanf("%s", alumno.nombre);
    printf("ingrese la nueva edad: ");
    scanf("%d", &alumno.edad);
    printf("ingrese el nuevo año: ");
    scanf("%d", &alumno.año);
    printf("\n datos modificados:\n");
    printf("nombre: %s\n", alumno.nombre);
    printf("edad: %d años\n", alumno.edad);
    printf("año: %d\n", alumno.año);
    return 0;
}
}
