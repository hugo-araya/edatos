/****************************************************************
 * genera_o :  Genera un archivo con datos enteros ordenados    *
 *             y almacenandolos  directamente en un archivo     *
 *             texto.                                           *
 * Uso:                                                         *
 *      genera_o                                                *
 *                                                              *
 * Autor: Hugo Araya Carrasco                                   *
 * Fecha: 05/05/2021                                            *
 *                                                              *
 * Proposito: Crear un archivo con datos enteros ordenado de    *
 *            menor a mayor                                     *
 *                                                              *
 ****************************************************************/

#include <stdio.h>
#include <time.h>
int main(){
    FILE *ent;
    int numero,i;
    ent = fopen("datos_o.txt", "wt");
    numero=1000000;
    for (i=0; i< numero; i++){
        fprintf(ent,"%d\n",i);
    }
    fclose(ent);
    return 0;
}
