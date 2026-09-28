#include <stdio.h>

int main() {
    int matriz[4][4];
    int x, y;
    int resultado_and, resultado_or;

    matriz[0][0] = 0;
    matriz[0][1] = 0;
    resultado_and = 0 && 0;
    resultado_or = 0 || 0;
    matriz[0][2] = resultado_and;
    matriz[0][3] = resultado_or;

    matriz[1][0] = 0;
    matriz[1][1] = 1;
    resultado_and = 0 && 1;
    resultado_or = 0 || 1;
    matriz[1][2] = resultado_and;
    matriz[1][3] = resultado_or;

    matriz[2][0] = 1;
    matriz[2][1] = 0;
    resultado_and = 1 && 0;
    resultado_or = 1 || 0;
    matriz[2][2] = resultado_and;
    matriz[2][3] = resultado_or;

    matriz[3][0] = 1;
    matriz[3][1] = 1;
    resultado_and = 1 && 1;
    resultado_or = 1 || 1;
    matriz[3][2] = resultado_and;
    matriz[3][3] = resultado_or;

    printf("a b and or\n");

    for (x = 0; x < 4; x++) {
        for (y = 0; y < 4; y++) {
            printf("%d ", matriz[x][y]);
        }
        printf("\n");
    }

    return 0;
}
