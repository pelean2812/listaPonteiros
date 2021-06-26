#include <stdio.h>

void lerVetor(float *vetor, int tamanho); //vai ler o vetor com os numeros
void imprimeVetor(float *vetor, int tamanho);//vai imprimir o vetor com os numeros
void sort(float *vetor, int tamanho, int (*comp)(const void*,const void*));
int compare(const void *num1, const void *num2);

int main(void){
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);
    float vetor[tamanho];
    
    lerVetor(vetor, tamanho);
    printf("Vetor antes da ordenacao: \n");
    imprimeVetor(vetor, tamanho);

    sort(vetor, tamanho, &compare);
    printf("Vetor depois ordenacao: \n");
    imprimeVetor(vetor, tamanho);
}

void lerVetor(float *vetor, int tamanho){
    printf("-----------------------------------------------------------------------\n");
    for(int i = 0; i < tamanho; i++){
        printf("digite o valor do vetor na posicao [%d]: ", i);
        scanf("%f", &vetor[i]);
    }
    printf("-----------------------------------------------------------------------\n");
}

void imprimeVetor(float *vetor, int tamanho){
    for(int i = 0; i < tamanho; i++){
        printf("vetor[%d] = %f \n", i, vetor[i]);
    }
    printf("-----------------------------------------------------------------------\n");
}

void sort(float *vetor, int tamanho, int (*comp)(const void*,const void*)){
    float aux = 0;

    for(int i = 0; i<tamanho; i++){
        for(int j = i+1; j < tamanho; j++){
            if(compare(&vetor[i], &vetor[j])>0){
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int compare(const void *num1, const void *num2){
    float numA = *(float*) num1; //converte de void pra float o num1
    float numB = *(float*) num2; //converte de void pra float o num2
    return (numA > numB) - (numA < numB); //retorna > 0 se o numA>numB, retorna < 0 se numA<numB e retorna 0 se numA = numB
}