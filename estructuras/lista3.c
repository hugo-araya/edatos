#include <stdio.h>
#include <stdlib.h>

struct lista{
    int clave;
    struct lista *sig;
};

int main(){
    struct lista *L;
    struct lista *p;
    int i, suma, dato;
    L = NULL; /* Crea una lista vacia */
    for (i = 4; i >= 1; i--){
        /* Reserva memoria para un nodo */
        p = (struct lista *) malloc(sizeof(struct lista));
        if (L == NULL){
            L = p;
        }
        printf("Ingrese valor: ");
        scanf("%d", &dato);
        p->clave = dato;
        p->sig = NULL;
        L->sig = p;
        //L = p;
    }
    p = L;
    suma = 0;
    while (p != NULL) {
        printf("%d, ", p->clave);
        suma = suma + p->clave;
        p = p->sig;
    }
    printf("\nSuma: %d\n", suma);
    return 0;
}