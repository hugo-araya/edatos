#include <stdio.h>
struct estudiante {
    int matricula;
    int nombre;
    int edad;
    int fono;
    int nota;
};

int main(){
    struct estudiante alum[10];
    int i;
    int matricula, nombre, edad, fono, nota;
    for (i = 0 ; i < 3; i++){
        scanf("%d",&matricula);
        scanf("%d",&nombre);
        scanf("%d",&edad);
        scanf("%d",&fono);
        scanf("%d",&nota);
        alum[i].matricula = matricula;
        alum[i].nombre = nombre;
        alum[i].edad = edad;
        alum[i].fono = fono;
        alum[i].nota = nota;
    }

    for (i = 0 ; i < 3; i++){
        printf("%d - %d - %d - %d - %d\n",alum[i].matricula,alum[i].nombre,alum[i].edad,alum[i].fono,alum[i].nota);
    }
    return 0;
}