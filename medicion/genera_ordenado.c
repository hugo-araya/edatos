/****************************************************************
 * genera_ordenado  :  Genera un archivo con datos enteros      *
 *                     de menor a mayor y redireccionando su    *
 *                     salida  hacia archivo de texto.          *
 * Uso:                                                         *
 *      genera_ordenado > nombre_archivo                        *
 *                                                              *
 * Autor: Hugo Araya Carrasco                                   *
 * Fecha: 05/05/2021                                            *
 *                                                              *
 * Proposito: Crear un archivo a partir de datos generados      *
 *            de menor a mayor.                                 *
 *                                                              *
 ****************************************************************/

#include <stdio.h>
#include <time.h>
int main(){
    int numero,i;
    numero=1000000;
    for (i=0; i< numero; i++){
        printf("%d\n",i);
    }
    return 0;
}
