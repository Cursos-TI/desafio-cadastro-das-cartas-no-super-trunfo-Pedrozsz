#include <stdio.h>
int main(){

    printf ("Super trunfo!\n");
    
    //variáveis para a carta 1
    char estado1;
    char nomeCidade1[50];
    char codigo1[4];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;
    float densidadePopulacional1;
    float PIBperCapita1;
    float superPoder1;

    //variáveis para a carta 2
     char estado2;
     char nomeCidade2[50];
     char codigo2[4];
     int populacao2;
     float area2;
     float pib2;
     int pontosTuristicos2;
     float densidadePopulacional2;
     float PIBperCapita2;
     float superPoder2;

     //dados da carta 1
     printf ("Carta 1:\n");

     printf("Digite o estado (Letra de A a H): ");
     scanf (" %c", &estado1);

     printf("Digite o código da carta (ex: A01): ");
     scanf("%s", codigo1);

     printf("Digite o nome da cidade: ");
     scanf(" %s", nomeCidade1);

     printf("Digite a população: ");
     scanf("%d", &populacao1);

     printf("Digite a área (em km²): ");
     scanf("%f", &area1);

     printf("Digite o PIB (em bilhões de reais): ");
     scanf("%f", &pib1);

     printf("Digite o número de pontos turísticos: ");
     scanf("%d", &pontosTuristicos1);

     densidadePopulacional1 = populacao1 / area1;
     PIBperCapita1 = pib1 / populacao1;
     superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + PIBperCapita1 + (1.0 / densidadePopulacional1);

     printf("\n");

     //dados carta 2
     printf("Carta 2:\n");

     printf("Digite o estado (letra de A a H): ");
     scanf(" %c", &estado2);

     printf("Digite o código da carta (ex: B02): ");
     scanf("%s", codigo2);

     printf("Digite o nome da cidade: ");
     scanf(" %s", nomeCidade2); 

     printf("Digite a população: ");
     scanf("%d", &populacao2);

     printf("Digite a área (em km²): ");
     scanf("%f", &area2);

     printf("Digite o PIB (em bilhões de reais): ");
     scanf("%f", &pib2);

     printf("Digite o número de pontos turísticos: ");
     scanf("%d", &pontosTuristicos2);

     densidadePopulacional2 = populacao2 / area2;
     PIBperCapita2 = pib2 / populacao2;
     superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + PIBperCapita2 + (1.0 / densidadePopulacional2);

     printf("\n--- Informações Cadastradas ---\n");

     printf("\nCarta 1:\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", nomeCidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %f km²\n", area1);
     printf("PIB: %f bilhões de reais\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
     printf("Densidade Populacional: %.2f\n", densidadePopulacional1);
     printf("PIB per Capita: %.2f\n", PIBperCapita1);
     printf("Super Poder: %.2f\n", superPoder1);

     printf("\nCarta 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", nomeCidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km²\n", area2);
     printf("PIB %f bilhões de reais\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
     printf("Densidade Populacional: %.2f\n", densidadePopulacional2);
     printf("PIB per Capita: %.2f\n", PIBperCapita2);
     printf("Super Poder: %.2f\n", superPoder2);

     int resultado;

     resultado = populacao1 > populacao2;
     printf("População: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

    resultado = area1 > area2;
     printf("Área: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

     resultado = pib1 > pib2;
     printf("PIB: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

     resultado = pontosTuristicos1 > pontosTuristicos2;
     printf("Pontos Turísticos: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

     resultado = densidadePopulacional1 < densidadePopulacional2;  // menor vence
     printf("Densidade Populacional: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

     resultado = PIBperCapita1 > PIBperCapita2;
     printf("PIB per Capita: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

     resultado = superPoder1 > superPoder2;
     printf("Super Poder: Carta %d venceu (%d)\n", resultado ? 1 : 2, resultado);

     return 0;
}
