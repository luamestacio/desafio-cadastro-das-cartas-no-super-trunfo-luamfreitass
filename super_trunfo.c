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
    unsigned long int populacao1; 
    float area1;
    float pib1; 
    int turisticos1;
    //desafio aventureiro
    float densidade1;
    float capita1;
    // Desafio Mestre
    float inversoDensidade1;

    //carta 2
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    //desafio aventureiro
    float densidade2;
    float capita2;
    //Desafio Mestre
    float inversoDensidade2;

    //Carta 1
    printf("Carta 1\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado1);

    printf("Digite o Código: \n");
    scanf(" %3s", codigo1);

     getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade1, 50, stdin);

    printf("Digite a população: \n");
    scanf(" %ld", &populacao1);

    printf("Digite a area: \n");
    scanf(" %f", &area1);
  
    printf("Digite o PIB: \n");
    scanf(" %f", &pib1);

    printf("Digite aos números de pontos turísticos: \n");
    scanf(" %d", &turisticos1);



    //Carta 2
    printf("Carta 2\n");

    printf("Digite o estado: \n");
    scanf(" %c", &estado2);

    printf("Digite o Código: \n");
    scanf("%3s", codigo2);

     getchar();

    printf("Digite o nome da cidade: \n");
    fgets(nomeCidade2, 50, stdin);

    printf("Digite a populuação: \n");
    scanf("%ld", &populacao2);

    printf("Digite a area: \n");
    scanf("%f", &area2);
  
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);

    printf("Digite aos números de pontos turísticos: \n");
    scanf("%d", &turisticos2);


    //Calculo Desindade populacional e PIB per Capita Carta 1

    densidade1 = (float)populacao1/area1 ; // População / area
    capita1 = (float) pib1/populacao1; // PIB / população

    //Calculo Desindade populacional e PIB per Capita Carta 2

    densidade2 = (float)populacao2/area2 ; // População / area
    capita2 = (float) pib2/populacao2; // PIB / população


    // Calculo Inverso densidade populacional 1

    inversoDensidade1 = (float)1/densidade1;

    // Calculo Inverso densidade populacional 2

    inversoDensidade2 = (float)1/densidade2;

    // Calcular Super Poder Carta 1

    float superPoder1 = (float)populacao1 + area1 + pib1 + (float)turisticos1 + capita1 + inversoDensidade1;

    // Calcular Super Poder Carta 2

   float superPoder2 = (float)populacao2 + area2 + pib2 + (float)turisticos2 + capita2 + inversoDensidade2;

   // Calculo comparação Desafio tema 2

  /* int populacao = populacao1 > populacao2;
   int area = area1 > area2;
   int pib = pib1 > pib2;
   int turistico = turisticos1 > turisticos2;
   int densidade = densidade1 < densidade2;
   int capita = capita1 > capita2;
   int superPoder = superPoder1 > superPoder2;*/

   // Calculo carta desafio tema 2

  /* int cartaPopulacao = 2 - (populacao1 > populacao2);
   int cartaArea = 2 - (area1 > area2);
   int cartaPib = 2 - (pib1 > pib2);
   int cartaTuristico = 2 - (turisticos1 > turisticos2);
   int cartaDensidade = 2 - (densidade1 < densidade2);
   int cartaCapita = 2 - (capita1 > capita2);
   int cartaSuperPoder = 2 - (superPoder1 > superPoder2);*/


    //Após o cadastro, o sistema exibirá os dados de cada cidade de forma organizada.

    printf("\nCarta 1\n");
    printf("Estado:%c\n", estado1);
    printf("Código:%s\n", codigo1);
    printf("Nome da cidade:%s", nomeCidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", turisticos1);
    printf("A densindade populacional: %f \n", densidade1);
    printf("O PIB per capita: %f \n",capita1);
    //printf super poder
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2\n");
    printf("Estado:%c\n", estado2);
    printf("Código:%s\n", codigo2);
    printf("Nome da cidade:%s", nomeCidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", turisticos2);
    printf("A densindade populacional: %f \n", densidade2);
    printf("O PIB per capita: %f \n",capita2);
    printf("Super Poder: %.2f\n", superPoder2);

    // Comparação tema 2

    /*printf("\nComparação de Cartas:\n");
    printf("População: Carta %d venceu (%d)\n", cartaPopulacao, populacao);
    printf("Área: Carta %d venceu (%d)\n", cartaArea, area );
    printf("PIB: Carta %d venceu (%d)\n", cartaPib, pib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", cartaTuristico, turistico);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", cartaDensidade, densidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", cartaCapita, capita);
    printf("Super Poder: Carta %d venceu (%d)\n", cartaSuperPoder, superPoder); */


    //Comparação tema 3 

   /* if (populacao1 > populacao2)
    {
        printf("Carta 1 - %s (%c) %ld venceu \n", nomeCidade1, estado1, populacao1);
    } else
    {
       printf("Carta 2 - %s (%c) %ld venceu \n", nomeCidade2, estado2, populacao2);
    }
    
       if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 (%s) Venceu", nomeCidade1);
    }  else 
    {
        printf("Resultado: Carta 2 (%s) Venceu", nomeCidade2);
    }*/

// Tema 3: Desafio nível aventureiro

//Inicio Menu interativo

//int opcao;
int primeiroAtributo;
int segundoAtributo;

int primeiroResultado;
int segundoResultado;

float valorAttr1Carta1;
float valorAttr1Carta2;
float valorAttr2Carta1;
float valorAttr2Carta2;
float somaCarta1;
float somaCarta2;


printf("Escolha o primeiro atributo para comparação\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade populacional\n");
printf("6. PIB per capita\n");
printf("7. Super poder\n");
printf("Escolha duas opções (1-7):\n");
scanf("%d", &primeiroAtributo);



// Tema 3 Comparação nivel Mestre

switch (primeiroAtributo)
{

case 1:
//printf("Atributo População\n");
//printf("Carta 1(%s): %ld habitantes\n", nomeCidade1, populacao1 );
//printf("Carta 2(%s): %ld habitantes\n", nomeCidade2, populacao2 );
valorAttr1Carta1 = (float)populacao1;
valorAttr1Carta2 = (float)populacao2;

break;

case 2:
//printf("Atributo Área\n");
//printf("Carta 1(%s): %2.f Area\n", nomeCidade1, area1 );
//printf("Carta 2(%s): %2.f Area\n", nomeCidade2, area2 );
valorAttr1Carta1 = (float)area1;
valorAttr1Carta2 = (float)area2;


break;

case 3:
//printf("Atributo PIB\n");
//printf("Carta 1(%s): %2.f habitantes\n", nomeCidade1, pib1 );
//printf("Carta 2(%s): %2.f habitantes\n", nomeCidade2, pib2 );
valorAttr1Carta1 = (float)pib1;
valorAttr1Carta2 = (float)pib2;

break;

case 4:

//printf("Atributo Pontos turisticos\n");
//printf("Carta 1(%s): %d pontos turisticos\n", nomeCidade1, turisticos1 );
//printf("Carta 2(%s): %d pontos turisticos\n", nomeCidade2, turisticos2 );
valorAttr1Carta1 = (float)turisticos1;
valorAttr1Carta2 = (float)turisticos2;


break;

case 5:

//printf("Atributo Densidade populacional\n");
//printf("Carta 1(%s): %f densidade populacional\n", nomeCidade1, densidade1 );
//printf("Carta 2(%s): %f densidade populacional\n", nomeCidade2, densidade2 );
valorAttr1Carta1 = (float)densidade1;
valorAttr1Carta2 = (float)densidade2;

break;

case 6:

//printf("Atributo PIB per capita\n");
//printf("Carta 1(%s): %f PIB per capita\n", nomeCidade1, capita1 );
//printf("Carta 2(%s): %f PIB per capita\n", nomeCidade2, capita2 );
valorAttr1Carta1 = (float)capita1;
valorAttr1Carta2 = (float)capita2;


break;

case 7:
//printf("Atributo Super Poder\n");
//printf("Carta 1(%s): %f Super Poder\n", nomeCidade1, superPoder1 );
//printf("Carta 2(%s): %f Super Poder\n", nomeCidade2, superPoder2 );
valorAttr1Carta1 = (float)superPoder1;
valorAttr1Carta2 = (float)superPoder2;


break;

default:
printf("Opção invalida");
break;
}

//Segunda comparação

printf("Escolha o segundo atributo para comparação\n");
printf("1. População\n");
printf("2. Área\n");
printf("3. PIB\n");
printf("4. Pontos Turisticos\n");
printf("5. Densidade populacional\n");
printf("6. PIB per capita\n");
printf("7. Super poder\n");
printf("Escolha duas opções (1-7):\n");
scanf("%d", &segundoAtributo);

if (primeiroAtributo == segundoAtributo)
{
    printf("Você escolheu o mesmo atributo, retorne!\n");
} else {

switch (segundoAtributo)
{

case 1:
//printf("Atributo População\n");
//printf("Carta 1(%s): %ld habitantes\n", nomeCidade1, populacao1 );
//printf("Carta 2(%s): %ld habitantes\n", nomeCidade2, populacao2 );
valorAttr2Carta1 = (float)populacao1;
valorAttr2Carta2 = (float)populacao2;


break;

case 2:
//printf("Atributo Área\n");
//printf("Carta 1(%s): %2.f Area\n", nomeCidade1, area1 );
//printf("Carta 2(%s): %2.f Area\n", nomeCidade2, area2 );
valorAttr2Carta1 = (float)area1;
valorAttr2Carta2 = (float)area2;


break;

case 3:
//printf("Atributo PIB\n");
//printf("Carta 1(%s): %2.f habitantes\n", nomeCidade1, pib1 );
//printf("Carta 2(%s): %2.f habitantes\n", nomeCidade2, pib2 );
valorAttr2Carta1 = (float)pib1;
valorAttr2Carta2 = (float)pib2;


break;

case 4:

//printf("Atributo Pontos turisticos\n");
//printf("Carta 1(%s): %d pontos turisticos\n", nomeCidade1, turisticos1 );
//printf("Carta 2(%s): %d pontos turisticos\n", nomeCidade2, turisticos2 );
valorAttr2Carta1 = (float)turisticos1;
valorAttr2Carta2 = (float)turisticos2;


break;

case 5:

//printf("Atributo Densidade populacional\n");
//printf("Carta 1(%s): %f densidade populacional\n", nomeCidade1, densidade1 );
//printf("Carta 2(%s): %f densidade populacional\n", nomeCidade2, densidade2 );
valorAttr2Carta1 = (float)densidade1;
valorAttr2Carta2 = (float)densidade2;


break;

case 6:

//printf("Atributo PIB per capita\n");
//printf("Carta 1(%s): %f PIB per capita\n", nomeCidade1, capita1 );
//printf("Carta 2(%s): %f PIB per capita\n", nomeCidade2, capita2 );
valorAttr2Carta1 = (float)capita1;
valorAttr2Carta2 = (float)capita2;


break;

case 7:
//printf("Atributo Super Poder\n");
//printf("Carta 1(%s): %f Super Poder\n", nomeCidade1, superPoder1 );
//printf("Carta 2(%s): %f Super Poder\n", nomeCidade2, superPoder2 );
valorAttr2Carta1 = (float)superPoder1;
valorAttr2Carta2 = (float)superPoder2;


break;

default:
printf("Opção inválida");
break;
}
}

somaCarta1 = valorAttr1Carta1 + valorAttr2Carta1;
somaCarta2 = valorAttr1Carta2 + valorAttr2Carta2;
        
printf("Resultado\n");
        

printf("Carta 1: %s ---\n", nomeCidade1);
        
 
    switch(primeiroAtributo) {
        case 1: printf("Populacao"); break;
        case 2: printf("Area (km2)"); break;
        case 3: printf("PIB (bilhoes)"); break;
        case 4: printf("Pontos Turisticos"); break;
        case 5: printf("Inverso da Densidade"); break;
        case 6: printf("PIB per Capita"); break;
        case 7: printf("Super Poder"); break;
        }
 printf(": %.2f\n", valorAttr1Carta1);


    switch(segundoAtributo) {
        case 1: printf("Populacao"); break;
        case 2: printf("Area (km2)"); break;
        case 3: printf("PIB (bilhoes)"); break;
        case 4: printf("Pontos Turisticos"); break;
        case 5: printf("Inverso da Densidade"); break;
        case 6: printf("PIB per Capita"); break;
        case 7: printf("Super Poder"); break;
        }
printf(": %.2f\n", valorAttr2Carta1);
printf("Soma total: %.2f\n", somaCarta1);


printf("\nCarta 2: %s ---\n", nomeCidade2);

    switch(primeiroAtributo) {
        case 1: printf("Populacao"); break;
        case 2: printf("Area (km2)"); break;
        case 3: printf("PIB (bilhoes)"); break;
        case 4: printf("Pontos Turisticos"); break;
        case 5: printf("Inverso da Densidade"); break;
        case 6: printf("PIB per Capita"); break;
        case 7: printf("Super Poder"); break;
        }
printf(": %.2f\n", valorAttr1Carta2);
        

    switch(segundoAtributo) {
        case 1: printf("Populacao"); break;
        case 2: printf("Area (km2)"); break;
        case 3: printf("PIB (bilhoes)"); break;
        case 4: printf("Pontos Turisticos"); break;
        case 5: printf("Inverso da Densidade"); break;
        case 6: printf("PIB per Capita"); break;
        case 7: printf("Super Poder"); break;
        }
printf(": %.2f\n", valorAttr2Carta2);
printf("Soma total: %.2f\n", somaCarta2);

printf("\nVencedor\n");
    if (somaCarta1 > somaCarta2) {
        printf("Vencedor: Carta 1 - %s \n", nomeCidade1);
        } else if (somaCarta2 > somaCarta1) {
            printf("Vencedor: Carta 2 - %s \n", nomeCidade2);
        } else {
            printf(" Empate! \n");
        }

// Tema 3 comparação nivel Aventureiro
/*switch (opcao)
{

case 1:
printf("Atributo População\n");
printf("Carta 1(%s): %ld habitantes\n", nomeCidade1, populacao1 );
printf("Carta 2(%s): %ld habitantes\n", nomeCidade2, populacao2 );

if (populacao1 > populacao2)
{
    printf("Carta 1 venceu - %s (%ld habitantes)", nomeCidade1, populacao1);
} else if(populacao1 < populacao2){
    printf("Carta 2 venceu - %s (%ld habitantes)", nomeCidade2, populacao2);
} else{
    printf("Impate");
}
break;

case 2:
printf("Atributo Área\n");
printf("Carta 1(%s): %2.f Area\n", nomeCidade1, area1 );
printf("Carta 2(%s): %2.f Area\n", nomeCidade2, area2 );

if (area1 > area2)
{
    printf("Carta 1 venceu - %s (%2.f area)", nomeCidade1, area1);
} else if(area1 < area2){
    printf("Carta 2 venceu - %s (%ld area)", nomeCidade2, area2);
} else{
    printf("Impate");
}
break;

case 3:
printf("Atributo PIB\n");
printf("Carta 1(%s): %2.f habitantes\n", nomeCidade1, pib1 );
printf("Carta 2(%s): %2.f habitantes\n", nomeCidade2, pib2 );

if (pib1 > pib2)
{
    printf("Carta 1 venceu - %s (%2.f PIB)", nomeCidade1, pib1);
} else if(pib1 < pib2){
    printf("Carta 2 venceu - %s (%2.f PIB)", nomeCidade2, pib2);
} else{
    printf("Impate");
}
break;

case 4:

printf("Atributo Pontos turisticos\n");
printf("Carta 1(%s): %d pontos turisticos\n", nomeCidade1, turisticos1 );
printf("Carta 2(%s): %d pontos turisticos\n", nomeCidade2, turisticos2 );

if (turisticos1 > turisticos2)
{
    printf("Carta 1 venceu - %s (%d pontos turisticos)", nomeCidade1, turisticos1);
} else if(turisticos1 < turisticos2){
    printf("Carta 2 venceu - %s (%d pontos turisticos)", nomeCidade2, turisticos2);
} else{
    printf("Impate");
}
break;

case 5:

printf("Atributo Densidade populacional\n");
printf("Carta 1(%s): %f densidade populacional\n", nomeCidade1, densidade1 );
printf("Carta 2(%s): %f densidade populacional\n", nomeCidade2, densidade2 );

if (densidade1 < densidade2)
{
    printf("Carta 1 venceu - %s (%f densidade populacional)", nomeCidade1, densidade1);
} else if(densidade1 > densidade2){
    printf("Carta 2 venceu - %s (%f densidade populacional)", nomeCidade2, densidade2);
} else{
    printf("Impate");
}
break;

case 6:

printf("Atributo PIB per capita\n");
printf("Carta 1(%s): %f PIB per capita\n", nomeCidade1, capita1 );
printf("Carta 2(%s): %f PIB per capita\n", nomeCidade2, capita2 );

if (capita1 > capita2)
{
    printf("Carta 1 venceu - %s (%f PIB per capita)", nomeCidade1, capita1);
} else if(capita1 < capita2){
    printf("Carta 2 venceu - %s (%f PIB per capita)", nomeCidade2, capita2);
} else{
    printf("Impate");
}
break;

case 7:
printf("Atributo Super Poder\n");
printf("Carta 1(%s): %f Super Poder\n", nomeCidade1, superPoder1 );
printf("Carta 2(%s): %f Super Poder\n", nomeCidade2, superPoder2 );

if (superPoder1 > superPoder2)
{
    printf("Carta 1 venceu - %s (%f Super Poder)", nomeCidade1, superPoder1);
} else if(superPoder1 < superPoder2){
    printf("Carta 2 venceu - %s (%f Super Poder)", nomeCidade2, superPoder2);
} else{
    printf("Impate");
}

break;

default:
printf("Opção invalida");
    break;
}*/


    return 0;
}
