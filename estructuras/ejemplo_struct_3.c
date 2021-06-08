#include <stdio.h>
typedef struct {
    int dia;
    int mes;
    int agno;
} fecha;

fecha definir_hoy();

int main(){
    fecha hoy;
    hoy = definir_hoy();
    printf("%d - %d - %d\n", hoy.dia, hoy.mes, hoy.agno);
    return 0;
}

fecha definir_hoy(){
    fecha h;
    h.dia = 7;
    h.mes = 6;
    h.agno = 2021;
    return h;
}