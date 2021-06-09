#include <stdio.h>
#include <string.h>

#define ID 0     //id matricula
#define TOTAL  2 //total de alumnos en el salon

typedef struct {
    int id_matricula;
    int edad;
    int telefono;
    float nota_final;
    char nombre[20];
} ALUMNO;

void definir_alumno(ALUMNO *alu,int *n);

int main(){
    int n = ID; //contador id_alumnos
    ALUMNO salon[TOTAL];

    for (int i = 0;i<TOTAL;i++){
        printf("------------Nuevo alumno (%d)-----------\n",i);
        definir_alumno(&salon[i],&n);
    }

    printf("\n-------------------RESUMEN ALUMNOS-------------------");
    for (int i = 0;i<TOTAL;i++){
        printf("\nId matricula: %d\nNombre: %s\nEdad: %d\nTelefono: %d\nNota final: %.2f\n",
               salon[i].id_matricula, salon[i].nombre, salon[i].edad, salon[i].telefono,salon[i].nota_final);
    }

    return 0;
}

void definir_alumno(ALUMNO *alu, int *n){
    alu->id_matricula = *n;
    *n += 1;

    printf("ingrese nombre\n");
    scanf("%s",alu->nombre);

    printf("ingrese edad\n");
    scanf("%d",&alu->edad);

    printf("ingrese telefono\n");
    scanf("%d",&alu->telefono);

    printf("Ingrese nota final\n");
    scanf("%f",&alu->nota_final);
}
