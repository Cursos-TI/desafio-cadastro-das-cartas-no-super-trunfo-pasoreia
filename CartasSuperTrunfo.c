#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas



int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
   
    char estado[30];
    char cidade[30];
    char codigo[30];
    unsigned long int populacao_a, populacao_b,resultado1;
    float area_a, pib_a, super_a, capita_a, densidade_a;
    int turistico_a, turistico_b;
    float area_b, pib_b, super_b, capita_b, densidade_b;
    float resultado2, resulato3, resultado4, resultado5, resultado6;

    
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    printf("Cadastrar a primeira carta!\n" );
    
    // Cadastro das Cartas:
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    //usuário completar o estado
    printf("Digite um estado: \n");
    scanf("%s", &estado);
    
    //usuário colocar o código da carta

    printf("Digite o código da carta,  podendo escolher entre A 01-04: \n");
    scanf("%s", &codigo);
    getchar();

    //usuário inserir a cidade desse estado

    printf("Digite uma cidade desse estado: \n");
    scanf("%s", &cidade[30]);
    

    //usuário inserir a população dessa cidade

    printf("Digite a população: \n");
    scanf("%lu", &populacao_a);
    

    //usuário inserir a area em km 

    printf("Digite a área desse cidade em KM: \n");
    scanf("%f", &area_a);
    
    //usuário inserir o pib dessa cidade

    printf("Digite o pib dessa cidade: \n");
    scanf("%f", &pib_a);

    //inserir quantidade de pontos turísticos dessa cidade

    printf("Digite a quantidade de pontos turisticos essa cidade tem: \n");
    scanf("%d", &turistico_a);

  //calculando a densidade populacional
    densidade_a = populacao_a / area_a;
    // calculando a renda per capita
    capita_a = populacao_a / pib_a;


    
    // Exibição dos Dados das Cartas:
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
   

    printf("carta 1\n");
    printf("Estado: %s\n", estado);
    printf("Código: %s\n" , codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %.lu\n", populacao_a);
    printf("Área: %.2f KM²\n", area_a);
    printf("PIB: %.2f bilhões de reais\n", pib_a);
    printf("Número de ponto turísticos: %d\n", turistico_a);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_a);
    printf("Pib per Capita: %.2f reais\n", capita_a);
    

    super_a = (1/densidade_a) + populacao_a + area_a + pib_a + turistico_a + densidade_a + capita_a;
    printf("Super poder: %.2f\n", super_a);
     //Cadastrando a segunda carta

    printf("Vamos cadastrar a segunda carta!\n");

    printf("Digite um estado: \n");
    scanf("%s", &estado);

    //usuário colocar o código da carta

    printf("Digite o código da carta,  podendo escolher entre B 01-04: \n");
    scanf("%s", &codigo);

    //usuário inserir a cidade desse estado

    printf("Digite uma cidade desse estado: \n");
    scanf("%s", &cidade);

    //usuário inserir a população dessa cidade

    printf("Digite a população: \n");
    scanf("%lu", &populacao_b);

    //usuário inserir a area em km 

    printf("Digite a área desse cidade em KM²: \n");
    scanf("%f", &area_b);
    
    //usuário inserir o pib dessa cidade

    printf("Digite o pib dessa cidade: \n");
    scanf("%f", &pib_b);

    //inserir quantidade de pontos turisticos dessa cidade

    printf("Digite a quantidade de pontos turisticos essa cidade tem: \n");
    scanf("%d", &turistico_b);

     //calculando a densidade populacional
    densidade_b = populacao_b / area_b;
    // calculando a renda per capita
    capita_b = populacao_b / pib_b;
    
    //calculando os atirbutos para termos o super poder da carta
    super_b=(1/densidade_b) + populacao_b + area_b + pib_b + turistico_b + capita_b;

    //imprimindo a primeira carta 

    printf(" carta 2\n" );
    printf("Estado: %s\n", estado);
    printf("Código: %s\n" , codigo);
    printf("Nome da cidade: %s\n", cidade);
    printf("População: %.lu\n", populacao_b);
    printf("Área: %.2f KM²\n", area_b);
    printf("PIB: %.2f bilhões de reais\n", pib_b);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_b);
    printf("Pib per Capita: %.2f reais\n", capita_a);
    printf("Super poder: %.2f\n", super_b);

    //calculando os atirbutos para termos o super poder da carta
    super_b=(1/densidade_b) + populacao_b + area_b + pib_b + turistico_b + capita_b;

    resultado1 =  populacao_a > populacao_b;
    resultado2 = area_a > area_b;
    resulato3 = pib_a > pib_b;
    resultado4 = densidade_a < densidade_b;
    resultado5 = capita_a > capita_b;
    resultado6 = super_a > super_b;

    

    printf("População: %lu\n", resultado1);
    printf("Aréa: %f\n",resultado2);
    printf("PIB: %f\n", resulato3);
    printf("Densidade: %f\n", resultado4);
    printf("Pib per capita: %f\n", resultado5);
    printf("Super poder: %f\n", resultado6);
    
   
    return 0;
}

