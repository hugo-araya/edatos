/****************************************************************
 * genera_inverso   :  Genera un archivo con datos enteros      *
 *                     de mayor a menor y redireccionando su    *
 *                     salida  hacia archivo de texto.          *
 * Uso:                                                         *
 *      genera_inverso > nombre_archivo                         *
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
    int numero,i;
    numero=1000000;
    for (i=numero; i>0; i--){
        printf("%d\n",i);
    }
    return 0;
}
