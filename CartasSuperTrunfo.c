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
        float densidade;
        float PPB;
    }Carta;
    void mostrarCarta(Carta carta){
        printf("Estado: %s \n", carta.estado);
        printf("Codigo da carta: %s \n", carta.codigo);
        printf("Cidade: %s \n", carta.cidade);
        printf("População: %d \n", carta.populacao);
        printf("Area: %.2f \n", carta.area);
        printf("PIB: %.2f \n", carta.PIB);
        printf("Numero de pontos turisticos: %d \n", carta.NPT);
        printf("Densidade populacional: %.2f \n", carta.densidade);
        printf("PIB per capita: %.2f \n\n", carta.PPB);

    }
    void calcularValores(Carta *carta) {
        carta->densidade = carta->populacao / carta->area;
        carta->PPB = carta->PIB / carta->populacao;
    }
    void compararPPB(Carta carta1, Carta carta2) {
        printf("Comparação de cartas (Atributo: PIB per capita):\n");
        printf("Carta 1 - %s (%s): R$ %.2f\n", carta1.cidade, carta1.estado, carta1.PPB);
        printf("Carta 2 - %s (%s): R$ %.2f\n", carta2.cidade, carta2.estado, carta2.PPB);
        
        if (carta1.PPB > carta2.PPB) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        } else if (carta1.PPB < carta2.PPB) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    
    
    void compararPT(Carta carta1, Carta carta2) {
        printf("Comparação de cartas (Atributo: Pontos turísticos):\n");
        printf("Carta 1 - %s (%s): %d pontos turísticos\n", carta1.cidade, carta1.estado, carta1.NPT);
        printf("Carta 2 - %s (%s): %d pontos turísticos\n", carta2.cidade, carta2.estado, carta2.NPT);
        
        if (carta1.NPT > carta2.NPT) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        } else if (carta1.NPT < carta2.NPT) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    
    
    void compararDP(Carta carta1, Carta carta2) {
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n");
        printf("Carta 1 - %s (%s): %.2f habitantes/km²\n", carta1.cidade, carta1.estado, carta1.densidade);
        printf("Carta 2 - %s (%s): %.2f habitantes/km²\n", carta2.cidade, carta2.estado, carta2.densidade);
        
        if (carta1.densidade < carta2.densidade) {
            printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
        } else if (carta1.densidade > carta2.densidade) {
            printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
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
    scanf("%d", &carta1.populacao); // salvando a população
    printf("Digite a area por KM²: \n"); //pedindo a area do local
    scanf("%f", &carta1.area); // salvando a area
    printf("Digite o PIB da cidade: \n"); //Pedindo o PIB   
    scanf("%f", &carta1.PIB); //salvando o PIB
    printf("Digite o numero de pontos turisticos da cidade: \n"); // pedindo a quantidade dos pontos
    scanf("%d", &carta1.NPT); // Salvando os pontos

    printf("Crie a segunda carta.\n"); // primeira carta

    printf("Digite o estado da segunda carta de A a H: \n"); // pedindo o estado da primeira carta
    scanf("%s", carta2.estado); // salvado o estado
    printf("Digite o codigo do estado seguido da letra entre 01 e 04:\n"); // pedindo o codigo do estado
    scanf("%s", carta2.codigo); // salvando o codigo
    printf("Digite a cidade:\n"); // pedindo o nome da cidade
    scanf("%s", carta2.cidade);// salvado o nome
    printf("Digite a quantidade de população da cidade: \n");//pedindo a população
    scanf("%d", &carta2.populacao);// salvando a população
    printf("Digite a area por KM²: \n"); //pedindo a area do local
    scanf("%.2f", &carta2.area); // salvando a area
    printf("Digite o PIB da cidade: \n"); //Pedindo o PIB   
    scanf("%.2f", &carta2.PIB); //salvando o PIB
    printf("Digite o numero de pontos turisticos da cidade: \n"); // pedindo a quantidade dos pontos
    scanf("%d", &carta2.NPT); // Salvando os pontos

    calcularValores(&carta1);
    calcularValores(&carta2);

    printf("\ncarta1: \n");
    mostrarCarta(carta1);

    printf("\ncarta2: \n");
    mostrarCarta(carta2);

    compararPPB(carta1, carta2);
    compararPT(carta1, carta2);
    compararDP(carta1, carta2);

    return 0;
}
