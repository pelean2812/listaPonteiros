#include <stdio.h>

int main(){
    int pulo[] = {1,2,3,4,5,6};
    *(pulo + 2); //esse iria imprimir o terceiro elemento do array
    *(pulo + 4); //esse iria imprimir o quinto elemento do array
    pulo + 4; //esse iria imprimir o endereço do quinto elemento do array
    pulo + 2; //esse iria imprimir o endereço do quinto elemento do array
    return 0;
}