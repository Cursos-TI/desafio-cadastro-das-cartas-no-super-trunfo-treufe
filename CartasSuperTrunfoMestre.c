#include <stdio.h>

int main() {

    // variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1, super_poder1; // criação de variaves, tambem pra calculo do poder

    // variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2, super_poder2; // criação de variaves, tambem pra calculo do poder

    // dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a população da cidade: ");
    scanf(" %lu", &populacao1);
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    // dados da sgunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a população da cidade: ");
    scanf(" %lu", &populacao2);
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // calculo de densidade populacional e PIB per capita
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // calculo do poder
    super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1.0 / densidade1); 
    /*calculo de poder, população + area + PIB + ponto turis. + PIB per capita + quanto menor a densidade mais poder (1.0 / densidade) 
    pra calcular, o 1.0 mantem em float e divide pela densidade*/
    super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_per_capita2 + (1.0 / densidade2);

    // exibir os resultados primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1); //exibir o poder, o "%.2f" pra mostrar apenas 2 algorismos depois do ".", e o "\n" pra pular linha

    // exibir os resultados segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2); // mesma coisa na primeira carta

    // comparar as cartas
    printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (1)\n", (populacao1 > populacao2) ? 1 : 2); //cria a condição da popul1 maior que a popul2, se for verdadeiro, retorna 1, se falso, retorna 2
    printf("Área: Carta %d venceu (1)\n", (area1 > area2) ? 1 : 2); //basicamente a mesma cosa que acontece com a primeira condição, só que em outros tópicos
    printf("PIB: Carta %d venceu (1)\n", (pib1 > pib2) ? 1 : 2); // repetir as mesmas condições para todas, mostrando quem que venceu e quem perdeu
    printf("Pontos Turísticos: Carta %d venceu (1)\n", (pontos_turisticos1 > pontos_turisticos2) ? 1 : 2);
    printf("Densidade Populacional: Carta %d venceu (0)\n", (densidade1 < densidade2) ? 1 : 2);
    printf("PIB per Capita: Carta %d venceu (1)\n", (pib_per_capita1 > pib_per_capita2) ? 1 : 2);
    printf("Super Poder: Carta %d venceu (1)\n", (super_poder1 > super_poder2) ? 1 : 2);

    return 0;

    //apenas comentei as alterações que foram feitas do nivel aventureiro pra mestre
}
