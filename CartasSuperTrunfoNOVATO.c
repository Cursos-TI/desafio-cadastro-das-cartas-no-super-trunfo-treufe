#include <stdio.h> // instalação da biblioteca

int main() {
    // variáveis da primeira carta
    char estado1; // variavel pro nome do estado
    char codigo1[4]; // 4 arrays. 4 posições que armazena os codigos "A01", "B02".......
    char cidade1[50]; // 50 caracteres pra nomes possivelmente longos
    int populacao1; // int pra numeros inteiros
    float area1; //float = ponto flutuante
    float pib1;
    int pontos_turisticos1;

    // variáveis da segunda carta
    // mesma coisa que a primeira, só mudando os nomes das variaveis
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    // Entrada de dados que o usuario colocar da primeira carta
    // somente printf e scanf
    // coloquei um pequeno espaço antes das "%" pra manter visualmente "limpo"
    printf("Cadastro da Carta 1:\n"); // usuario vai colocar os dados da primeira carta
    printf("Digite o estado (A-H): "); // o estado de A até H
    scanf(" %c", &estado1); // armazena o que o usuario colocou no estado, armazenado na variavel "estado1"
    printf("Digite o código da carta (ex: A01): "); // código da carta
    scanf(" %s", codigo1); // armazenamento do codigo na variavel "codigo1"
    printf("Digite o nome da cidade: "); //nome da cidade....
    scanf(" %s", cidade1); // armazenamento.....
    printf("Digite a população da cidade: ");
    scanf(" %d", &populacao1);
    printf("Digite a área da cidade (km²): ");
    scanf(" %f", &area1);
    printf("Digite o PIB da cidade: ");
    scanf(" %f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1); // até aqui é a entrada de dados da primeira carta

    // Entrada de dados que o usuario colocar da segunda carta
    printf("\nCadastro da Carta 2:\n"); // mesmo sentido da primeira carta, pedindo pro usuario colocar os dados e as variaveis armazenando
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

    // mostrar os dados da primeira carta
    printf("\nCarta 1:\n"); // mostrar os dados da primeira carta. \n pula a linha pra n ficar tudo junto
    printf("Estado: %c\n", estado1); // %c pra mostrar somente 1 letra que é de A até H
    printf("Código: %s\n", codigo1); // %s pra mostrar diversos caracteres
    printf("Nome da Cidade: %s\n", cidade1); // imprime na tela o nome da cidade
    printf("População: %d\n", populacao1); // %d pra imprimir um numero inteiro, a população
    printf("Área: %.2f km²\n", area1); // ".2f" pra mostrar mais 2 numeros depois do "."
    printf("PIB: %.2f bilhões de reais\n", pib1); // imprime a quantidade de pib
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1); // imprime a quantidade de pontos turisticos que o usuario colocou

    // mostrar os dados da segunda carta (mesma coisa da primeira carta, só mudando o tipo das informações)
    printf("\nCarta 2:\n"); 
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0; // informar para o codigo que terminou tudo oq tinha que ser feito
    /* coloquei todas essas anotações por que pediram, se fosse um trabalho pra uma empresa de verdade,
    colocaria anotações só em coisas especificas ou em algo que não seria tao facil de entender de primeira.
    */
}
