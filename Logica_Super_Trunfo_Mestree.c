#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");

    // --- Dados da Carta 1 ---
    char estado1[30], codigo1[10], cidade1[60];
    int populacao1, pontos1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o Código da carta: ");
    scanf("%s", codigo1);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Digite a População: ");
    scanf("%d", &populacao1);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos1);

    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

    // --- Dados da Carta 2 ---
    char estado2[30], codigo2[10], cidade2[60];
    int populacao2, pontos2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o Código da carta: ");
    scanf("%s", codigo2);
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Digite a População: ");
    scanf("%d", &populacao2);
    printf("Digite a Área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos2);

    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // --- Escolha dos atributos ---
    int opcao1, opcao2;

    // Primeiro menu
    printf("\n=== ESCOLHA O 1º ATRIBUTO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    do {
        printf("Digite sua escolha: ");
        scanf("%d", &opcao1);
    } while (opcao1 < 1 || opcao1 > 5);

    // Segundo menu dinâmico
    printf("\n=== ESCOLHA O 2º ATRIBUTO ===\n");
    for (int i = 1; i <= 5; i++) {
        if (i == opcao1) continue;
        switch (i) {
            case 1: printf("1 - População\n"); break;
            case 2: printf("2 - Área\n"); break;
            case 3: printf("3 - PIB\n"); break;
            case 4: printf("4 - Pontos Turísticos\n"); break;
            case 5: printf("5 - Densidade Demográfica (menor vence)\n"); break;
        }
    }
    do {
        printf("Digite sua escolha: ");
        scanf("%d", &opcao2);
    } while (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1);

    // --- Função para obter valor do atributo ---
    float valorAtrib(int opcao, int pop, float area, float pib, int pontos, float densidade) {
        switch (opcao) {
            case 1: return pop;
            case 2: return area;
            case 3: return pib;
            case 4: return pontos;
