#include <stdio.h>

void recebeValores(float *pArray, int n){
    for(int i = 0; i<n; i++){
        scanf("%f", &pArray[i]);
    }
}
void ordenar(float *pArray, int n){
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
    int n;
    scanf("%d", &n);
    float vetor[n];
    recebeValores(vetor, n);
    printf("Antes:\n");
    for(int i = 0; i< n; i++){
        printf("%4.2f\n", vetor[i]);
    }
    ordenar(vetor, n);
    printf("Depois:\n");
    for(int i = 0; i< n; i++){
        printf("%4.2f\n", vetor[i]);
    }
    return 0;
}
