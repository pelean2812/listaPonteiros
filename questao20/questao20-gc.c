#include <stdio.h>
#include "gc.h"
#include <assert.h>
#include <time.h>
#include <stdlib.h> //pra incluir o malloc()

void recebeValores(int*pArray, int n){
    for(int i = 0; i<n; i++){
        scanf("%d", &pArray[i]);
    }
}
void ordenar(int *pArray, int n){
    float aux;
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
    clock_t t = clock();
    int n, i;
    scanf("%d", &n);
    int vetor[n];
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
    for (i = 0; i < n; ++i){
     int **p = (int **) GC_MALLOC(sizeof(int *));
     int *q = (int *) GC_MALLOC_ATOMIC(sizeof(int));
     assert(*p == 0);
     *p = (int *) GC_REALLOC(q, 2 * sizeof(int));
     if (i % 100000 == 0)
       printf("Tamanho heap = %d\n", GC_get_heap_size());
    }
    t = clock() - t;
    printf("Tempo de execucao: %lf milisegundos\n", ((double)t)/((CLOCKS_PER_SEC/1000)));
    return 0;
}
