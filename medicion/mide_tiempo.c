/****************************************************************
 * mide_tiempo    :    Progra que sirve de plantilla para       *
 *                     la medicion de tiempo de ejecucion       *
 * Uso:                                                         *
 *      mide_tiempo                                             *
 *                                                              *
 * Autor: Hugo Araya Carrasco                                   *
 * Fecha: 05/05/2021                                            *
 *                                                              *
 * Proposito: Crear un archivo a partir de datos generados      *
 *            de mayor a menor.                                 *
 *                                                              *
 ****************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void lee_datos(int *array, int n);
void muestra_datos(int *array, int n);

int main(){
    time_t t_1,t_2;
    int array[1000000], N, i, j, aux;
    N = 100000;
    lee_datos(array, N);
    //muestra_datos(array, N);

    t_1=time(NULL);
    // Bloque a medir el tiempo
    for(i=0;i<N-1;i++){   
	    for(j=0;j<N-i-1;j++){ 
	        if(array[j+1]<array[j]){       
		    aux=array[j+1];       
		    array[j+1]=array[j];  
		    array[j]=aux;
	        }   
	    } 
    } 
    t_2=time(NULL);

    printf("\n\nEstadistica del programa: Ordenamiento .... ");   
    printf("\n\nTiempo 1 = %ld",t_1);
    printf("\n\nTiempo 2 = %ld",t_2);
    printf("\n\nTiempo Total = %lf\n",difftime(t_2,t_1));
    return 0;
}

void lee_datos(int *array, int n){
    int i;
    int dato;
    for (i = 0; i < n; i++){
        scanf("%d", &dato);
        array[i] = dato;
    }
}

void muestra_datos(int *array, int n){
    int i;
    for (i= 0; i <n; i++){
        printf("%d\n", array[i]);
    }
}