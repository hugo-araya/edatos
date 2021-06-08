#include <stdio.h>
typedef struct {
    int dia;
    int mes;
    int agno;
} fecha;

void definir_hoy(fecha *h);

int main(){
    fecha hoy;
    definir_hoy(&hoy);
    printf("%d - %d - %d\n", hoy.dia, hoy.mes, hoy.agno);
    return 0;
}

void definir_hoy(fecha *h){
    h->dia = 7;
    h->mes = 6;
    h->agno = 2021;
}