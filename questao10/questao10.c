#include <stdio.h>

int main(){
    //sendo o endereço de x = 4092
    int x[4];
    //char ocupa 1 byte
    //int ocupa 2 bytes
    //float ocupa 4 bytes
    //double ocupa 8 bytes

    //para char:
    //x = 4092
    //x+1 = 4093
    //x+2 = 4094
    //x+3 = 4095

    //para int:
    //x = 4092
    //x+1 = 4094
    //x+2 = 4096
    //x+3 = 4098

    //para float:
    //x = 4092
    //x+1 = 4096
    //x+2 = 4100
    //x+3 = 4104

    //para double:
    //x = 4092
    //x+1 = 4100
    //x+2 = 4108
    //x+3 = 4116

    printf("%p\n", x);
    printf("%p\n", x+1);
    printf("%p\n", x+2);
    printf("%p\n", x+3);
    
    return 0;
}