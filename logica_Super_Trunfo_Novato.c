#include <stdio.h>

int main() {
 
    char estado1[30];
    char codigo1[10];
    char cidade1[60];
    int populacao1;
    double area1;
    double pib1;
    double densidade_populacional1;
    double pib_per_capita1;
    int pontos1;

    printf("Digite o Estado: \n");
    scanf(" %[^\n]", estado1);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade1);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao1);

    printf("Digite a Area (em km²): \n");
    scanf("%lf", &area1);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib1);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos1);
    
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;

 
    char estado2[30];
    char codigo2[10];
    char cidade2[60];
    int populacao2;
    double area2;
    double pib2;
    double densidade_populacional2;
    double pib_per_capita2;
    int pontos2;

    printf("\nDigite o Estado: \n");
    scanf(" %[^\n]", estado2);

    printf("Digite o Codigo da carta: \n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade: \n");
    scanf(" %[^\n]", cidade2);

    printf("Digite a Populacao: \n");
    scanf("%d", &populacao2);

    printf("Digite a Area (em km²): \n");
    scanf("%lf", &area2);

    printf("Digite o PIB: \n");
    scanf("%lf", &pib2);

    printf("Digite o Numero de Pontos Turisticos: \n");
    scanf("%d", &pontos2);
    
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2lf km²\n", area1);
    printf("PIB: %.2lf bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade_populacional1);
    printf("PIB per capita: %.2lf\n", pib_per_capita1);

    
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade_populacional2);
    printf("PIB per capita: %.2lf\n", pib_per_capita2);

    
    printf("\n==== RESULTADO COMPARAÇÃO ====\n");
    if (populacao1 > populacao2) {
        printf("Carta 1 venceu na População!\n");
    } else if (populacao2 > populacao1) {
        printf("Carta 2 venceu na População!\n");
    } else {
        printf("As duas cartas têm a mesma População!\n");
    }

    return 0;
}
