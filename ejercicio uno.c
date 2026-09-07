#include <stdio.h>
int vector [5], a, b;

int main()
{
    for(a=0; a<5; a++){
        printf("indique el número que desea guardar");
        scanf("%d", &vector[a]);
    }
    
    for(b=0; b<5; b++){
        printf("\n se ingresó el número: %d", vector[b]);
    }
    
    return 0;
}
