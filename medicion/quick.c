#include<stdio.h>
#define N ___
void swap(int* a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

int particion (int arr[], int bajo, int alto){
    int pivote, i, j;
    pivote = arr[alto];
    i = (bajo - 1);

    for (j = bajo; j <= alto- 1; j++){
        if (arr[j] <= pivote){
            i++; 
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[alto]);
    return (i + 1);
}

void quickSort(int arr[], int bajo, int alto){
	int pi;
    if (bajo < alto){
        pi = particion(arr, bajo, alto);
        quickSort(arr, bajo, pi - 1);
        quickSort(arr, pi + 1, alto);
    }
}

int main(){
    int arr[N], i;
    int n = N;
    quickSort(arr, 0, n-1);
    return 0;
}
