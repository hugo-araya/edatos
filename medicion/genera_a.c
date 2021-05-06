/****************************************************************
 * genera_a :  Genera un archivo con datos enteros aleatorios   *
 *             y almacenandolo directamente en un archivo de    *
 *             texto.                                           *
 * Uso:                                                         *
 *      genera_a                                                *
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
    FILE *ent;
    int numero,i; 
    srand(time(0));
    ent = fopen("datos_a1.txt", "wt");
    numero = 1000000; 
    for (i=0; i< numero; i++){
        fprintf(ent,"%d\n",rand()%100000); 
    }
    fclose(ent);
    return 0;
}