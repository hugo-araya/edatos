#include <stdio.h>
typedef struct {
    int dia;
    int mes;
    int agno;
} FECHA;

FECHA definir_hoy();

int main(){
    FECHA hoy;
    hoy = definir_hoy();
    printf("%d - %d - %d\n", hoy.dia, hoy.mes, hoy.agno);
    return 0;
}

FECHA definir_hoy(){
    FECHA h;
    h.dia = 9;
    h.mes = 6;
    h.agno = 2021;
    return h;
}