#include <stdio.h>
struct fecha {
    int dia;
    int mes;
    int agno;
};

void definir_hoy(struct fecha *h);

int main(){
    struct fecha hoy;
    definir_hoy(&hoy);
    printf("%d - %d - %d\n", hoy.dia, hoy.mes, hoy.agno);
    return 0;
}

void definir_hoy(struct fecha *h){
    h->dia = 10;
    h->mes = 6;
    h->agno = 2021;
}