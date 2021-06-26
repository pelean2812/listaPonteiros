#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void lerVetor(float *vetor, float *vetor2, int tamanho);
void imprimeVetor(float *vetor, int tamanho);
void sort(float *vetor, int tamanho, int (*comp)(const void *, const void *));
int compare(const void *num1, const void *num2);

int main(void)
{
    int tamanho;
    printf("Digite o tamanho do array: ");
    scanf("%d", &tamanho);
    float vetor[tamanho];
    float vetor2[tamanho];
    clock_t t1, t2;

    lerVetor(vetor, vetor2, tamanho);
    imprimeVetor(vetor, tamanho);

    t1 = clock(); //inicio a contagem de tempo
    sort(vetor, tamanho, &compare);
    t1 = clock() - t1; //paro a contagem de tempo
    printf("Vetor depois ordenacao com a funcao criada por mim: \n");
    imprimeVetor(vetor, tamanho);

    t2 = clock(); //inicio a contagem de tempo
    qsort(vetor2, tamanho, sizeof(float), compare);
    t2 = clock() - t2; //paro a contagem de tempo
    printf("Vetor depois ordenacao com a funcao qsort: \n");
    imprimeVetor(vetor2, tamanho);

    printf("tempo de execucao usando a funcao criada por mim: %f (s) \n", (((float)t1)/CLOCKS_PER_SEC));
    printf("tempo de execucao usando a funcao qsort: %f (s)", (((float)t2)/CLOCKS_PER_SEC));
}

void lerVetor(float *vetor, float *vetor2, int tamanho)
{
    printf("-----------------------------------------------------------------------\n");
    for (int i = 0; i < tamanho; i++)
    {
        printf("digite o valor do vetor na posicao [%d]: ", i);
        scanf("%f", &vetor[i]);
        vetor2[i] = vetor[i];
    }
    printf("-----------------------------------------------------------------------\n");
}

void imprimeVetor(float *vetor, int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        printf("vetor[%d] = %f \n", i, vetor[i]);
    }
    printf("-----------------------------------------------------------------------\n");
}

void sort(float *vetor, int tamanho, int (*comp)(const void *, const void *))
{
    float aux = 0;

    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i + 1; j < tamanho; j++)
        {
            if (compare(&vetor[i], &vetor[j]) > 0)
            {
                aux = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = aux;
            }
        }
    }
}

int compare(const void *num1, const void *num2)
{
    float numA = *(float *)num1;          //converte de void pra float o num1
    float numB = *(float *)num2;          //converte de void pra float o num2
    return (numA > numB) - (numA < numB); //retorna > 0 se o numA>numB, retorna < 0 se numA<numB e retorna 0 se numA = numB
}