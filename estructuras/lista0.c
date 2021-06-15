#include <stdio.h>
#include <stdlib.h>

struct lista{
    int clave;
    struct lista *sig;
};

int main(){
    struct lista *L;
    struct lista *p;
    int i, suma;
    L = NULL; /* Crea una lista vacia */
    for (i = 4; i >= 1; i--){
        /* Reserva memoria para un nodo */
        p = (struct lista *) malloc(sizeof(struct lista));
        p->clave = i;
        p->sig = L;
        L = p;
    }

    p = L;
    while  (p != NULL){
        printf("%d - ", p->clave);
        p = p->sig;
    }
    printf("\n");
    return 0;
}
