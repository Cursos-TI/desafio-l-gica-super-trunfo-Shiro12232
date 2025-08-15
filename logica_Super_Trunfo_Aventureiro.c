#include <stdio.h>
#include <stdlib.h>

int main() {
    system("chcp 65001 > nul");

    // --- Dados da Carta 1 ---
    char estado1[30];
    char codigo1[10];
    char cidade1[60];
    int populacao1;
    float area1, pib1, densidade_populacional1, pib_per_capita1;
    int pontos1;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado1);
    printf("Digite o Codigo da carta: ");
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
    char estado2[30];
    char codigo2[10];
    char cidade2[60];
    int populacao2;
    float area2, pib2, densidade_populacional2, pib_per_capita2;
    int pontos2;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Digite o Estado: ");
    scanf(" %[^\n]", estado2);
    printf("Digite o Codigo da carta: ");
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

    // --- Menu ---
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica (menor vence)\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");
    switch (opcao) {
        case 1: // População
            printf("População %s: %d\n", cidade1, populacao1);
            printf("População %s: %d\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("%s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Área %s: %.2f km²\n", cidade1, area1);
            printf("Área %s: %.2f km²\n", cidade2, area2);
            if (area1 > area2) {
                printf("%s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("PIB %s: %.2f bilhões\n", cidade1, pib1);
            printf("PIB %s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("%s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Pontos turísticos %s: %d\n", cidade1, pontos1);
            printf("Pontos turísticos %s: %d\n", cidade2, pontos2);
            if (pontos1 > pontos2) {
                printf("%s venceu!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("%s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (menor vence)
            printf("Densidade %s: %.2f hab/km²\n", cidade1, densidade_populacional1);
            printf("Densidade %s: %.2f hab/km²\n", cidade2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2) {
                printf("%s venceu! (menor densidade)\n", cidade1);
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("%s venceu! (menor densidade)\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
