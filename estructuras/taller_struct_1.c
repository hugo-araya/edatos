#include <stdio.h>
#define N 3

typedef struct{
    int matricula;
    int nombre;
    int edad;
    int fono;
    int nota;
} ESTUDIANTE;

int main(){
    ESTUDIANTE alum[N];
    int i;
    for (i = 0 ; i < N; i++){
        printf("Matricula: ");
        scanf("%d",&alum[i].matricula);
        printf("Nombre: ");
        scanf("%d",&alum[i].nombre);
        printf("Edad: ");
        scanf("%d",&alum[i].edad);
        printf("Fono: ");
        scanf("%d",&alum[i].fono);
        printf("Nota: ");
        scanf("%d",&alum[i].nota);
    }

    for (i = 0 ; i < N; i++){
        printf("%d - %d - %d - %d - %d\n",alum[i].matricula,alum[i].nombre,alum[i].edad,alum[i].fono,alum[i].nota);
    }
    return 0;
}