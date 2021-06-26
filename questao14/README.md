##Sobre a questão 14:
### a implementação com um array de int tem a seguinte funcao compare:
- int compare (const void * a, const void * b){
-   return (*(int*)a - *(int*)b); 
- }

### dessa maneira, converte os valores para int e subtrai eles para descobrir qual o maior. Essa implementação da seguinte forma:
- int compare (const void * a, const void * b){
-   return (*(float*)a - *(float*)b); 
- }

### nao seria possivel de usar com float, uma vez que ao converter o retorno para int, perderia a presicao, entao a subtracao 1.1 (a) - 1.0 (b), por exemplo, seria considerada 0, ou seja, o qsort iria entender que esses dois valores sao iguais e nao ordenaria corretamente. Por esse motivo, foi adotada a abordagem: 
- int compare(const void * num1, const void * num2){ 
-    float numA = *(float*) num1;
-    float numB = *(float*) num2;
-    return (numA > numB) - (numA < numB);
- }

### desse modo, os valores sao comparados e o resultado da comparacao (1 - true ou 0 - false) se torna o valor usado na comparacao final para o retorno, invés de retornar a comparacao entre os valores diretamente.