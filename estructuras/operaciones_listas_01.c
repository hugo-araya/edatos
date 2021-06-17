#include <stdio.h>
#include <stdlib.h>

struct lista {
    int clave;
    struct lista *sig;
};

void mostrar (struct lista *L);
struct lista * elimina_inicio(struct lista *L);
int contar_nodos(struct lista *L);

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
    mostrar(L);
    printf("Son: %d\n", contar_nodos(L));
    L = elimina_inicio(L);
    mostrar(L);
    printf("Son: %d\n", contar_nodos(L));
    L = elimina_inicio(L);
    mostrar(L);
    printf("Son: %d\n", contar_nodos(L));
    L = elimina_inicio(L);
    mostrar(L);
    printf("Son: %d\n", contar_nodos(L));
    L = elimina_inicio(L);
    mostrar(L);
    printf("Son: %d\n", contar_nodos(L));
    L = elimina_inicio(L);
    mostrar(L);
    printf("Son: %d\n", contar_nodos(L));
    return 0;
}

void mostrar (struct lista *p){
    while (p != NULL) {
        printf("%d, ", p->clave);
        p = p->sig;
    }
    printf("\n");
}

struct lista * elimina_inicio(struct lista *L){
    struct lista *p = L;
    free(p);
    return L->sig;
}

int contar_nodos(struct lista *p){
    int contador = 0;
    while (p != NULL) {
        contador = contador + 1;
        p = p->sig;
    }
    return contador;
}