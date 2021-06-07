#include <stdio.h>

int main(){
    FILE *entrada;
    int dato;
    entrada = fopen("datos_a.txt", "r");
    if (entrada == NULL){
        printf("Error: Archivo NO existe.\n");
        printf("       Revise el directorio.\n");
        return -1;
    }
    else{
        fscanf(entrada,"%d", &dato);
        printf("Dato leido: %d\n", dato);
    }
    return 0;
}