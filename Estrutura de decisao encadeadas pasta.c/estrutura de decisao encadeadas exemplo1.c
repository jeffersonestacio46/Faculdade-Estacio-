#include <stdio.h>

int main(){

    int idade;

    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    //criança < 12
    //Adolecente >= 12 <18
    //Adulto <= x < 60
    //Idoso > 60

    if(idade < 12 ){
        printf("Você é uma criança!\n");
    }else if (idade >= 12 && idade < 18){
        printf("Você é um adolecente!\n");
    }else if (idade >= 18 && idade < 60){
    printf("Você é um adulto!\n");
    }else {
        printf("Você é um idoso!\n");
    }
}