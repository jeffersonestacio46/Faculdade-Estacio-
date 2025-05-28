#include <stdio.h>

int main (){

    int numero = 10, resultado;

    resultado = numero % 2;
    
    printf("A variavel resultado é: %d\n", resultado);

    if(numero % 2 == 0){
        printf("O numero é par");
    }else {
        printf("O numero é impar\n");
    }
}