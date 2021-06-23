 - resultado do printf: "4094 7 5 15 9"
 
 ## Justificativa: 
 - i = 5 e p recebe o endereço de i
 - endereço de p = 4094
 - conteúdo de p = 5
 - quando eu mando imprimir p, p armazena o endereço de i, que é 4094.
 - quando eu mando imprimir *p+2 eu estou imprimindo o CONTEÚDO de p + 2, ou seja 5+2 = 7
 - quando eu mando imprimir **&p, eu estou imprimindo o CONTEÚDO do CONTEÚDO da referência de p, e isso vale 5.
 - quando eu mando imprimir 3**p, eu estou imprimindo 3 que multiplica o CONTEÚDO de p, ou seja 3x5=15
 - quando eu mando imprimir **&p+4, eu estou imprimindo o CONTEÚDO do CONTEÚDO da referência de p (que vale 5) somando com 4, ou seja 5 + 4 = 9
 