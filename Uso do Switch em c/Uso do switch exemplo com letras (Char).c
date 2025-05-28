#include <stdio.h>

int main (){
    char variavel;

    printf("Digite uma letra: \n");
    scanf("%c", &variavel);

    switch(variavel){
        case 'a':
        printf("Codigo a ser executavel se variavel == a\\n");
        //Codigo a ser executado se variavel == valora
    break;
    case 'b':
    //codigo a ser executado se variavel == valorb
    printf("Codigo a ser executado se variavel == b\n");
    break;
    default:
    //codigo a ser executado se nenhum dos casos acima for verdadeiro
    printf("Codigo a ser executado se a variavel não for a ou b\n");
    }
}