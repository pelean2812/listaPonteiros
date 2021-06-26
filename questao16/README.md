# Utilizando o compilador mingw, não dá pra notar diferença nos tempos de execução

- Utilizei a função clock() da biblioteca time.h para medir os tempos

```c
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
```
