#include <stdio.h>

int main() {
    char estado[2][50];
    char codigo[2][4];
    char cidade[2][50];
    unsigned long int populacao[2];
    int pontosturisticos[2];
    float area[2], pib[2];
    float densidade[2];
    float pibpercapita[2];
    float superpoder[2];

    for (int i = 0; i < 2; i++) {
        printf("=== Cadastro da Carta %d ===\n", i + 1);

        printf("Estado de 'A' a 'H': ");
        scanf("%49s", estado[i]);

        printf("Código da Carta (ex: A01, B03): ");
        scanf("%3s", codigo[i]);

        printf("Nome da Cidade: ");
        scanf(" %49[^\n]", cidade[i]); // aceita espaços e limita tamanho

        printf("População: ");
        scanf("%lu", &populacao[i]); // %lu para unsigned long int

        printf("Área (em km²): ");
        scanf("%f", &area[i]);

        printf("PIB (em bilhões de reais): ");
        scanf("%f", &pib[i]);

        printf("Número de Pontos Turísticos: ");
        scanf("%d", &pontosturisticos[i]);

        // Calcular densidade populacional
        densidade[i] = (float)populacao[i] / area[i];

        // Calcular o PIB per Capita
        pibpercapita[i] = (pib[i] * 1e9) / populacao[i];

        // Calcular Super Poder
        superpoder[i] = populacao[i] + area[i] + pib[i] + pontosturisticos[i] + pibpercapita[i] + (1.0f / densidade[i]);
    }

    printf("\n===== Fichas das Cartas =====\n\n");
    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Estado: %s\n", estado[i]);
        printf("Código: %s\n", codigo[i]);
        printf("Nome da Cidade: %s\n", cidade[i]);
        printf("População: %lu\n", populacao[i]);
        printf("Área: %.2f km²\n", area[i]);
        printf("PIB: %.2f bilhões de reais\n", pib[i]);
        printf("Número de Pontos Turísticos: %d\n", pontosturisticos[i]);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade[i]);
        printf("PIB per Capita: %.2f Reais\n", pibpercapita[i]);
        printf("\n");
    }

    printf("\n===== Comparação das cartas =====\n\n");
    printf("População: %s venceu\n", populacao[0] > populacao[1] ? "Carta 1" : "Carta 2");
    printf("Área: %s venceu\n", area[0] > area[1] ? "Carta 1" : "Carta 2");
    printf("PIB: %s venceu\n", pib[0] > pib[1] ? "Carta 1" : "Carta 2");
    printf("Pontos Turísticos: %s venceu\n", pontosturisticos[0] > pontosturisticos[1] ? "Carta 1" : "Carta 2");
    printf("Densidade Populacional: %s venceu\n", densidade[0] > densidade[1] ? "Carta 1" : "Carta 2"); // troca > por < se quiser menor densidade vencendo
    printf("PIB per Capita: %s venceu\n", pibpercapita[0] > pibpercapita[1] ? "Carta 1" : "Carta 2");
    printf("Super Poder: %s venceu\n", superpoder[0] > superpoder[1] ? "Carta 1" : "Carta 2");

    return 0;