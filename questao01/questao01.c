#include <stdio.h>

int main(void)
{
    int i = 3, j = 5;
    int *p, *q; //ponteiros de inteiro p e q

    p = &i; //p recebe o endereço da variável i
    q = &j; //q recebe o endereço da variável j

    if (p == &i){
        printf("p == &i\n"); //p realmente contém o endereço da variável i, então de fato, p=&i
    }else{
        printf("p != &i\n"); //isso não é impresso, afinal p == &i
    }

    printf("*p - *q = %d\n", (*p - *q)); //imprime -2 (CONTEÚDO de p = 3, CONTEÚDO de q = 5, logo: *p - *q = 3 - 5 = -2)

    printf("**&p = %d\n ", **&p); /*
    imprime 3 (CONTEÚDO do CONTEÚDO do endereço de p)
    o endereço de p contém o endereço da variável i, e o endereço da variável 3 armazena o valor 3
    o conteúdo do endereço de p é 3
    logo, o conteúdo de conteúdo do endereço de p é 3
    */

    printf("3 - *p/(*q) + 7 = %d\n  ", 3 - *p / (*q) + 7);
}