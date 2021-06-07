#include <stdio.h>
int llamadas = 1;
void hanoi(int n,int com, int aux, int fin, int van);

int main(){
    int van = 1;
    hanoi(30, 1, 2, 3, van);
    printf("n\nLlamada: %d - %d\n\n\n", llamadas, van);
    return 0;
}

void hanoi(int n,int com, int aux, int fin, int van){
    if(n==1){
        printf("Llamada: %d - %d\n", llamadas, van);
        printf("%d -> %d",com,fin);
    }
    else{
        printf("LLamada: %d - %d\n", llamadas, van);
        llamadas = llamadas + 1;
        van = van + 1;
        hanoi(n-1,com,fin,aux, van);
        printf("\n%d -> %d\n",com,fin);
        printf("Llamada: %d - %d\n", llamadas, van);
        llamadas = llamadas + 1;
        van = van + 1;
        hanoi(n-1,aux,com,fin, van);
    }
}