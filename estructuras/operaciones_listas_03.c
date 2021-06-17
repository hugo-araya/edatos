#include <stdio.h>
#include <stdlib.h>

struct lista {
    int clave;
    struct lista *sig;
};

void mostrar (struct lista *L);
struct lista * elimina_inicio(struct lista *L);
int contar_nodos(struct lista *L);
int esta_vacia(struct lista *L);
struct lista * elimina_final(struct lista *L);
struct lista * crear_lista();
void mostrar_menu();
struct lista * agrega_inicio(struct lista *L, int elem);
struct lista * agrega_final(struct lista *L);

int main(){
    struct lista *L;
    struct lista *p;
    int i, suma, elem, opcion=0;
    mostrar_menu();
    while (opcion != 8){
        scanf("%d", &opcion);
        switch (opcion) {
            case 1: L = crear_lista();
                    break;
            case 2: printf("Ingrese elemento a la lista: ");
                    scanf("%d", &elem);
                    L = agrega_inicio(L, elem);
                    break;
            case 3: printf("En construcción\n");
                    break;
        }
    }
    L = crear_lista();
    L = agrega_inicio(L, 200);
    L = agrega_inicio(L, 100);

    if (!esta_vacia(L)){
        mostrar(L);
    }
    else{
        printf("La Lista esta Vacia\n");
    }

    printf("Son: %d\n", contar_nodos(L));

    if (!esta_vacia(L)){
        L = elimina_final(L);
    }
    else{
        printf("No se puede eliminar porque la lista esta vacia\n");
    }

    if (!esta_vacia(L)){
        mostrar(L);
    }
    else{
        printf("La Lista esta Vacia\n");
    }
    printf("Son: %d\n", contar_nodos(L));

    if (!esta_vacia(L)){
        L = elimina_final(L);
    }
    else{
        printf("No se puede eliminar porque la lista esta vacia\n");
    }

    if (!esta_vacia(L)){
        mostrar(L);
    }
    else{
        printf("La Lista esta Vacia\n");
    }
    printf("Son: %d\n", contar_nodos(L));


    if (!esta_vacia(L)){
        L = elimina_final(L);
    }
    else{
        printf("No se puede eliminar porque la lista esta vacia\n");
    }

    if (!esta_vacia(L)){
        mostrar(L);
    }
    else{
        printf("La Lista esta Vacia\n");
    }
    printf("Son: %d\n", contar_nodos(L));


    if (!esta_vacia(L)){
        L = elimina_final(L);
    }
    else{
        printf("No se puede eliminar porque la lista esta vacia\n");
    }

    if (!esta_vacia(L)){
        mostrar(L);
    }
    else{
        printf("La Lista esta Vacia\n");
    }
    printf("Son: %d\n", contar_nodos(L));


    if (!esta_vacia(L)){
        L = elimina_final(L);
    }
    else{
        printf("No se puede eliminar porque la lista esta vacia\n");
    }

    if (!esta_vacia(L)){
        mostrar(L);
    }
    else{
        printf("La Lista esta Vacia\n");
    }
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

int esta_vacia(struct lista *L){
    if (L == NULL) {
        return 1;
    }
    else{
        return 0;
    }
}

struct lista * elimina_final(struct lista *L){
    struct lista *p = L;
    struct lista *q = L;
    if (L->sig == NULL){
        free (L);
        return NULL;
    }
    while (p->sig != NULL) {
        q = p;
        p = p->sig;
    }
    q->sig = NULL;
    free(p);
    return L;
}

struct lista * crear_lista(){
    return NULL;
}

struct lista * agrega_inicio(struct lista *L, int elem){
    struct lista * p;
    p = (struct lista *) malloc(sizeof(struct lista));
    p->clave = elem;
    p->sig = L;
    return p;
}

void mostrar_menu(){
    printf("Menu Listas Enlazadas\n\n");
    printf("1. Crear Lista\n");
    printf("2. Agregar al inicio\n");
    printf("3. Agrefar al final\n");
    printf("4. Eliminar al inicio\n");
    printf("5. Eliminar al final\n");
    printf("6. Mostrar Lista\n");
    printf("7. Contar nodos\n");
    printf("8. Salir\n");
    printf("Ingrese su opcion: ");
}