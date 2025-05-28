#include <stdio.h>

int main (){
    char *nomes[3] = {"Alice", "Bob", "Carol"};

    for(int i = 0; i < 3; i++){
        printf("%s\n", nomes[i]);//O [i] englobar todos os nomes acima e organiza eles em um coluna e um abaixo do outro
    }
    return 0;
}