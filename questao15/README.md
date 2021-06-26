#Função sort();
- Protótipo da função: 
```c
sort(float *vetor, int tamanho, int (*comp)(const void*,const void*))
```
[x] O primeiro parâmetro é um ponteiro para array (este array deverá conter os números que você quer ordenar). 
[x] O segundo parâmetro é o tamanho do array. 
[x] O terceiro é um ponteiro para uma função auxiliar (que vai comparar dois números, e determinar qual é o maior entre eles)
- exemplo de uso função: 

```c
sort(vetor, tamanho, &compare)
```

#Explciando a função auxiliar mostrada no código:
```c
int compare(const void *num1, const void *num2){
    float numA = *(float*) num1; //converte de void pra float o num1
    float numB = *(float*) num2; //converte de void pra float o num2
    return (numA > numB) - (numA < numB); //retorna > 0 se o numA>numB, retorna < 0 se numA<numB e retorna 0 se numA = numB
}
```

#Explciando a função sort:
```c
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
```
1. Primeiro eu crio uma variável auxiliar aux
2. Depois eu vou fazer o seguinte truque com auxilio de dois laços for:
3. eu vou comparar um certo i-ésimo elemento com um j-ésimo:
 - o índice i representa a posição atual do array
 - o índice j representa uma posição a mais da posição atual do array 
 - em suma, eu sempre vou comparar o elemento atual com o próximo elemento do array
 - se o elemento atual for maior do que o próximo, então eu troco eles de posição do array, mas como sei que um é maior do que outro? usando a função compare. Eu coloco na função compare estes dois elementos, e se o elemento atual realmente for maior do que o próximo, então é retornado um valor maior do que 0. Se isso acontecer, a variável auxiliar recebe o valor atual, o valor atual recebe o próximo valor e próximo valor recebe o valor atual.

4. Por exemplo: vetor={5, 4, 3}
 - quando i = 0:
 j = 1 -> compare(vetor[0], vetor[1]) = compare(5,4) => retorna>0, logo: vetor={4, 5, 3}
 j = 2 -> compare(vetor[0], vetor[2]) = compare(4,3) => retorna>0, logo: vetor={3, 5, 4}
 - quando i = 1:
 j = 2 -> compare(vetor[1], vetor[2]) = compare(5,4) => retorna>0, logo: vetor={3, 4, 5}
