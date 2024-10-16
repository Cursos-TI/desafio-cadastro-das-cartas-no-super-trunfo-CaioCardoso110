#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    char codigo[30], cidade[30];
    float populacao, area;
    int pib, turismo;
    float densidade = populacao / area;
    float percapita = (float) pib / populacao;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf(" CADASTRO DE CARTAS SUPER TRUNFO \n");

    printf("Digite o código da carta: ");
    scanf(" %s", &codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]s", &cidade);

    printf("Digite a população estimada: ");
    scanf("%.4f", &populacao);

    printf("Digite a área: ");
    scanf("%.f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%d", &pib);

    printf("Digite o numero de pontos turísticos: ");
    scanf("%d", &turismo);

    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf(" DADOS DA CARTA DO SUPER TRUNFO \n");
    printf("Código: %s \n", codigo);
    printf("Cidade: %s \n", cidade);
    printf("População (Milhões): %.1f \n", populacao);
    printf("Área (km²): %.1f \n", area);
    printf("PIB (Bilhões): %d \n", pib);
    printf("Número de pontos turísticos: %d \n", turismo);
    printf("A densidade populacional é de: %.4f\n", densidade);
    printf("O PIB per Capita é de: %.1f\n", percapita);

    return 0;
}
