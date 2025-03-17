#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

    typedef struct
        {

        char estado[50]; //Variavel de estado
        char codigo[50]; //Variavel de codigo do estado
        char cidade[50]; //variavel do nome da cidade
        int populacao; //variavel da população
        float area; //variavel da area por km
        float PIB; //variavel do pib 
        int NPT; //variavel do numero de pontos turisticos da cidade
    
    }Carta;
int main() {
    Carta carta1, carta2;
    
    printf("Bem vindo ao Super Trunfo \n Crie duas cartas !!! \n"); // saudação

    printf("Crie a primeira carta.\n"); // primeira carta

    printf("Digite o estado da primeira carta de A a H: \n"); // pedindo o estado da primeira carta
    scanf("%s", carta1.estado); // salvado o estado
    printf("Digite o codigo do estado seguido da letra entre 01 e 04:\n"); // pedindo o codigo do estado
    scanf("%s", carta1.codigo); // salvando o codigo
    printf("Digite a cidade:\n"); // pedindo o nome da cidade
    scanf("%s", carta1.cidade);// salvado o nome
    printf("Digite a quantidade de população da cidade: \n");//pedindo a população
    scanf("%d",carta1.populacao);// salvando a população
    printf("Digite a area por KM²: \n"); //pedindo a area do local
    scanf("%f", carta1.area); // salvando a area
    printf("Digite o PIB da cidade: \n"); //Pedindo o PIB   
    scanf("%f", carta1.PIB); //salvando o PIB
    printf("Digite o numero de pontos turisticos da cidade: \n"); // pedindo a quantidade dos pontos
    scanf("%d", carta1.NPT); // Salvando os pontos

    printf("Crie a segunda carta.\n"); // primeira carta

    printf("Digite o estado da primeira carta de A a H: \n"); // pedindo o estado da primeira carta
    scanf("%s", carta2.estado); // salvado o estado
    printf("Digite o codigo do estado seguido da letra entre 01 e 04:\n"); // pedindo o codigo do estado
    scanf("%s", carta2.codigo); // salvando o codigo
    printf("Digite a cidade:\n"); // pedindo o nome da cidade
    scanf("%s", carta2.cidade);// salvado o nome
    printf("Digite a quantidade de população da cidade: \n");//pedindo a população
    scanf("%d",carta2.populacao);// salvando a população
    printf("Digite a area por KM²: \n"); //pedindo a area do local
    scanf("%f", carta2.area); // salvando a area
    printf("Digite o PIB da cidade: \n"); //Pedindo o PIB   
    scanf("%f", carta2.PIB); //salvando o PIB
    printf("Digite o numero de pontos turisticos da cidade: \n"); // pedindo a quantidade dos pontos
    scanf("%d", carta2.NPT); // Salvando os pontos


    printf("\ncarta1: \n");
    exibirCarta(carta1);

    printf("\ncarta2: \n");
    exibirCarta(carta2);

    return 0;
}
