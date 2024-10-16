#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo, cidade[30];
    float populacao;
    int pib, turismo;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("CADASTRO DE CARTAS SUPER TRUNFO \n");

    printf("Digite o código da carta: ");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", &cidade);

    printf("Digite a população estimada: ");
    scanf("%f", &populacao);

    printf("Digite o PIB da cidade: ");
    scanf("%d", &pib);

    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &turismo);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf

    return 0;
}
