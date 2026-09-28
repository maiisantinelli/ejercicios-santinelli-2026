#include <stdio.h>

int main() {
    int matriz[3][2][2];
    int x, y, z;

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 2; y++) {
            for (z = 0; z < 2; z++) {
                printf("ingrese un dato: ");
                scanf("%d", &matriz[x][y][z]);
            }
        }
    }

    return 0;
}
