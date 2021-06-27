#include <stdio.h>
#include <stdlib.h>

void imprimeMatrizes(int **matrizA, int **matrizB, int **matrizC, int la, int ca, int lb);
void multiplica(int **matrizA, int **matrizB, int **matrizC, int la, int ca, int lb);

int main(void){
    int la, lb, ca, cb;
    printf("digite a quantidade de linhas da matriz a: ");
    scanf("%d", &la);
    printf("digite a quantidade de colunas da matriz a: ");
    scanf("%d", &ca);
    printf("digite a quantidade de linhas da matriz b: ");
    scanf("%d", &lb);
    printf("digite a quantidade de colunas da matriz b: ");
    scanf("%d", &cb);

    //alocar e preencher a matriz A
    int **matrizA = malloc(la*sizeof(*matrizA));
    for (int i = 0; i < la; i++) {
        matrizA[i] = malloc(ca*sizeof(*matrizA[i]));
        for (int j = 0; j < ca; j++){
            matrizA[i][j] = rand() % 100 + 1; //preencho a matriz com números aleatórios entre 1 e 100
        } 
    }

    //alocar e preencher a matriz B
    int **matrizB = malloc(lb*sizeof(*matrizB));
    for (int i = 0; i < lb; i++) {
        matrizB[i] = malloc(cb*sizeof(*matrizB[i]));
        for (int j = 0; j < cb; j++){
            matrizB[i][j] = rand() % 100 + 1; //preencho a matriz com números aleatórios entre 1 e 100
        } 
    }

    //alocar a matriz multiplicacao
    int **matrizMulti = malloc(la*sizeof(*matrizB));
    for (int i = 0; i < la; i++) {
        matrizMulti[i] = malloc(cb*sizeof(*matrizMulti[i]));
    }

    multiplica(matrizA, matrizB, matrizMulti, la, ca, lb);
    imprimeMatrizes(matrizA, matrizB, matrizMulti, la, lb, cb);
}

void imprimeMatrizes(int **matrizA, int **matrizB, int **matrizC, int la, int ca, int lb){
    printf("----------Matriz A---------\n");
    for(int i = 0; i<la; i++){
        for(int j = 0; j<ca; j++){
            printf("%d ", matrizA[i][j]);
        }
        printf("\n");
    }

    printf("----------Matriz B----------\n");
    for(int i = 0; i<lb; i++){
        for(int j = 0; j<ca; j++){
            printf("%d ", matrizB[i][j]);
        }
        printf("\n");
    }

    printf("----------(Matriz A)*(Matriz B)----------\n");
    for(int i = 0; i<la; i++){
        for(int j = 0; j<ca; j++){
            printf("%d ", matrizC[i][j]);
        }
        printf("\n");
    }
}

void multiplica(int **matrizA, int **matrizB, int **matrizC, int la, int ca, int lb){
    int soma = 0;
    for(int i = 0; i < la; i++){
        for(int j = 0; j < ca; j++){
            soma = 0;
            for(int k = 0; k < lb; k++){
                soma += matrizA[i][k]*matrizB[k][j]; //fórmula deduzida no curso de álgebra linear (olhar o arquivo sum.jpg)
            } 
            matrizC[i][j] = soma;
        }
    }
}

   