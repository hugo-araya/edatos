#include<stdio.h>
#include<stdlib.h>

struct tpila{
    int dato;
   struct tpila *sig;
};

void crear(struct tpila **pila);
int vacia(struct tpila *pila);
void push(struct tpila *pila, int elem);
void pop(struct tpila *pila, int *elem);

int main(void){
    struct tpila *pila;
    int elem;
    crear(&pila);
    push(pila, 1);
    push(pila, 102);
    push(pila, 300);
    pop(pila, &elem);
    printf("Dato eliminando: %d\n", elem);
    pop(pila, &elem);
    printf("Dato eliminando: %d\n", elem);
    push(pila, 527);
    push(pila, 123);
    pop(pila, &elem);
    printf("Dato eliminando: %d\n", elem);

}

void crear(struct tpila **pila){
    *pila = (struct tpila *) malloc(sizeof(struct tpila));
    (*pila)->sig = NULL;
}

int vacia(struct tpila *pila){
    return (pila->sig == NULL);
}

void push(struct tpila *pila, int elem){
    struct tpila *nuevo;
    nuevo = (struct tpila *) malloc(sizeof(struct tpila));
    nuevo->dato = elem;
    nuevo->sig = pila->sig;
    pila->sig = nuevo;
}

void pop(struct tpila *pila, int *elem){
    struct tpila *aux;
    aux = pila->sig;
    *elem = aux->dato;
    pila->sig = aux->sig;
    free(aux);
}