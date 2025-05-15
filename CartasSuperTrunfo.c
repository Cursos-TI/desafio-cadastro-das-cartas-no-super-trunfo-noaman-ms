#include <stdio.h>

// Definindo uma estrutura para armazenar os dados de cada carta
struct Carta {
    // Letra de 'A' a 'H'
    char estado;
    // Ex: A01, B03
    char codigo[4];
    // Nome da cidade
    char nomeCidade[50];
    // Número de habitantes
    unsigned long int populacao;
    // Área em km²
    float area;
    // PIB em bilhões de reais
    float pib;
    // Quantidade de pontos turísticos
    int pontosTuristicos;
};

int main() {
    // Declaração das duas cartas
    struct Carta carta1, carta2;

    // Leitura da Carta 1
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &carta1.estado);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", carta1.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta1.nomeCidade);  // Lê até a quebra de linha

    printf("Digite a população: ");
    scanf("%lu", &carta1.populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta1.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta1.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Leitura da Carta 2
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &carta2.estado);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", carta2.codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", carta2.nomeCidade);

    printf("Digite a população: ");
    scanf("%lu", &carta2.populacao);

    printf("Digite a área em km²: ");
    scanf("%f", &carta2.area);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &carta2.pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &carta2.pontosTuristicos);
    // Cálculo intermediários
        //Cálculo densidade para Carta 1 e 2 
    float densidade1 = carta1.populacao / carta1.area;
    float densidade2 = carta2.populacao / carta2.area;
        //Cálculo pibPerCapita para Carta 1 e 2 
    float pibPerCapita1 = (carta1.pib * 1000000000) / carta1.populacao;
    float pibPerCapita2 = (carta2.pib * 1000000000) / carta2.populacao;
        //Cálculo superPoder para Carta 1 e 2
    float superPoder1 = (float)carta1.populacao + carta1.area + (carta1.pib * 1000000000.0) +
                        (float)carta1.pontosTuristicos + pibPerCapita1 + (1.0f / densidade1);

    float superPoder2 = (float)carta2.populacao + carta2.area + (carta2.pib * 1000000000.0) +
                        (float)carta2.pontosTuristicos + pibPerCapita2 + (1.0f / densidade2);
    
    

    // Exibição das cartas
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", carta1.estado);
    printf("Código: %s\n", carta1.codigo);
    printf("Nome da Cidade: %s\n", carta1.nomeCidade);
    printf("População: %lu\n", carta1.populacao);
    printf("Área: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhões de reais\n", carta1.pib);
    printf("Número de Pontos Turísticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f real\n", pibPerCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", carta2.estado);
    printf("Código: %s\n", carta2.codigo);
    printf("Nome da Cidade: %s\n", carta2.nomeCidade);
    printf("População: %lu\n", carta2.populacao);
    printf("Área: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhões de reais\n", carta2.pib);
    printf("Número de Pontos Turísticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f real\n", pibPerCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparações
    printf("\n--- Comparação de Cartas ---\n");
    printf("População: Carta 1 venceu (%d)\n", carta1.populacao > carta2.populacao);
    printf("Área: Carta 1 venceu (%d)\n", carta1.area > carta2.area);
    printf("PIB: Carta 1 venceu (%d)\n", carta1.pib > carta2.pib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", carta1.pontosTuristicos > carta2.pontosTuristicos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}
