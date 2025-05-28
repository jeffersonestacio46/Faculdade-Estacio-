#include <stdio.h>

int main (){

    int a = 10, b = 5;
    
    //O resultado mostra que ambos numeros são positivos e a afirmação do IF se torna verdadeira, caso um dos numeros seja negativo mostra que a afirmação é falsa e abre a caixa de mensagem do Else  
    //O && confere verificando se ambas as expressões são verdadeira como o exemplo a baixo que ambas informações são positivas, mesmo com uma variavel em IF
    if(a > 0  && b > 0){
        printf("Os 02 numeros são positivos\n");
    }else {
        printf("Pelo menos um dos numeros são negativos\n");
    }



}