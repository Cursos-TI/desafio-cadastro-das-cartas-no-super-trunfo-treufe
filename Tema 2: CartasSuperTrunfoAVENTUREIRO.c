#include <stdio.h>

int main() {
    // criando as variaveis a primeira carta
    char nome1[50];
    unsigned long int populacao1;
    float area1, pib1; // float da area e pib
    int pontos_turisticos1;
    float densidade1; // densidade demografica

    // criando as variaveis para a segunda carta
    char nome2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;
    float densidade2;

    // entrada de dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Nome do país: ");
    scanf(" %49s", nome1); // esse "%49" faz com que o programa lê somente 49 caracteres
    printf("População: ");
    scanf(" %lu", &populacao1); // "%lu" pra ler numeros positivos muito grandes
    printf("Área (km ao quadraedo): ");
    scanf(" %f", &area1);
    printf("PIB ( em trilhões de dólares): ");
    scanf(" %f", &pib1);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos1);

    // entrada de deados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Nome do país: ");
    scanf(" %49s", nome2);
    printf("População: ");
    scanf(" %lu", &populacao2);
    printf("Área (km ao quadrado): ");
    scanf(" %f", &area2);
    printf("PIB (em trilhões de dolares): ");
    scanf(" %f", &pib2);
    printf("Número de pontos turísticos: ");
    scanf(" %d", &pontos_turisticos2);

    // densidade demografica
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // exibir o menu interativo
    int escolha; // criação da variavel da escolha do usuario
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n"); // "\n2", "\n3" quebra de linhas pra proxima linha
    printf("Digite o número do atributo desejado: ");
    scanf(" %d", &escolha); // qual vai ser a escolha do usuario

    // comparaçao das cartas
    printf("\nComparação de cartas (Atributo: ");
    switch (escolha) {
        case 1: // caso 1, comparação de população junto ao if que determina quem venceu
            printf("População)\n");
            printf("%s: %lu habitantes\n", nome1, populacao1); // mostra ao usuario o nome e a população das cartas
            printf("%s: %lu habitantes\n", nome2, populacao2); // mesma coisa aqui
            if (populacao1 > populacao2) printf("Resultado: %s venceu!\n", nome1); // if pra determinar quem vence
            else if (populacao2 > populacao1) printf("Resultado: %s venceu!\n", nome2);// fiz os if em uma linha pois não vi muita preocupação pra entender o codigo
            else printf("Empate!\n"); // se não for nenhuma das alternativas, vai resultar em empate
            break; // finalização
        case 2:
            printf("Área)\n"); // em diante nos casos, vai ser basicamente a mesma coisa, só que com outros atributos
            printf("%s: %.2f km²\n", nome1, area1); // mostrar
            printf("%s: %.2f km²\n", nome2, area2); // mostrar
            if (area1 > area2) printf("Resultado: %s venceu!\n", nome1); // quem vence
            else if (area2 > area1) printf("Resultado: %s venceu!\n", nome2); // quem vence
            else printf("Empate!\n"); // empate
            break; // final
        case 3:
            printf("PIB)\n"); // mesma coisa com o pib
            printf("%s: %.2f trilhões de dólares\n", nome1, pib1);
            printf("%s: %.2f trilhões de dólares\n", nome2, pib2);
            if (pib1 > pib2) printf("Resultado: %s venceu!\n", nome1);
            else if (pib2 > pib1) printf("Resultado: %s venceu!\n", nome2);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Pontos turísticos)\n"); // pontos turisticos
            printf("%s: %d pontos turísticos\n", nome1, pontos_turisticos1);
            printf("%s: %d pontos turísticos\n", nome2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2) printf("Resultado: %s venceu!\n", nome1);
            else if (pontos_turisticos2 > pontos_turisticos1) printf("Resultado: %s venceu!\n", nome2);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Densidade Demográfica)\n"); // densidade demografica
            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);
            if (densidade1 < densidade2) printf("Resultado: %s venceu!\n", nome1);
            else if (densidade2 < densidade1) printf("Resultado: %s venceu!\n", nome2);
            else printf("Empate!\n");
            break;
        default: // se o usuario escolher um numero que não existe, vai resultar nesse default
            printf("Opção inválida. Tente novamente!\n");
    }

    return 0; // acabou
}
