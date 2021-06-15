#include <stdio.h>
#include <stdlib.h>

struct lista{
    int clave;
    struct lista *sig;
};

void mostrar (struct lista *L);
int esta_vacia(struct lista *L);
int contar_nodos(struct lista *L);

int main(){
    struct lista *L;
    struct lista *p;
    int i, nodos;
    L = NULL; /* Crea una lista vacia */
    for (i = 10; i >= 1 ; i--){
        /* Reserva memoria para un nodo */
        p = (struct lista *) malloc(sizeof(struct lista));
        p->clave = i;
        p->sig = L;
        L = p;
    }
    // Recorrer (significa visitar todos los nodos)
    p = L;
    mostrar(p);
    if (esta_vacia(p) == 0){
        printf("La lista ESTA vacia\n");
    }
    else {
        printf("La lista NO esta vacia\n");
    }
    nodos = contar_nodos(p);
    printf("Hay %d nodos en la lista\n", nodos);
    return 0;
}

void mostrar (struct lista *p){
    while (p != NULL) {
        printf("%d, ", p->clave);
        p = p->sig;
    }
    printf("\n");
}

int esta_vacia(struct lista *L){
    if (L == NULL) {
        return 0;
    }
    else{
        return 1;
    }
}

int contar_nodos(struct lista *p){
    int contador = 0;
    while (p != NULL) {
        contador = contador + 1;
        p = p->sig;
    }
    return contador;
}