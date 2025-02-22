#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.// 
    int populacao1, turismo1, populacao2, turismo2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pibcapita1, pibcapita2 ;
    char nome1[50], estado1[50], codigo1[50];
    char nome2[50], estado2[50], codigo2[50];

    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //Dados da primeira carta
    printf("Digite o Estado: \n");
    scanf("%s", &estado1);

    printf("Digite o Codigo: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome1);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turismo1);


    //Dados da segunda carta

    printf("\nDigite o Estado da segunda cidade: \n");
    scanf("%s", &estado2);

    printf("Digite o Codigo: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome2);

    printf("Digite o numero de habitantes da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &turismo2);

    //calculando a densidade populacional 

    densidade1 = (float)populacao1 / area1;
    densidade2 = (float)populacao2 / area2;

    //calculando PIB per capita

    pibcapita1 = pib1 / populacao1;
    pibcapita2 = pib2 / populacao2;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
  
    printf("\n=== Dados da Primeira Cidade ===\n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nome1);
    printf("Numero de habitantes: %d \n", populacao1);
    printf("Area da cidade: %.2f km²\n", area1);
    printf("PIB da cidade: %.2f\n", pib1);
    printf("Numero de pontos turisticos: %d\n", turismo1);
    printf("Densidade populacional: %.2f\n", densidade1 );
    printf("PIB per capita: %.2f \n", pibcapita1);

    printf("\n=== Dados da Segunda Cidade ===\n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("Numero de habitantes: %d \n", populacao2);
    printf("Area da cidade: %.2f km²\n", area2);
    printf("PIB da cidade: %.2f\n", pib2);
    printf("Numero de pontos turisticos: %d\n", turismo2);
    printf("Densidade populacional: %.2f\n", densidade2 );
    printf("PIB per capita: %.2f \n", pibcapita2);

    return 0;
}


