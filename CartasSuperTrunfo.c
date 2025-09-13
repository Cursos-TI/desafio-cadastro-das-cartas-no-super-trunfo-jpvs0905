#include <stdio.h>
#include <string.h>

int main() {

    // cidade 1
    char codigoCidade1[10];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;
    float superPoder1;

    // cidade 2
    char codigoCidade2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;
    float superPoder2;

    // cadastro da carta 01
    printf("Cadastro da Carta 1:\n");

    printf("Código da cidade: ");
    fgets(codigoCidade1, sizeof(codigoCidade1), stdin);
    codigoCidade1[strcspn(codigoCidade1, "\n")] = '\0';

    printf("Nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (em km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    getchar(); // limpa o \n que ficou no buffer após o último scanf

    // cadastro da carta 02
    printf("Cadastro da Carta 2:\n");

    printf("Código da cidade: ");
    fgets(codigoCidade2, sizeof(codigoCidade2), stdin);
    codigoCidade2[strcspn(codigoCidade2, "\n")] = '\0';

    printf("Nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (em km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional1 = populacao1 / area1;
    densidadePopulacional2 = populacao2 / area2;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1.0f / densidadePopulacional1);
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1.0f / densidadePopulacional2);;

    // menu interativo
    int opcao;
    printf("\n=== MENU DE COMPARAÇÃO ===\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Escolha o atributo: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s\n", nomeCidade1, nomeCidade2);

    switch (opcao) {
        case 1: // População
            printf("População: %d x %d\n", populacao1, populacao2);
            if (populacao1 > populacao2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 2: // Área
            printf("Área: %.2f km² x %.2f km²\n", area1, area2);
            if (area1 > area2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (area2 > area1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 3: // PIB
            printf("PIB: %.2f x %.2f\n", pib1, pib2);
            if (pib1 > pib2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pib2 > pib1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 4: // Pontos turísticos
            printf("Pontos turísticos: %d x %d\n", pontosTuristicos1, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2)
                printf("Vencedor: %s\n", nomeCidade1);
            else if (pontosTuristicos2 > pontosTuristicos1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        case 5: // Densidade demográfica (regra invertida)
            printf("Densidade demográfica: %.2f hab/km² x %.2f hab/km²\n", densidadePopulacional1, densidadePopulacional2);
            if (densidadePopulacional1 < densidadePopulacional2) // menor vence
                printf("Vencedor: %s\n", nomeCidade1);
            else if (densidadePopulacional2 < densidadePopulacional1)
                printf("Vencedor: %s\n", nomeCidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}

