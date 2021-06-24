# float aloha[10], coisas[10][5], *pf, value = 2.2; int i=3;
- aloha[2] = value; -> válido, atribuo o valor de value à segunda posição do vetor aloha.
- scanf("%f", &aloha); -> válido (irá compilar, mas é estranho, afinal você pode passar um float para um endereço de memória, e isso futuramente pode gerar um erro)
- aloha = value"; -> inválido, além do erro de sintaxe (a aspa dupla após a virgula), essa atribuição é incorreta, pois eu devo dizer em qual posição do array aloha que eu devo armazenar o valor value
- printf("%f", aloha); -> válido (não gera nenhum erro na hora de compilar, mas se levarmos em conta que a linha imediatamente acima não existiesse no programa, o que seria impresso não seria o array todo, mas sim, o endereço que ele ocupa na memória)
- coisas[4][4] = aloha[3]; -> válido, estou especificando exatamente em qual linha e qual coluna da matriz que eu irei armazenar o valor contido na terceira posição do array aloha
- coisas[5] = aloha; -> inválido, pois eu preciso especificar em qual coluna eu iria armazenar o valor aloha, mas além disso, do jeito que está escrito, aloha é um endereço de memória para o array aloha, e eu não posso fazer essa atribuição, a não ser que coisas fosse um ponteiro.
- pf = value; -> inválido, pf deveria receber um endereço de memória (do jeito que está escrito, eu estou tentando passar o conteúdo de value para o ponteiro, e isso não é válido).
- pf = aloha; -> válido, pois aqui, o ponteiro pf recebe o endereço do array aloha.