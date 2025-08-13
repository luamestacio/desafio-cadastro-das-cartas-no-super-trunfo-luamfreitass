#include <stdio.h>

/*🚩 Objetivo: Criar um programa em C que cadastra duas cartas com os seguintes atributos:

População (int)
Área (float)
PIB (float)
Número de pontos turísticos (int)*/

int main(){
    //Carta 1
    char estado1;
    char codigo1[4]; 
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    //carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turisticos2;

    //Carta 1
    printf("Carta 1\n");

    printf("Digite o estado: \n");
    scanf("%c", &estado1);

    printf("Digite o Código: \n");
    scanf("%3s", &codigo1);

     getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade1, 50, stdin);

    printf("Digite a população: \n");
    scanf("%d", &populacao1);

    printf("Digite a area: \n");
    scanf("%f", &area1);
  
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);

    printf("Digite aos números de pontos turísticos: \n");
    scanf("%d", &turisticos1);


    //Carta 2
    printf("Carta 2\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código: \n");
    scanf("%3s", &codigo2);

     getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade2, 50, stdin);

    printf("Digite a populuação: \n");
    scanf("%d", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);
  
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite aos números de pontos turísticos: \n");
    scanf("%d", &turisticos2);

    //Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.

    printf("\nCarta 1\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da cidade:%s", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", turisticos1);

    printf("\nCarta 2\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da cidade:%s", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);


    return 0;
}