#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
  // Variáveis para a Carta 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Variáveis para a Carta 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    printf("=== SUPER TRUNFO - COMPARAÇÃO DE CARTAS  ===\n");

    // Cadastro da Carta 1
    printf("\n--- Cadastro da Carta 1 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Código (ex: %c01): ", estado1);
    scanf("%3s", codigo1);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cadastro da Carta 2
    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código (ex: %c01): ", estado2);
    scanf("%3s", codigo2);
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição das cartas
    printf("\n=== CARTAS CADASTRADAS ===\n");

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %lu habitantes\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %lu habitantes\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);

    // Comparação das cartas
    printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");

    // Escolha do atributo para comparação (fixo no código)
    char atributoComparacao = 'P'; // Pode ser: 'P'opulação, 'A'rea, 'I'PIB, 'T'urismo

    if(atributoComparacao == 'P') {
        printf("Critério: População\n");
        if(populacao1 > populacao2) {
            printf("Vencedor: Carta 1 - %s\n", cidade1);
        } else if(populacao2 > populacao1) {
            printf("Vencedor: Carta 2 - %s\n", cidade2);
        } else {
            printf("Empate! Ambas as cartas têm a mesma população.\n");
        }
    }
    else if(atributoComparacao == 'A') {
        printf("Critério: Área\n");
        if(area1 > area2) {
            printf("Vencedor: Carta 1 - %s\n", cidade1);
        } else if(area2 > area1) {
            printf("Vencedor: Carta 2 - %s\n", cidade2);
        } else {
            printf("Empate! Ambas as cartas têm a mesma área.\n");
        }
    }
    else if(atributoComparacao == 'I') {
        printf("Critério: PIB\n");
        if(pib1 > pib2) {
            printf("Vencedor: Carta 1 - %s\n", cidade1);
        } else if(pib2 > pib1) {
            printf("Vencedor: Carta 2 - %s\n", cidade2);
        } else {
            printf("Empate! Ambas as cartas têm o mesmo PIB.\n");
        }
    }
    else if(atributoComparacao == 'T') {
        printf("Critério: Pontos Turísticos\n");
        if(pontosTuristicos1 > pontosTuristicos2) {
            printf("Vencedor: Carta 1 - %s\n", cidade1);
        } else if(pontosTuristicos2 > pontosTuristicos1) {
            printf("Vencedor: Carta 2 - %s\n", cidade2);
        } else {
            printf("Empate! Ambas as cartas têm o mesmo número de pontos turísticos.\n");
        }
    }
    else {
        printf("Critério de comparação inválido!\n");
    }

    return 0;
}