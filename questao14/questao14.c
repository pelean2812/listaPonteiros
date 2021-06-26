#include <stdio.h> //comandos padrao de entrada e de saida
#include <stdlib.h> //para incluir o qsort

void lerVetor(float *pvetor, int tamanho);
void imprimeVetor(float *pvetor, int tamanho);
int compare(const void * num1, const void * num2);
int main(){
    int tamanho;
    scanf("%d", &tamanho); //recebe o tamanho do array
    float vetor[tamanho];
    lerVetor(vetor, tamanho); //chama a funcao que le o array
    imprimeVetor(vetor, tamanho); //chama a funcao que imprime o array antes de ser ordenado
    qsort(vetor, tamanho, sizeof(float), compare); //passa para o qsort o array, o numero de elementos (ou seja, o tamanho), o tamanho do tipo (no caso eh float) e um ponteiro pra uma funcao
    //o ponteiro para a funcao de comparacao serve para comparar dois valores e troca-los de posicao dependendo se um for maior que o outro para mante-los ordenados
    imprimeVetor(vetor, tamanho); //chama a funcao que imprime o array depois de ser ordenado
    return 0;
}

void lerVetor(float *pvetor, int tamanho){ //le os valores do array
    for(int i = 0; i<tamanho;i++){
        printf("Digite o valor da posicao %d: \n", i+1);
        scanf("%f", &pvetor[i]);
    }
}
void imprimeVetor(float *pvetor, int tamanho){ //imprime os valores do array
    printf("Valores digitados: \n");
    for(int i = 0; i<tamanho;i++){
        printf("Posicao %d: %f\n", i+1, pvetor[i]);
    }
}
int compare(const void * num1, const void * num2){ 
    float numA = *(float*) num1; //converte de void pra float o num1
    float numB = *(float*) num2; //converte de void pra float o num2
    return (numA > numB) - (numA < numB); //retorna > 0 se o numA>numB, retorna < 0 se numA<numB e retorna 0 se numA = numB
}