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

        printf("Estado de 'A' a 'H': \n");
        scanf("%s", estado[i]);

        printf("Código da Carta (ex: A01, B03): \n");
        scanf( "%s", codigo[i]);

        printf("Nome da Cidade: \n");
        scanf(" %49[^\n]", cidade[i]); // agora aceita espaços

        printf("População: \n");
        scanf( "%d", &populacao[i]);

        printf("Área (em km²): \n");
        scanf(" %f", &area[i]);

        printf("PIB (em bilhões de reais): \n");
        scanf(" %f", &pib[i]);

        printf("Número de Pontos Turísticos: \n");
        scanf("%d", &pontosturisticos[i]);

        //calcular densidade populacional;
        densidade[i] = (float)populacao[i] / area[i];

        //calcular o PIB per Capita;
        pibpercapita[i] = (pib[i] * 1e9) / populacao[i];

        //super poder
        superpoder[i] = populacao[i] + area[i] + pib[i] + pontosturisticos[i] + pibpercapita[i] +  (1.0f / densidade[i]);
        

    }

    printf("\n===== Fichas das Cartas =====\n\n");

    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n\n", i + 1);
        printf("Estado: %s\n", estado[i]);
        printf("Código: %s\n", codigo[i]);
        printf("Nome da Cidade: %s\n", cidade[i]);
        printf("População: %d\n", populacao[i]);
        printf("Área: %.2f km²\n", area[i]);
        printf("PIB: %.2f bilhões de reais\n", pib[i]);
        printf("Número de Pontos Turísticos: %d\n", pontosturisticos[i]);
        printf("Densidade Populacional: %.2f hab/km²\n", densidade[i]);
        printf("PIB per Capita: %.2f Reais\n\n", pibpercapita[i]);

    }

double CARTA1;
double CARTA2;
int Resultado;


       printf("\n===== Comparação das cartas =====\n\n");

       printf("População: Carta (%d) Venceu\n", populacao[0] > populacao[1] ? 1 : 2);
       printf("Área: Carta (%d) Venceu\n", area[0] > area[1] ? 1: 2);
       printf("PIB: Carta (%d) Venceu\n", pib[0] > pib[1] ? 1: 2);
       printf("Pontos Turísticos: Carta (%d) Venceu\n", pontosturisticos[0] > pontosturisticos[1] ? 1: 2);
       printf("Densidade Populacional: Carta (%d) Venceu\n", densidade[0] > densidade[1] ? 1: 2);
       printf("PIB per Capita: Carta (%d) Venceu\n", pibpercapita[0] > pibpercapita[1] ? 1: 2);
       printf("Super Poder: Carta (%d) Venceu\n", superpoder[0] > superpoder[1] ? 1: 2);






}


