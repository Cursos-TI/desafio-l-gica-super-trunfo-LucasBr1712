#include <stdio.h> 

int main() {

//Carta 1//

char Estado1[30];
char Codigocarta1[4];
char Nomecidade1[30];
signed long int Populacao1;
float Area1;
float Pib1;
int Pontosturisticos1;

//Carta 2//

char Estado2[30];
char Codigocarta2[4]; 
char Nomecidade2[30]; 
signed long int Populacao2; 
float Area2; 
float Pib2; 
int Pontosturisticos2;


//Inserção de Dados Carta 1//

printf("Cadastro da Carta 1 \n");

printf("Insira o Nome do Estado: ");
fgets(Estado1, sizeof(Estado1), stdin);

printf("Insira o Código da carta: ");
fgets(Codigocarta1, sizeof(Codigocarta1), stdin);

printf("Insira o Nome da Cidade: ");
fgets(Nomecidade1, sizeof(Nomecidade1), stdin);

printf("Insira a Populacao: ");
scanf("%ld", &Populacao1);

printf("Insira a Area em km: ");
scanf("%f", &Area1);

printf("Insira o PIB: ");
scanf("%f", &Pib1);

printf("Insira a quantidade de pontos Turisticos: ");
scanf("%d", &Pontosturisticos1);

printf("Densidade Populacional: %.2f hab/km^2 \n", Populacao1 / Area1); // Densidade Populacional = População1 / pela Área1

printf("PIB Per Capita: R$ %.2f \n", Pib1 / Populacao1); // PIB Per Capita = PIB1 / Por População

//Inserção de Dados Carta 2//

printf("Cadastro da Carta 2 \n");

// Limpa o buffer antes do primeiro fgets
while (getchar() != '\n');

printf("Insira o Nome do Estado: ");
fgets(Estado2, sizeof(Estado2), stdin);

printf("Insira o Codigo da carta: ");
fgets(Codigocarta2, sizeof(Codigocarta2), stdin);

printf("Insira o Nome da Cidade: ");
fgets(Nomecidade2, sizeof(Nomecidade2), stdin);

printf("Insira a Populacao: ");
scanf("%ld", &Populacao2);

printf("Insira a Area em km: ");
scanf("%f", &Area2);

printf("Insira o PIB: ");
scanf("%f", &Pib2);

printf("Insira a quantidade de pontos Turisticos: ");
scanf("%d", &Pontosturisticos2);

printf("Densidade Populacional: %2.f hab/km^2\n", Populacao2 / Area2); // Densidade Populacional = População2 / pela Área2

printf("PIB Per Capita: R$ %2.f \n", Pib2 / Populacao2); // PIB Per Capita = PIB1 / Por População

//Indicadores calculados

float Densidade1, Densidade2;
float PibPercapita1, PibPercapita2;
float SuperPoder1, SuperPoder2; 

//Cálculos 

Densidade1 = Populacao1 / Area1;
Densidade2 =  Populacao2 / Area2;

PibPercapita1 = Pib1 / Populacao1;
PibPercapita2 = Pib2 / Populacao2;

SuperPoder1 = Populacao1 + Area1 + Pib1 + Pontosturisticos1 + PibPercapita1 + (1.0 / Densidade1);
SuperPoder2 = Populacao2 + Area2 + Pib2 + Pontosturisticos2 + PibPercapita2 + (1.0 / Densidade2);

// Comparação com dois atributos

int atributo1, atributo2;
float valor1_c1, valor1_c2, valor2_c1, valor2_c2;

printf("\nEscolha o primeiro atributo para comparar:\n");
printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n");
scanf("%d", &atributo1);

printf("\nEscolha o segundo atributo (diferente do primeiro):\n");
switch (atributo1) {
    case 1: printf("2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n"); break;
    case 2: printf("1 - Populacao\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n"); break;
    case 3: printf("1 - Populacao\n2 - Area\n4 - Pontos Turisticos\n5 - Densidade Populacional\n6 - PIB per Capita\n"); break;
    case 4: printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - Densidade Populacional\n6 - PIB per Capita\n"); break;
    case 5: printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n6 - PIB per Capita\n"); break;
    case 6: printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Populacional\n"); break;
    default: printf("Opcao invalida.\n"); return 1;
}
scanf("%d", &atributo2);

if (atributo1 == atributo2) {
    printf("Erro: os atributos devem ser diferentes.\n");
    return 1;
}

// Atribuição dos valores
switch (atributo1) {
    case 1: valor1_c1 = Populacao1; valor1_c2 = Populacao2; break;
    case 2: valor1_c1 = Area1; valor1_c2 = Area2; break;
    case 3: valor1_c1 = Pib1; valor1_c2 = Pib2; break;
    case 4: valor1_c1 = Pontosturisticos1; valor1_c2 = Pontosturisticos2; break;
    case 5: valor1_c1 = Densidade1; valor1_c2 = Densidade2; break;
    case 6: valor1_c1 = PibPercapita1; valor1_c2 = PibPercapita2; break;
}
switch (atributo2) {
    case 1: valor2_c1 = Populacao1; valor2_c2 = Populacao2; break;
    case 2: valor2_c1 = Area1; valor2_c2 = Area2; break;
    case 3: valor2_c1 = Pib1; valor2_c2 = Pib2; break;
    case 4: valor2_c1 = Pontosturisticos1; valor2_c2 = Pontosturisticos2; break;
    case 5: valor2_c1 = Densidade1; valor2_c2 = Densidade2; break;
    case 6: valor2_c1 = PibPercapita1; valor2_c2 = PibPercapita2; break;
}

// Comparação
printf("\nComparando atributos entre %s e %s", Nomecidade1, Nomecidade2);

printf("Atributo 1 (%d): ", atributo1);
if (atributo1 == 5)
    printf("Vencedor: Carta %d\n", valor1_c1 < valor1_c2 ? 1 : 2);
else
    printf("Vencedor: Carta %d\n", valor1_c1 > valor1_c2 ? 1 : 2);

printf("Atributo 2 (%d): ", atributo2);
if (atributo2 == 5)
    printf("Vencedor: Carta %d\n", valor2_c1 < valor2_c2 ? 1 : 2);
else
    printf("Vencedor: Carta %d\n", valor2_c1 > valor2_c2 ? 1 : 2);

float soma1 = valor1_c1 + valor2_c1;
float soma2 = valor1_c2 + valor2_c2;

printf("\nSoma dos Atributos:\nCarta 1: %.2f\nCarta 2: %.2f\n", soma1, soma2);

if (soma1 > soma2)
    printf("Resultado Final: Carta 1 venceu a rodada!\n");
else if (soma2 > soma1)
    printf("Resultado Final: Carta 2 venceu a rodada!\n");
else
    printf("Resultado Final: Empate!\n");

//Comparações
printf("\nComparação de Cartas\n");

if(Populacao1 > Populacao2) {
      printf("Populacao: Carta 1 venceu = %ld \n", Populacao1);
    } else {
      printf("Populacao: Carta 2 venceu = %ld \n", Populacao2);
    }

    if(Area1 > Area2){
      printf("Area: Carta 1 venceu = %.2f \n", Area1);
    } else{
      printf("Area: Carta 2 venceu = %.2f \n", Area2);
    }

    if(Pib1 > Pib2){
      printf("PIB: Carta 1 venceu = %.2f \n", Pib1);
    } else {
      printf("PIB: Carta 2 venceu = %.2f \n", Pib2);
    }
    
    if(Pontosturisticos1 > Pontosturisticos2){
      printf("Pontos Turisticos: Carta 1 venceu = %d \n", Pontosturisticos1);
    } else {
      printf("Pontos Turisticos: Carta 2 venceu = %d \n", Pontosturisticos2);
    }
    
    if(Densidade1 < Densidade2){
      printf("Densidade Populacional: Carta 1 venceu = %.2f \n", Densidade1);
    } else {
      printf("Densidade Populacional: Carta 2 venceu = %.2f \n", Densidade2);
    }

    if(PibPercapita1 > PibPercapita2){
      printf("PIB per Capita: Carta 1 venceu = %.2f \n", PibPercapita1);
    } else {
      printf("PIB per Capita: Carta 2 venceu = %.2f \n", PibPercapita2);
    }

    if(SuperPoder1 > SuperPoder2){
      printf("Super Poder: Carta 1 venceu = %.2f \n", SuperPoder1);
    } else {
      printf("Super Poder: Carta 2 venceu = %.2f \n", SuperPoder2);
    }

    return 0; 
}


