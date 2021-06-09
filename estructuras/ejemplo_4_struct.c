#include <stdio.h>
typedef struct {
    int dia;
    int mes;
    int agno;
} FECHA;

void definir_hoy(FECHA *h);

int main(){
    FECHA hoy;
    definir_hoy(&hoy);
    printf("%d - %d - %d\n", hoy.dia, hoy.mes, hoy.agno);
    return 0;
}

void definir_hoy(FECHA *h){
    h->dia = 9;
    h->mes = 6;
    h->agno = 2021;
}