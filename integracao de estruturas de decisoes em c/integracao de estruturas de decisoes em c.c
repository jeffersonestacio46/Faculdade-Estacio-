#include <stdio.h>

int main (){
    int opcao;
    float nota1, nota2, media;

    printf("Menu de gerenciamento de estudantes:\n");
    printf("1. Calcular medio\n");
    printf("2. Determinar status\n");
    printf("3. Sair\n");
    printf("Escolha uma opção:\n");
    scanf("%d", &opcao);
    
    switch (opcao)
    {
    case 1: 
    printf("Calcular a media\n");
    printf("Digite a primeira nota:\n");
    scanf("%f", &nota1);
    printf("Digite a segunda nota:\n");
    scanf("%f", &nota2);
    //Vai testar condição se a nota é >= a zero ou e <= 10
    if((nota1 >= 0 && nota1 <= 10) && (nota2 >= 0 && nota2 <= 10)){
        media = (nota1 + nota2) / 2;
        printf("A media é: %.2f\n", media);
    }else{
        printf("Entrada de nota errada\n");
    }
    break;
    
    case 2:
    printf("Determinar o status do aluno\n");
    printf("Digite a sua media:\n");
    scanf("%f", &media);
    //media >= 5 ? printf("Você foi aprovado!\n") : printf("Você foi reprovado!\n");

    if(media >= 7){
        printf("Você foi aprovado!\n");
    }else if (media >=5){
        printf("Você foi para recuperação!\n");
    }else {
        printf("Você foi reprovador!\n");
    }
    break;
    
    case 3:
    printf("Saindo do programa...\n");
    
    default:
    printf("Opção invalida");
        break;
    }

}