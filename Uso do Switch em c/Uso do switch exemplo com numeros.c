#include <stdio.h>

int main (){
    int variavel;

    printf("Digite um valor: \n");
    scanf("%d", &variavel);

    switch(variavel){
        case 1:
        printf("Codigo a ser executavel se variavel == 1\\n");
        //Codigo a ser executado se variavel == valor1
    break;
    case 2:
    //codigo a ser executado se variavel == valor2
    printf("Codigo a ser executado se variavel == 2\n");
    break;
    default:
    //codigo a ser executado se nenhum dos casos acima for verdadeiro
    printf("Codigo a ser executado se a variavel não for 1 ou 2\n");
    }
}