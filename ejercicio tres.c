int main() {
    
    printf("ingrese la cantidad de datos del vector: ");
    scanf("%d", &cantidad);

    for (int i = 0; i < cantidad; i++) {
        printf("ingrese el dato %d: ", i + 1);
        scanf("%d", &vector[i]);
    }
    
    while (seguir == 's') {
        printf("\n ingrese la posicion del dato que quiere consultar (1-%d): ", cantidad);
        scanf("%d", &posicion);

        if (posicion >= 1 && posicion <= cantidad) {
            printf("el dato en la posicion %d es: %d\n",
                   posicion, vector[posicion - 1]);
        }
        
        else {
            printf("posicion no permitida \n");
        }

        printf("¿quiere consultar otro dato? si lo desea ingrese s, de no ser así, ingrese n: ");
        scanf(" %c", &seguir);
    }

    printf("\nprograma finalizado \n");
    return 0;
}
