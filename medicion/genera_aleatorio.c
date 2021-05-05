/****************************************************************
 * genera_aleatorio :  Genera un archivo con datos enteros      *
 *                     aleatorios y redireccionando su salida   *
 *                     hacia archivo de texto.                  *
 * Uso:                                                         *
 *      genera_aleatorio > nombre_archivo                       *
 *                                                              *
 * Autor: Hugo Araya Carrasco                                   *
 * Fecha: 05/05/2021                                            *
 *                                                              *
 * Proposito: Crear un archivo a partir de datos generados      *
 *            aleatoriamente.                                   *
 *                                                              *
 ****************************************************************/

#include <stdio.h> 
#include <time.h> 
#include <stdlib.h>

int main(){
    int numero,i; 
    srand(time(0));
    numero = 1000000;
    // printf("%d\n",numero); 
    for (i=0; i< numero; i++){
        printf("%d\n",rand()%100000); 
    }
    return 0;
}