#include <stdio.h>

int main (){
    int condicao1, condicao2;

    //estrutura aninhada
    if(condicao1) {
        if(condicao2) {
            // código a ser executado se codicao1 e condicao2 forem verdadeira
        }
    }

    //estrutura encadeada
    if(condicao1){
        //codigo a ser executado se condicao1 for verdadeira
    }else if (condicao2) {
        //codigo a ser executado se cindicao1 for falsa e condicao2 for verdadeira
    }else {
        //codigo a ser executado se todas as condições anteriores forem falsas
    }
}