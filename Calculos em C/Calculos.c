#include <stdio.h>

int main () {
    /*
    Soma (+)
    Subritação (-)
    Mutiplicação (*)
    Divisão (/)
    */

    int numero1, numero2;
    int soma, subtracao, mutiplicacao, divisao;

    printf("Entre com o numero 1: \n");
    scanf("%d", &numero1);
    printf("Entre com o numero 2: \n");
    scanf("%d", &numero2);
    
    //soma da operação
    soma = numero1 + numero2;
    //subtração da operação
    subtracao = numero1 - numero2;
    //mutiplicação da operação
    mutiplicacao = numero1 * numero2;
    //divisão da operação
    divisao = numero1 / numero2;

    printf("A soma é: %d\n", soma);
    printf("A Subtração é: %d\n", subtracao);
    printf("A mutiplicação é: %d\n", mutiplicacao);
    printf("A Divisão é: %d\n", divisao);




}