#include <stdio.h>

int main() { 

    printf("Super trunfo!\n");
    
    // Variáveis para a carta 1
    char estado1;
    char nomeCidade1[50];
    char codigo1[4];
    unsigned long int populacao1;
    double area1;
    double pib1;
    int pontosTuristicos1;
    double densidadePopulacional1;
    double PIBperCapita1;
    double superPoder1;

    // Variáveis para a carta 2
    char estado2;
    char nomeCidade2[50];
    char codigo2[4];
    unsigned long int populacao2;
    double area2;
    double pib2;
    int pontosTuristicos2;
    double densidadePopulacional2;
    double PIBperCapita2;
    double superPoder2;

    // Dados da carta 1
    printf("Carta 1:\n");
    printf("Digite o estado (Letra de A a H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade1);

    printf("Digite a população: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%lf", &area1);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%lf", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    densidadePopulacional1 = populacao1 / area1;
    PIBperCapita1 = (pib1 * 1000000000.0) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + PIBperCapita1 + (1.0 / densidadePopulacional1);

    printf("\n");

    // Dados da carta 2
    printf("Carta 2:\n");
    printf("Digite o estado (letra de A a H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s", nomeCidade2); 

    printf("Digite a população: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%lf", &area2);

    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%lf", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional2 = populacao2 / area2;
    PIBperCapita2 = (pib2 * 1000000000.0) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + PIBperCapita2 + (1.0 / densidadePopulacional2);

    printf("\n--- Informações Cadastradas ---\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f\n", PIBperCapita1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f\n", PIBperCapita2);
    printf("Super Poder: %.2f\n", superPoder2);

    int escolha;
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    switch (escolha) {
        case 1: 
            if (populacao1 > populacao2)
                printf("Carta 1 (%s) venceu! População: %lu\n", nomeCidade1, populacao1);
            else if (populacao2 > populacao1)
                printf("Carta 2 (%s) venceu! População: %lu\n", nomeCidade2, populacao2);
            else
                printf("Empate na população!\n");
            break;

        case 2: 
            if (area1 > area2)
                printf("Carta 1 (%s) venceu! Área: %.2f km²\n", nomeCidade1, area1);
            else if (area2 > area1)
                printf("Carta 2 (%s) venceu! Área: %.2f km²\n", nomeCidade2, area2);
            else
                printf("Empate na área!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}