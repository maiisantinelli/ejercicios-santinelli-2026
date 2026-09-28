#include <stdio.h>

int main() {
    int matriz[3][2];
    int x, y;
    for (x = 0; x < 3; x++) {
        for (y = 0; y < 2; y++) {
            printf("ingrese un dato: ");
            scanf("%d", &matriz[x][y]);
        }
    }
    return 0;
}
