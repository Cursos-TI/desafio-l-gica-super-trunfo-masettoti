#include <stdio.h>

int main() {
    // Dados da Carta 1
    char estado1[] = "SP";
    char codigo1[] = "C001";
    char cidade1[] = "São Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699000000000.0;
    int pontosTuristicos1 = 20;

    // Dados da Carta 2
    char estado2[] = "RJ";
    char codigo2[] = "C002";
    char cidade2[] = "Rio de Janeiro";
    int populacao2 = 6700000;
    float area2 = 1182.30;
    float pib2 = 400000000000.0;
    int pontosTuristicos2 = 18;

    // Cálculo de Densidade Populacional
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    // Cálculo de PIB per capita
    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    // Exibindo os dados das cartas
    printf("Carta 1 - %s (%s)\n", cidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.2f\n", pibPerCapita1);
    printf("\n");

    printf("Carta 2 - %s (%s)\n", cidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.2f\n", pibPerCapita2);
    printf("\n");

    // Comparação (atributo escolhido: PIB per capita)
    printf("Comparacao de cartas (Atributo: PIB per capita):\n");

    printf("Carta 1 - %s (%.2f)\n", cidade1, pibPerCapita1);
    printf("Carta 2 - %s (%.2f)\n", cidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}