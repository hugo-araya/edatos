#include<stdio.h>
#include<stdlib.h>
int llamadas = 1; // Variables Globales

void imprimir();

int main(){
    imprimir();
    return 0;
}

void imprimir(){
    printf("%d\n", llamadas);
    llamadas++;
    imprimir();
}