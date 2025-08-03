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

    // cidade 2
    char codigoCidade2[10];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

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

    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\n", codigoCidade1);
    printf("Nome: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\n", codigoCidade2);
    printf("Nome: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
