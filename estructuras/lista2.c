#include <stdio.h>
#include <stdlib.h>

typedef struct NODO {
    int clave;
    struct NODO *sig;
} LISTA;

int main(){
    LISTA *L;
    LISTA *p;
    int i;
    L = NULL; /* Crea una lista vacia */
    for (i = 4; i >= 1; i--){
        /* Reserva memoria para un nodo */
        p = (LISTA *) malloc(sizeof(LISTA));
        p->clave = i;
        p->sig = L;
        L = p;
    }
    return 0;
}