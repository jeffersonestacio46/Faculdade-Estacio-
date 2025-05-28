#include <stdio.h>

int main (){

    int numero;

    printf("Digite um numero: \n");
    scanf("%d", &numero);

    if (numero > 0){
        if(numero % 2 == 0){
            printf("Numero par\n");
        }else {
            printf("Numero impar\n");
        }
        printf("O numero é positivo!\n");
    }else if (numero == 0){
        printf("O numero é zero\n");
    }else {
        printf("O numero é negativo!\n");
    }


}