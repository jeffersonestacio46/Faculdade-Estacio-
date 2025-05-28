#include <stdint.h>

int main (){
    int numero;

    do{// condição inicial para verificar entradas no programa, e inicio do loop até a condição verdadeira for encontrada
        printf("Digite um numero par para sair do programa..");
        scanf("%d", &numero);

        if (numero % 2 == 0){
            printf("%d é par!\n", numero);
        }else {
            printf("%d, é impar!\n", numero);
        }
        
    } while (numero % 2 != 0);//Saida do loop caso a condição do ("Do for verdadeira")
    
    printf("Você digitou um numero par, saindo do programa...\n");


    return 0;
}