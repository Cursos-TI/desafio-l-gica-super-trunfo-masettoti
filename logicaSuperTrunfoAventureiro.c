#include <stdio.h>

int main () {
    // Dados da carta 1
    char nome1[] = "Brasil";
    int populacao1 = 218000000;
    float area1 = 8510.0;
    float pib1 = 2174000000000000.0;
    int pontos1 = 25;
    float densidade1 = 25616.0;

    // Dados da carta 2
    char nome2[] = "El Salvador";
    int populacao2 = 6310000;
    float area2 = 21000.0;
    float pib2 = 34000000000.0;
    int pontos2 = 18;
    float densidade2 = 300.0;

    int opcao;

    printf("\n### SUPER TRUNFO - COMPARAÇÃO DE PAÍSES ###\n");
    printf("Escolha um atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", nome1, nome2);

    switch (opcao) {
        case 1:
            printf("População: %s = %d | %s = %d\n", nome1, populacao1, nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nome1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("Área: %s = %.2f | %s = %.2f\n", nome1, area1, nome2, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nome1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("PIB: %s = %.2f | %s = %.2f\n", nome1, pib1, nome2, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nome1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("Pontos Turísticos: %s = %d | %s = %d\n", nome1, pontos1, nome2, pontos2);
            if (pontos1 > pontos2)
                printf("Vencedor: %s\n", nome1);
            else if (pontos2 > pontos1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("Densidade Demográfica: %s = %.2f | %s = %.2f\n", nome1, densidade1, nome2, densidade2);
            if (densidade1 < densidade2)
                printf("Vencedor: %s\n", nome1); // menor vence
            else if (densidade2 < densidade1)
                printf("Vencedor: %s\n", nome2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida.\n");
    }

    return 0;
}