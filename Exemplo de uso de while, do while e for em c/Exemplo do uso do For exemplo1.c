#include <stdio.h>

int main (){
    int numero, i;

    printf("Digite um numero para calculamos a tabuada:\n");
    scanf("%d", &numero);

    for(i = 0; i <= 10; i++){
        //A ordem da condição é importa e a forma que irá iniciar e qual vem depois ultilizando as variavais em vez de usar apenas 01 variavel
        printf("%d x %d = %d\n", i, numero, i * numero);
    }
    



    return 0;
}