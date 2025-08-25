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

    // Comparação das cartas
      printf("\nComparação de Cartas:\n");

    printf("População: Carta %d venceu (%d)\n",
           (populacao1 > populacao2) ? 1 : 2,
           (populacao1 > populacao2) ? 1 : 0);

    printf("Área: Carta %d venceu (%d)\n",
           (area1 > area2) ? 1 : 2,
           (area1 > area2) ? 1 : 0);

    printf("PIB: Carta %d venceu (%d)\n",
           (pib1 > pib2) ? 1 : 2,
           (pib1 > pib2) ? 1 : 0);

    printf("Pontos Turísticos: Carta %d venceu (%d)\n",
           (pontosTuristicos1 > pontosTuristicos2) ? 1 : 2,
           (pontosTuristicos1 > pontosTuristicos2) ? 1 : 0);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           (densidadePopulacional1 < densidadePopulacional2) ? 1 : 2,
           (densidadePopulacional1 < densidadePopulacional2) ? 1 : 0);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           (pibPerCapita1 > pibPerCapita2) ? 1 : 2,
           (pibPerCapita1 > pibPerCapita2) ? 1 : 0);

    printf("Super Poder: Carta %d venceu (%d)\n",
           (superPoder1 > superPoder2) ? 1 : 2,
           (superPoder1 > superPoder2) ? 1 : 0);

    return 0;
}