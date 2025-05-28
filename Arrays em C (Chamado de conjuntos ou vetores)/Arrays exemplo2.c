#include <stdio.h>

int main(){
    
    char letras[4] = {'A', 'B', 'C', 'D'}; //Array de notas()

    printf("A primeira letras é: %C\n", letras[0]);
    printf("A segunda letras é: %C\n", letras[1]);
    printf("A terceira letra é: %C\n", letras[2]);
    printf("A quarta letra é: %C\n", letras[3]);
    //Observação: Arrays começa contar do 0, ou seja, o numero 85.5 faz perta de 0, e o 3 que informamos do lado de nota é apenas para informar quantos numero ou letras iremos colocar ao lado, mas no codigo sempre inicia com 0

    return 0;
}