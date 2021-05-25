/****************************************************************
 * mide_bubble_todo : mide el tiempo de ejecucion del algoritmo *
 *                    ordenamiento "bubble sort" o "burbuja"    *
 * Uso:                                                         *
 *      mide_bubble_todo                                        *
 *      El programa pide desde donde y hasta donde considerar   *
 *      la cantidad de datos y el incremento                    *
 *                                                              *
 *      Genera un archivo de salida que contiene el resumen     *
 *      de todas las mediciones                                 *
 *                                                              *
 * Autor: Hugo Araya Carrasco                                   *
 * Fecha: 10/05/2021                                            *
 *                                                              *
 *                                                              *
 ****************************************************************/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define LIMITE 500000

void lee_datos(char nombre[], int *array, int n);
void muestra_datos(int *array, int n);
void burbuja(int *array, int n);
void shell(int *array, int n);
void swap(int* a, int* b);
int particion (int *array, int bajo, int alto);
void quickSort(int *array, int bajo, int alto);

int main(){
    time_t t_1, t_2;
    int *a_inv;
    a_inv = malloc(LIMITE*sizeof(int));
    int *a_ord;
    a_ord = malloc(LIMITE*sizeof(int));
    int *a_ale;
    a_ale = malloc(LIMITE*sizeof(int));
 //   int a_inv[LIMITE], a_ord[LIMITE],a_ale[LIMITE];
    int desde, hasta, incremento, N;
    int resul_inv, resul_ord, resul_ale;
    FILE *sal;
    sal = fopen("salida_S2_quick.csv", "wt");
    fclose(sal);
    printf("Desde: ");
    scanf("%d", &desde);
    printf("Hasta: ");
    scanf("%d", &hasta);
    printf("Incremento: ");
    scanf("%d", &incremento);
    lee_datos("datos_inversos.txt", a_inv, LIMITE);
    lee_datos("datos_ordenados.txt", a_ord, LIMITE);
    lee_datos("datos_aleatorios.txt", a_ale, LIMITE);
    for (N = desde; N <= hasta; N = N + incremento){
        printf("Procesando N = %d\n", N);
        t_1 = time(NULL);
        quickSort(a_inv, 0, N-1);
        t_2 = time(NULL);
        resul_inv = (int)difftime(t_2,t_1);
        // muestra_datos(a_inv, N);

        t_1 = time(NULL);
        quickSort(a_ord, 0, N-1);
        t_2 = time(NULL);
        resul_ord = (int)difftime(t_2,t_1);
        // muestra_datos(a_ord, N);

        t_1 = time(NULL);
        quickSort(a_ale, 0, N-1);
        t_2 = time(NULL);
        resul_ale = (int)difftime(t_2,t_1);
        // muestra_datos(a_ale, N);

        sal = fopen("salida_S2_quick.csv", "at");
        fprintf(sal,"%d,%d,%d,%d\n", N, resul_inv, resul_ord, resul_ale);
        fclose(sal);
     }
    return 0;
}

void lee_datos(char nombre[], int *array, int n){
    FILE *ent;
    int i;
    int dato;
    printf("Procesando: %s\n", nombre);
    ent = fopen(nombre,"r");
    for (i = 0; i < n; i++){
        fscanf(ent, "%d", &dato);
        array[i] = dato;
    }
    fclose(ent);
}

void muestra_datos(int *array, int n){
    int i;
    for (i= 0; i <n; i++){
        printf("%d\n", array[i]);
    }
    printf("----------\n");
}

void burbuja(int *array, int n){
    int i, j, aux;
    for(i = 0;i < n-1; i++){
	    for(j = 0; j < n-i-1; j++){
	        if(array[j+1] < array[j]){
		        aux = array[j+1];
		        array[j+1] = array[j];
		        array[j] = aux;
	        }
	    }
    }
}

void shell(int *array, int n){
    int salto, cambios, i, aux;
    for(salto = n/2; salto != 0; salto = salto/2){
	    cambios = 1;
	    while (cambios != 0){
		    cambios = 0;
		    for(i = salto; i < n; i++){
			    if(array[i - salto] > array[i]){
				    aux = array[i];
				    array[i] = array[i - salto];
				    array[i - salto] = aux;
				    cambios++;
		    	}
            }
	    }
    }
}

void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int particion (int *arr, int bajo, int alto){
    int pivote, i, j;
    pivote = arr[alto];
    i = (bajo - 1);

    for (j = bajo; j <= alto- 1; j++){
        if (arr[j] <= pivote){
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[alto]);
    return (i + 1);
}

void quickSort(int *arr, int bajo, int alto){
	int pi;
    if (bajo < alto){
        pi = particion(arr, bajo, alto);
        quickSort(arr, bajo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}