#include <stdio.h>
#include "gc.h"
#include <assert.h>
#include <time.h>
#include <stdlib.h> //pra incluir o malloc()

void recebeValores(int *pArray, int n){
    for(int i = 0; i<n; i++){
        scanf("%d", &pArray[i]);
    }
}
void ordenar(int *pArray, int n){
    int aux;
    int c;
    for(int i = 0;i < n;i++){
        for(c = i+1;c < n;c++){
            if(pArray[i] > pArray[c]){
                aux = pArray[i];
                pArray[i] = pArray[c];
                pArray[c] = aux;
            }
        }
    }
}

int main(){
    clock_t t;
    t = clock();
    int n;
    scanf("%d", &n);
    int *vetor;
    vetor = malloc(n*sizeof(int)); //aloca memoria para o tamanho desejado no array
    recebeValores(vetor, n);
    printf("Antes:\n");
    for(int i = 0; i< n; i++){
        printf("%d\n", vetor[i]);
    }
    ordenar(vetor, n);
    printf("Depois:\n");
    for(int i = 0; i< n; i++){
        printf("%d\n", vetor[i]);
    }
    free(vetor); //libera a memoria
    t = clock() - t;
    printf("Tempo de execucao: %lf milisegundos\n", ((double)t)/((CLOCKS_PER_SEC/1000)));
    return 0;
}
