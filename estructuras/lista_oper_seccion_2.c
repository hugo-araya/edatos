#include <stdio.h>
#include <stdlib.h>

struct lista{
    int clave;
    struct lista *sig;
};

void recorrer_recursiva(struct lista *p);
void recorre(struct lista *p);
int largo(struct lista *p);
int esta_vacia(struct lista *p);
struct lista * elimina_inicio(struct lista *pclose);

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
    if (esta_vacia(p) == 0){
        printf("La lista esta vacia.\n");
    }
    else{
        recorre(p);
        printf("\n");
    }
    p = L;
    printf("Largo de la lista: %d\n", largo(p));
    if (esta_vacia(p) == 0){
        printf("No se puede eliminar de una lista vacia.\n");
    }
    else {
        L = elimina_inicio(p);        
    }

    p = L;
    printf("Largo de la lista: %d\n", largo(p));
    p = L;
    recorre(p);
    printf("\n");

    if (esta_vacia(p) == 0){
        printf("No se puede eliminar de una lista vacia.\n");
    }
    else {
        L = elimina_inicio(p);        
    }
    p = L;
    printf("Largo de la lista: %d\n", largo(p));
    p = L;
    recorre(p);
    printf("\n");

    if (esta_vacia(p) == 0){
        printf("No se puede eliminar de una lista vacia.\n");
    }
    else {
        L = elimina_inicio(p);
    }
    p = L;
    printf("Largo de la lista: %d\n", largo(p));
    p = L;
    recorre(p);
    printf("\n");
    if (esta_vacia(p) == 0){
        printf("No se puede eliminar de una lista vacia.\n");
    }
    else {
        L = elimina_inicio(p);        
    }
    p = L;
    printf("Largo de la lista: %d\n", largo(p));
    p = L;
    recorre(p);
    printf("\n");
    if (esta_vacia(p) == 0){
        printf("No se puede eliminar de una lista vacia.\n");
    }
    else {
        L = elimina_inicio(p);        
    }
    p = L;
    printf("Largo de la lista: %d\n", largo(p));
    p = L;
    recorre(p);
    printf("\n");
    return 0;
}

void recorrer_recursiva(struct lista *p){
    if (p != NULL) {
        printf("%d - ", p->clave);
        recorrer_recursiva(p->sig);
    }
}

void recorre(struct lista *p){
    while  (p != NULL){
        printf("%d - ", p->clave);
        p = p->sig;
    }
}

int largo(struct lista *p){
    int cont = 0;
    while (p != NULL){
        cont++;
        p = p->sig;
    }
    return cont;
}

int esta_vacia(struct lista *p){
    int ok = 1;
    // ok == 1 significa que no esta vacia
    if ( p == NULL){
        // retorna 0 para indicar que es verdadero, esta vacia
        ok = 0;
    }
    return ok;
}

struct lista * elimina_inicio(struct lista *p){
    struct lista *q = p;
    free(q);
    return p->sig;
}