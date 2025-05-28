#include <stdio.h>
#include <string.h>

#define TAMANHO_NOME 50

// Estrutura para representar uma carta
struct Carta {
    char nome_cidade[TAMANHO_NOME];
    int populacao;
    float area;
    float pib;
    int num_pontos_turisticos;
};

int main() {
    // Declaração de um array de estruturas para armazenar as duas cartas
    struct Carta cartas[2];

    // Loop para cadastrar os dados de cada carta
    for (int i = 0; i < 2; i++) {
        printf("Cadastro da Carta %d:\n", i + 1);

        printf("Nome da Cidade: ");
        fgets(cartas[i].nome_cidade, TAMANHO_NOME, stdin);
        // Remover a quebra de linha lida pelo fgets
        cartas[i].nome_cidade[strcspn(cartas[i].nome_cidade, "\n")] = 0;

        printf("População: ");
        scanf("%d", &cartas[i].populacao);
        getchar(); // Consumir a quebra de linha deixada pelo scanf

        printf("Área (em km²): ");
        scanf("%f", &cartas[i].area);
        getchar();

        printf("PIB (em bilhões de reais): ");
        scanf("%f", &cartas[i].pib);
        getchar();

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].num_pontos_turisticos);
        getchar();

        printf("\n"); // Adiciona uma linha em branco entre os cadastros
    }

    // Exibição dos resultados
    printf("--- Resultados do Cadastro ---\n\n");

    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Nome da Cidade: %s\n", cartas[i].nome_cidade);
        printf("População: %d habitantes\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].num_pontos_turisticos);
        printf("\n");
    }

    return 0;
}