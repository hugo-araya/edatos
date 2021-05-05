/****************************************************************
 * genera_i :  Genera un archivo con datos enteros ordenados    *
 *             de manera inversa y almacenandolo directamente   *
 *             en un archivo de texto.                          *
 * Uso:                                                         *
 *      genera_i                                                *
 *                                                              *
 * Autor: Hugo Araya Carrasco                                   *
 * Fecha: 05/05/2021                                            *
 *                                                              *
 * Proposito: Crear un archivo a partir de datos generados      *
 *            de mayor a menor.                                 *
 *                                                              *
 ****************************************************************/

#include <stdio.h>
#include <time.h>
int main(){
    FILE *ent;
    int numero,i;
    ent = fopen("datos_i.txt", "wt");
    numero=1000000;
    for (i=numero; i > 0; i--){
        fprintf(ent, "%d\n",i);
    }
    fclose(ent);
    return 0;
}
