#include <stdio.h>

void soma(int *vetor1, int *vetor2, int *vetorSoma, int tamanho);
void leVetor(int *vetor, int tamanho);

int main(void){
    int tamanho;
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);

    int vetor1[tamanho], vetor2[tamanho], vetorSoma[tamanho];

    leVetor(vetor1, tamanho);
    leVetor(vetor2, tamanho);
    soma(vetor1, vetor2, vetorSoma, tamanho);

}

void leVetor(int *vetor, int tamanho){
    for(int i=0; i<tamanho; i++){
        printf("digite %d valor do vetor: ",i);
        scanf("%d", &vetor[i]);
    }
}

void soma(int *vetor1, int *vetor2, int *vetorSoma, int tamanho){
    for(int i=0; i<tamanho; i++){
       vetorSoma[i] = vetor1[i] + vetor2[i];
    }

    printf("--------------------Vetor1--------------------\n");
    for(int i=0; i<tamanho; i++){
        printf("%d ", vetor1[i]);
    }
    printf("\n");

    printf("--------------------Vetor2--------------------\n");
    for(int i=0; i<tamanho; i++){
        printf("%d ", vetor2[i]);
    }
    printf("\n");

    printf("--------------------Vetor Soma--------------------\n");
    for(int i=0; i<tamanho; i++){
        printf("%d ", vetorSoma[i]);
    }
    printf("\n");
}