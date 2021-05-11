#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int lee_datos(int *array, int n);
void muestra_datos(int *array, int n);

int main(){
    time_t t_1,t_2;
    int array[1000000], N, i, j, aux, st;

    FILE *sal;
    sal = fopen("salida.txt", "wt");
    st = lee_datos(array, 100000);
    if (st == -1){
        printf ("Verifique el nombre del archivo, por favor\n");
        return -1;
    }
    for (N = 20000; N <= 70000; N = N + 10000){

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
        printf("N: %d\n", N);
        fprintf(sal,"\nEstadistica del programa: Ordenamiento Bubble Sort ");   
        fprintf(sal,"\nCantidad de datos = %d",N);
        fprintf(sal,"\nTiempo 1 = %ld",t_1);
        fprintf(sal,"\nTiempo 2 = %ld",t_2);
        fprintf(sal,"\nTiempo Total = %lf\n",difftime(t_2,t_1));
    }
    fclose(sal);
    return 0;
}

int lee_datos(int *array, int n){
    FILE *ent;
    int i, st;
    int dato;
    ent = fopen("datos_ordenados.txt","r");
    if (ent == NULL){
        printf("No existe archivo.\n");
        st = -1;
    }
    else{
        for (i = 0; i < n; i++){
            fscanf(ent, "%d", &dato);
            array[i] = dato;
        }
        fclose(ent);
        st = 0;
    }
    return st;
}

void muestra_datos(int *array, int n){
    int i;
    for (i= 0; i <n; i++){
        printf("%d\n", array[i]);
    }
}