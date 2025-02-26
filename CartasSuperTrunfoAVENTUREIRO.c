#include <stdio.h>

int main() {
    // variaveis da primeira carta (eu não repeti as anotações do primeiro pra deixar o codigo mais limpo)
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1; // variavel pra calcular a densidade populacional
    float pib_per_capita1; //variavel pra calcular o pib

    // variaveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2; // variavel pra calcular a densidade populacional
    float pib_per_capita2; //variavel pra calcular o pib

    // entrada de dados para a primeira carta (eu não repeti as anotações do primeiro pra deixar o codigo mais limpo)
    printf("Cadastro da Carta 1:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf(" %s", codigo1);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade1);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);
    printf("Digite a area da cidade (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    // entrada dde dados para a segunda carta (eu não repeti as anotações do primeiro pra deixar o codigo mais limpo)
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf(" %s", codigo2);
    printf("Digite o nome da cidade: ");
    scanf(" %s", cidade2);
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao2);
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area2);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // calculo da densidade opulacional e PIB per capita
    densidade_populacional1 = populacao1 / area1; // calculo de densidade população divido pela area
    pib_per_capita1 = pib1 / populacao1; // calculo pro pib per capita, pib divido pela população
    densidade_populacional2 = populacao2 / area2; // mesma coisa da primeira
    pib_per_capita2 = pib2 / populacao2; // mesma coisa da primeira

    // exibição dos dados da primeira carta (eu não repeti as anotações do primeiro pra deixar o codigo mais limpo)
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1); // printf exibindo a densidade populacional (alteração feita no nivel aventureiro)
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1); // printf exibindo o pib per capita (alteração feita no nivel aventureiro)

    // exibição dos dados da segunda carta (eu não repeti as anotações do primeiro pra deixar o codigo mais limpo)
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2); // printf exibindo a densidade populacional (alteração feita no nivel aventureiro)
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2); // printf exibindo o pib per capita (alteração feita no nivel aventureiro)

    return 0;

    /*as únicas alterações feitas foi somente calcular a densidade e pib, e logo depois exibir elas.*/
}
