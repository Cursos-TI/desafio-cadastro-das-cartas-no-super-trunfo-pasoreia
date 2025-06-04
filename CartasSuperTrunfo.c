#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.


int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[20];
    //o código da carta
    char codigo_carta[10];
    //qual cidade desse estado
    char cidade[20];
    //qual a população dessa cidade 
    float populacao;
    //qual a área em km desse cidade
    float area;
    //qual o pib desse cidade
    float pib;
    //quantidade de pontos turistico tem essa cidade
    int turistico;
    //densidade populacional
    float densidade;
    //pib per capita
    float capita;
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Cadastrar a primeira carta!\n");
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //usuário completar o estado
    printf("Digite um estado: \n");
    scanf("%s", &estado);

    //usuário colocar o código da carta

    printf("Digite o código da carta,  podendo escolher entre A 01-04: \n");
    scanf("%s", &codigo_carta);

    //usuário inserir a cidade desse estado

    printf("Digite uma cidade desse estado: \n");
    scanf("%s", &cidade);

    //usuário inserir a população dessa cidade

    printf("Digite a população: \n");
    scanf("%f", &populacao);

    //usuário inserir a area em km 

    printf("Digite a área desse cidade em KM: \n");
    scanf("%f", &area);
    
    //usuário inserir o pib dessa cidade

    printf("Digite o pib dessa cidade: \n");
    scanf("%f", &pib);

    //inserir quantidade de pontos turísticos dessa cidade

    printf("Digite a quantidade de pontos turisticos essa cidade tem: \n");
    scanf("%d", &turistico);

  //calculando a densidade populacional
    densidade = populacao / area;
    // calculando a renda per capita
    capita = populacao / pib;

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   

    printf("Carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n" , codigo_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de ponto turísticos: %d\n", turistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("Pib per Capita: %.2f reais\n", capita);

     //Cadastrando a segunda carta

     printf("Vamos cadastrar a segunda carta!\n");

       printf("Digite um estado: \n");
    scanf("%s", &estado);

    //usuário colocar o código da carta

    printf("Digite o código da carta,  podendo escolher entre B 01-04: \n");
    scanf("%s", &codigo_carta);

    //usuário inserir a cidade desse estado

    printf("Digite uma cidade desse estado: \n");
    scanf("%s", &cidade);

    //usuário inserir a população dessa cidade

    printf("Digite a população: \n");
    scanf("%f", &populacao);

    //usuário inserir a area em km 

    printf("Digite a área desse cidade em KM²: \n");
    scanf("%f", &area);
    
    //usuário inserir o pib dessa cidade

    printf("Digite o pib dessa cidade: \n");
    scanf("%f", &pib);

    //inserir quantidade de pontos turisticos dessa cidade

    printf("Digite a quantidade de pontos turisticos essa cidade tem: \n");
    scanf("%d", &turistico);
    //imprimindo a primeira carta 

    printf("Carta 2\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n" , codigo_carta);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %.2f\n", populacao);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de ponto turísticos: %d\n", turistico);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("Pib per Capita: %.2f reais\n", capita);

    return 0;
}
