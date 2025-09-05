#include <stdio.h>
#include <string.h>

int main() {
    // ---------------- CARTA 1 ----------------
    unsigned long int populacao1;
    int pontos1;
    float area1, pib1, densidade1, superpoder1, pibcapita1;
    char cidade1[20], estado1[20], codigo1[5];

    printf("### CARTA 1 ###\n");
    printf("\nUma letra de A-H para o estado:\n");
    scanf("%19s", estado1);

    printf("Código da carta, estado seguido de 01 a 04:\n");
    scanf("%4s", codigo1);

    while (getchar() != '\n');

    printf("Qual a cidade?\n");
    fgets(cidade1, 20, stdin);
    cidade1[strcspn(cidade1, "\n")] = 0;

    printf("Quantos habitantes na cidade?\n");
    scanf("%lu", &populacao1);

    printf("Qual a área em km²?\n");
    scanf("%f", &area1);

    printf("Qual o PIB?\n");
    scanf("%f", &pib1);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &pontos1);

    densidade1 = populacao1 / area1;
    pibcapita1 = pib1 / populacao1;
    superpoder1 = (float)populacao1 + area1 + pib1 + (float)pontos1 + pibcapita1 + (1 / densidade1);

    // ---------------- CARTA 2 ----------------
    unsigned long int populacao2;
    int pontos2;
    float area2, pib2, densidade2, superpoder2, pibcapita2;
    char cidade2[20], estado2[20], codigo2[5];

    printf("\n### CARTA 2 ###\n");
    printf("\nUma letra de A-H para o estado:\n");
    scanf("%19s", estado2);

    printf("Código da carta, estado seguido de 01 a 04:\n");
    scanf("%4s", codigo2);

    while (getchar() != '\n');

    printf("Qual a cidade?\n");
    fgets(cidade2, 20, stdin);
    cidade2[strcspn(cidade2, "\n")] = 0;

    printf("Quantos habitantes na cidade?\n");
    scanf("%lu", &populacao2);

    printf("Qual a área em km²?\n");
    scanf("%f", &area2);

    printf("Qual o PIB?\n");
    scanf("%f", &pib2);

    printf("Quantidade de pontos turísticos:\n");
    scanf("%d", &pontos2);

    densidade2 = populacao2 / area2;
    pibcapita2 = pib2 / populacao2;
    superpoder2 = (float)populacao2 + area2 + pib2 + (float)pontos2 + pibcapita2 + (1 / densidade2);

    // ---------------- RESULTADOS CARTAS ----------------
    printf("\n### RESULTADOS DA CARTA 1 ###\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Habitantes: %lu\n", populacao1);
    printf("Área em Km²: %.2fKm²\n", area1);
    printf("PIB da cidade: %.2f\n", pib1);
    printf("Pontos turísticos: %d\n", pontos1);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibcapita1);

    printf("\n### RESULTADOS DA CARTA 2 ###\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Habitantes: %lu\n", populacao2);
    printf("Área em Km²: %.2fKm²\n", area2);
    printf("PIB da cidade: %.2f\n", pib2);
    printf("Pontos turísticos: %d\n", pontos2);
    printf("Densidade populacional: %.2f hab/Km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibcapita2);

    // ---------------- MENU DE ATRIBUTOS ----------------
    int escolha1, escolha2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    printf("\n### ESCOLHA DE ATRIBUTOS ###\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n");

    printf("Escolha o primeiro atributo: ");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
    switch (escolha1) {
        case 1: printf("2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n"); break;
        case 2: printf("1 - População\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n"); break;
        case 3: printf("1 - População\n2 - Área\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n6 - PIB per Capita\n"); break;
        case 4: printf("1 - População\n2 - Área\n3 - PIB\n5 - Densidade Demográfica\n6 - PIB per Capita\n"); break;
        case 5: printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n6 - PIB per Capita\n"); break;
        case 6: printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos Turísticos\n5 - Densidade Demográfica\n"); break;
        default: printf("Opção inválida!\n"); return 1;
    }
    scanf("%d", &escolha2);

    // ---------------- ATRIBUIR VALORES ----------------
    switch (escolha1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; break;
        case 5: valor1_c1 = densidade1; valor1_c2 = densidade2; break;
        case 6: valor1_c1 = pibcapita1; valor1_c2 = pibcapita2; break;
    }

    switch (escolha2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; break;
        case 5: valor2_c1 = densidade1; valor2_c2 = densidade2; break;
        case 6: valor2_c1 = pibcapita1; valor2_c2 = pibcapita2; break;
    }

    // ---------------- COMPARAÇÃO ----------------
    printf("\n### RESULTADO DA COMPARAÇÃO ###\n");
    printf("Carta 1 (%s) vs Carta 2 (%s)\n", cidade1, cidade2);

    // Primeiro atributo
    if (escolha1 == 5)
        printf("Atributo 1: %s venceu\n", (valor1_c1 < valor1_c2) ? cidade1 : cidade2);
    else
        printf("Atributo 1: %s venceu\n", (valor1_c1 > valor1_c2) ? cidade1 : cidade2);

    // Segundo atributo
    if (escolha2 == 5)
        printf("Atributo 2: %s venceu\n", (valor2_c1 < valor2_c2) ? cidade1 : cidade2);
    else
        printf("Atributo 2: %s venceu\n", (valor2_c1 > valor2_c2) ? cidade1 : cidade2);

    // Soma final (densidade é invertida com sinal negativo para não atrapalhar)
    float soma1 = ((escolha1 == 5) ? -valor1_c1 : valor1_c1) + ((escolha2 == 5) ? -valor2_c1 : valor2_c1);
    float soma2 = ((escolha1 == 5) ? -valor1_c2 : valor1_c2) + ((escolha2 == 5) ? -valor2_c2 : valor2_c2);

    printf("\nSoma dos atributos: %s = %.2f | %s = %.2f\n", cidade1, soma1, cidade2, soma2);

    if (soma1 > soma2) printf("Resultado final: %s venceu!\n", cidade1);
    else if (soma2 > soma1) printf("Resultado final: %s venceu!\n", cidade2);
    else printf("Resultado final: Empate!\n");

    return 0;
}
