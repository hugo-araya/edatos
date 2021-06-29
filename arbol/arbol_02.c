#include <stdio.h>
#include <stdlib.h>

struct arbol{
    char elem;
    struct arbol *izq;
    struct arbol *der;
};

// Variables Globales
int numNodos = 0;
int numNodos1 = 0;

void visitar(struct arbol *a);
void preorden(struct arbol *a);
void inorden(struct arbol *a);
void postorden(struct arbol *a);
int altura(struct arbol *a);
int max(int num1, int num2);
int altura_2(struct arbol *a);
int contarHojas(struct arbol *a);
void contarNodos(struct arbol *a, int n);
void contarNodos_2(struct arbol *a);

int main(){
    int alt, cant_hojas, cant_nodos;
    struct arbol *raiz, *h, *m, *z, *k, *c, *j, *a, *i;
    struct arbol *n, *p, *y, *b, *e, *d, *x, *l;
    h=(struct arbol *)malloc(sizeof(struct arbol));
    m=(struct arbol *)malloc(sizeof(struct arbol));
    z=(struct arbol *)malloc(sizeof(struct arbol));
    k=(struct arbol *)malloc(sizeof(struct arbol));
    c=(struct arbol *)malloc(sizeof(struct arbol));
    j=(struct arbol *)malloc(sizeof(struct arbol));
    a=(struct arbol *)malloc(sizeof(struct arbol));
    i=(struct arbol *)malloc(sizeof(struct arbol));
    n=(struct arbol *)malloc(sizeof(struct arbol));
    p=(struct arbol *)malloc(sizeof(struct arbol));
    y=(struct arbol *)malloc(sizeof(struct arbol));
    b=(struct arbol *)malloc(sizeof(struct arbol));
    e=(struct arbol *)malloc(sizeof(struct arbol));
    d=(struct arbol *)malloc(sizeof(struct arbol));
    x=(struct arbol *)malloc(sizeof(struct arbol));
    l=(struct arbol *)malloc(sizeof(struct arbol));
    h->elem='h'; h->izq=m; h->der=z;
    m->elem='m'; m->izq=k; m->der=NULL;
    z->elem='z'; z->izq=c; z->der=j;
    k->elem='k'; k->izq=a; k->der=i;
    c->elem='c'; c->izq=NULL; c->der=NULL;
    j->elem='j'; j->izq=n; j->der=p;
    a->elem='a'; a->izq=NULL; a->der=NULL;
    i->elem='i'; i->izq=NULL; i->der=y;
    n->elem='n'; n->izq=NULL; n->der=NULL;
    p->elem='p'; p->izq=b; p->der=e;
    y->elem='y'; y->izq=NULL; y->der=NULL;
    b->elem='b'; b->izq=NULL; b->der=NULL;
    e->elem='e'; e->izq=d; e->der=x;
    d->elem='d'; d->izq=NULL; d->der=l;
    x->elem='x'; x->izq=NULL; x->der=NULL;
    l->elem='l'; l->izq=NULL; l->der=NULL;

    raiz=h;
    printf("\nPreorden ");
    preorden(raiz);
    printf("\nInorden ");
    inorden(raiz);
    printf("\nPostorden ");
    postorden(raiz);
    alt = altura(raiz);
    printf("\nLa altura del arbol es: %d\n", alt);
    alt = altura_2(raiz);
    printf("\nLa altura del arbol es: %d\n", alt);
    cant_hojas = contarHojas(raiz);
    printf("\nLa cantidad de hojas es: %d\n", cant_hojas);
    contarNodos(raiz, 0);
    printf("\nLa cantidad de nodos es: %d\n", numNodos);
    contarNodos_2(raiz);
    printf("\nLa cantidad de nodos es: %d\n", numNodos1);
    printf("\n\n<< Finalizado >>\n\n");
    return 0;
}

void visitar(struct arbol *a){
    printf("%c - ", a->elem);
}

void preorden(struct arbol *a){
    if (a != NULL) {
        visitar(a);
        preorden(a->izq);
        preorden(a->der);
    }
}

void inorden(struct arbol *a){
    if (a != NULL) {
        inorden(a->izq);
        visitar(a);
        inorden(a->der);
    }
}

void postorden(struct arbol *a){
    if (a != NULL) {
        postorden(a->izq);
        postorden(a->der);
        visitar(a);
    }
}

int altura(struct arbol *a) {
    if (a == NULL){
        return 0;
    }
    else {
        return (1 + max(altura(a->izq), altura(a->der)));
    }
}

int max(int num1, int num2) {
   if (num1 > num2)
      return num1;
   else
      return num2;
}

int altura_2(struct arbol *a){
    int AltIzq, AltDer;
    if(a == NULL)
        return 0;
    else{
        AltIzq = altura_2(a->izq);
        AltDer = altura_2(a->der);
        if(AltIzq > AltDer)
            return AltIzq+1;
        else
            return AltDer+1;
    }
}

int contarHojas(struct arbol *a){
    if (a == NULL){
        return 0;
    }
    if ((a->der == NULL) && (a->izq == NULL)){
        return 1;
    }
    else {
        return contarHojas(a->izq) + contarHojas(a->der);
    }
}

void contarNodos(struct arbol *a, int n){
    if(a == NULL)
        return;
    contarNodos(a->der, n+1);
    numNodos++;
    contarNodos(a->izq, n+1);
}

void contarNodos_2(struct arbol *a){
    if (a != NULL) {
        numNodos1++;
        contarNodos_2(a->izq);
        contarNodos_2(a->der);
    }
}

