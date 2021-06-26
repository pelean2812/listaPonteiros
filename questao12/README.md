- Para referenciar o endereço de uma função, usa-se um ponteiro. Esses ponteiros para funções podem ser passados como argumentos para outras funções e a função apontada pode ser chamada a partir do ponteiro dela

## tipoDeRetorno (*nomeDoPonteiro)();
## tipoDoRetorno (*nomeDoPonteiro)(declaraçãoDosParametros);

- Esses parênteses devem ser colocados obrigatoriamente, pois, se a declaração for feita da seguinte forma:

## tipoDeRetorno *nomeDoPonteiro(declaraçãoDosParametros);

- o que estaria acontecendo seriaa declaração de uma função que retornaria um ponteiro para o tipo especificado.

Os ponteiros para funções são interessantes para quando o programador não pode determinar qual função deve ser chamada em uma situação. Nesses casos, ele pode usar ponteiros para funções para chamar a função desejada conforme a situação.