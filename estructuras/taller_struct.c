#include <stdio.h>
#define N 3

struct estudiante {
    int matricula;
    int nombre;
    int edad;
    int fono;
    int nota;
};

int main(){
    struct estudiante alum[N];
    int i;
    int matricula, nombre, edad, fono, nota;
    for (i = 0 ; i < N; i++){
        printf("Matricula: ");
        scanf("%d",&matricula);
        printf("Nombre: ");
        scanf("%d",&nombre);
        printf("Edad: ");
        scanf("%d",&edad);
        printf("Fono: ");
        scanf("%d",&fono);
        printf("Nota: ");
        scanf("%d",&nota);

        alum[i].matricula = matricula;
        alum[i].nombre = nombre;
        alum[i].edad = edad;
        alum[i].fono = fono;
        alum[i].nota = nota;
    }

    for (i = 0 ; i < N; i++){
        printf("%d - %d - %d - %d - %d\n",alum[i].matricula,alum[i].nombre,alum[i].edad,alum[i].fono,alum[i].nota);
    }
    return 0;
}