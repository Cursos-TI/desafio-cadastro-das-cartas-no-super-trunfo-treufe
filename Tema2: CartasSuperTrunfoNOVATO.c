#include <stdio.h>

int main() {
    //criação das variáveis da primeira carta
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1; // unsigned, pois não existe população negativa, alem de ser numeros grandes
    float area1, pib1;
    int pontos_turisticos1;
    float densidade1, pib_per_capita1;

    //criação das variáveis da segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2, pib_per_capita2;

    // entrada de dados da primeira carta
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

    // entrada dos dados da segunda carta
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

    // calculo do pib e densidade
    densidade1 = populacao1 / area1;
    pib_per_capita1 = pib1 / populacao1;
    densidade2 = populacao2 / area2;
    pib_per_capita2 = pib2 / populacao2;

    // tributo da competição, já está pré definido no codigo, só alterar o atributo nele mesmo
    char atributo_comparacao[] = "População"; // criei essa variavel pra poder escolher qual vai ser a comparação, podendo ser "pib", "população", etc.
    int carta_vencedora; // essa variavel vai armazenar o numero da carta que venceu
    
    if (populacao1 > populacao2) { // se a população da carta 1 for maior q a 2, a 1 vence
        carta_vencedora = 1; // população 1 maior q 2, carta vencedora 1
    } else if (populacao1 < populacao2) { // else if adiciona mais uma condição, diferente de else que qualquer coisa q n esteja na condição é o proprio else
        carta_vencedora = 2; // se não, carta 2
    } else {
        carta_vencedora = 0; // se as condições anteriores estiverem iguais, da empate 
    }

    // resultads
    printf("\nComparação de cartas (Atributo: %s):\n", atributo_comparacao); // mostra qual vai ser o atributo que está sendo avalaido
    printf("Carta 1 - %s (%c): %lu\n", cidade1, estado1, populacao1);//mostra resumidamente a carta 1
    printf("Carta 2 - %s (%c): %lu\n", cidade2, estado2, populacao2);//mostra resumidamente a carta 2
    
    if (carta_vencedora == 1) { // se a variavel "carta_vencedora" for 1, carta 1 ganha
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (carta_vencedora == 2) { // a outra condição é basicamente a primeira, só q pra carta 2
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n"); // se não teve vencedor, empate.
    }

    return 0; // acabou, apenas comentei codigos que foram alterados do "CartasSuperTrunfoMestre.c" do tema 1 para esse no tema2
}
