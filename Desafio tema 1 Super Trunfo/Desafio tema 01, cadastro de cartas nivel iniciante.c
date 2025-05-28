#include <stdio.h>

int main(){
    char estado [10];
    char codigo_da_carta[5];
    char nome_da_cidade[20];
    int populacao;
    float area_em_m2;
    float PIB;
    int numero_de_pontos_turisticos;

    //Coletando dados informados pelo usuario
    printf("Digite o nome do estado:\n");
    scanf("%s", &estado);
    printf("Digite o codigo da carta:\n");
    scanf("%s", &codigo_da_carta);
    printf("Digite o nome da cidade:\n");
    scanf("%s",&nome_da_cidade);
    printf("Digite a população:\n");
    scanf("%d", &populacao);
    printf("Digite a area em m²:\n");
    scanf("%f", &area_em_m2);
    printf("Digite o PIB:\n");
    scanf("%f", &PIB);
    printf("Digite a quantidade de pontos turisticos:\n");
    scanf("%d", &numero_de_pontos_turisticos);

    //Imprimindo dados que o usuario informou:
    printf("O nome do estado é: %s\n", estado);
    printf("O codigo da carta é: %s\n", codigo_da_carta);
    printf("O nome da cidade é: %s\n", nome_da_cidade);
    printf("O numero da população é: %d mil de pessoas\n", populacao);
    printf("O tamanho da area em m² é: %.2f m²\n", area_em_m2);
    printf("O PIB é de: %.2f milhões de reais\n", PIB);
    printf("Possui o número de %d pontos turisticos\n", numero_de_pontos_turisticos);
}