/****************************************************************
 * lee_standard : Ejemplo de lectura desde la entrada standard. *
 * Uso:                                                         *
 *      lee_standard < archivo_entrada                          *
 *                                                              *
 * Autor: Hugo Araya Carrasco                                   *
 * Fecha: 05/05/2021                                            *
 *                                                              *
 * Proposito: Ejemplificar el uso de la entrada standard        *
 *                                                              *
 ****************************************************************/

#include <stdio.h> 

int main(){
    int numero,i,dato; 
    numero = 1000;
    for (i=0; i < numero; i++){
        scanf("%d", &dato);
        printf("leido : %d\n", dato);
    }
    return 0;
}