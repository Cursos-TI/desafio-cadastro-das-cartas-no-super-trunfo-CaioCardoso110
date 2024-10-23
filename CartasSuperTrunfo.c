#include <stdio.h>
#include <string.h>

//Definindo uma struct chamada "Carta"
struct carta

{
    char codigo[30];
    char cidade[30];
    float area, densidade;
    long long int pib, percapita;
    long long int populacao;
    int turismo;
};


/******************* função principal (main) *********************/

int main() {
    
    printf(" CADASTRO DE CARTAS SUPER TRUNFO \n");
    
    int num_cartas;

    // Pergunta quantas cartas serão cadastradas

    printf("Quantas cartas deseja cadastrar? ");
    scanf("%d", &num_cartas);

    //Declarando um array de structs com base no número de pessoas
    
    struct carta cartas[num_cartas];

    //Loop para ler os dados de cada carta
    for (int i = 0; i < num_cartas; i++) {
        printf("\nCadastro Da carta %d:\n", i + 1);
        
        // Limpando o buffer do teclado para evitar problemas com o scanf de strings
        getchar();

        // Lendo o código da carta
        printf("Digite o código da carta: ");
        fgets(cartas[i].codigo, 30, stdin);

        // Removendo '\n' que pode ter sido adicionado ao final de fgets
        cartas[i].codigo[strcspn(cartas[i].codigo, "\n")] = '\0';

        // Lendo o nome da cidade
        printf("Digite o nome da cidade: ");
        fgets(cartas[i].cidade, 30, stdin);

        // Removendo '\n' que pode ter sido adicionado ao final de fgets
        cartas[i].cidade[strcspn(cartas[i].cidade, "\n")] = '\0';

        // Lendo a população
        printf("Digite a população estimada (em milhões): ");
        scanf(" %lld", &cartas[i].populacao);

        // Lendo a área
        printf("Digite a área: ");
        scanf("%f", &cartas[i].area);

        // Lendo o PIB
        printf("Digite o PIB da cidade: ");
        scanf("%lld", &cartas[i].pib);

        // Lendo os pontos turísticos
        printf("Digite o numero de pontos turísticos: ");
        scanf("%d", &cartas[i].turismo);

        // Cálculo da densidade populacional e do PIB per capita
        cartas[i].densidade = cartas[i].populacao / cartas[i].area;
        cartas[i].percapita = cartas[i].pib / cartas[i].populacao;
    }



    // Exibição dos Dados das Cartas cadastradas:
    printf(" DADOS DA CARTA DO SUPER TRUNFO \n");
    for (int i= 0; i < num_cartas; i++) {
        printf("\nCarta %d: \n", i + 1);
        printf("Código: %s \n", cartas[i].codigo);
        printf("Cidade: %s \n", cartas[i].cidade);
        printf("População: %lld milhões\n", cartas[i].populacao);
        printf("Área (km²): %.1f \n", cartas[i].area);
        printf("PIB (Milhões): %lld \n", cartas[i].pib);
        printf("Número de pontos turísticos: %d \n", cartas[i].turismo);
        printf("A densidade populacional é de: %.1f\n", cartas[i].densidade);
        printf("O PIB per Capita é de R$%lld mil reais\n\n", cartas[i].percapita);
    }

    return 0;
}
