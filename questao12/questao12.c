#include <stdio.h>
void lerVetor(int *pvetor, int tamanho);
void imprimeVetor(int *pvetor, int tamanho);

int main(){
    int tamanho;
    scanf("%d", &tamanho);
    int vetor[tamanho];
    lerVetor(vetor, tamanho);
    imprimeVetor(vetor, tamanho);
    return 0;
}
void lerVetor(int *pvetor, int tamanho){
    for(int i = 0; i<tamanho;i++){
        printf("Digite o valor da posicao %d: \n", i+1);
        scanf("%d", &pvetor[i]);
    }
}
void imprimeVetor(int *pvetor, int tamanho){
    printf("Valores digitados: \n");
    for(int i = 0; i<tamanho;i++){
        printf("Posicao %d: %d\n", i+1, pvetor[i]);
    }
}
