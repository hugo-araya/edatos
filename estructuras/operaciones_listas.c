#include <stdio.h>
#include <stdlib.h>

typedef struct NODO {
    int clave;
    struct NODO *sig;
} LISTA;

void mostrar (LISTA *L);
LISTA elimina_inicio(LISTA *L);
int contar_nodos(LISTA *L);

int main(){
    LISTA *L;
    LISTA *p;
    int i, suma;
    L = NULL; /* Crea una lista vacia */
    for (i = 4; i >= 1; i--){
        /* Reserva memoria para un nodo */
        p = (LISTA *) malloc(sizeof(LISTA));
        p->clave = i;
        p->sig = L;
        L = p;
    }
    mostrar(L);
    printf("Son: %d\n", contar_nodos(L));
    L = elimina_inicio(L);
    mostrar(L);
    printf("Son: %d\n", contar_nodos(L));
    return 0;
}

void mostrar (LISTA *p){
    while (p != NULL) {
        printf("%d, ", p->clave);
        p = p->sig;
    }
    printf("\n");
}

LISTA elimina_inicio(LISTA *L){
    LISTA *p;
    p = L;
    free(p);
    return L->sig;
}

int contar_nodos(LISTA *p){
    int contador = 0;
    while (p != NULL) {
        contador = contador + 1;
        p = p->sig;
    }
    return contador;
}