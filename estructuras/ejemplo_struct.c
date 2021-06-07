#include <stdio.h>
struct fecha {
    int dia;
    int mes;
    int agno;
};

struct fecha definir_hoy();

int main(){
    struct fecha hoy;
    hoy = definir_hoy();
    printf("%d - %d - %d\n", hoy.dia, hoy.mes, hoy.agno);

}

struct fecha definir_hoy(){
    struct fecha h;
    h.dia = 7;
    h.mes = 6;
    h.agno = 2021;
    return h;
}