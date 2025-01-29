#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.



printf("                  Desafio tema Países\n\n\n");

    char cidade01[20] , cidade02[20] , cidade03[20], cidade04[20] ; 
    float populacao01 , populacao02 , populacao03 , populacao04 ; 
    float area01, area02 , area03 , area04 ;
    double pib01 , pib02, pib03 , pib04 ;
    float turistas01, turistas02, turistas03, turistas04 ;

//PERGUNTAS CIDADE01\\\\\\\\\;
printf("REALIZE PREENCHIMENTO DE CADA CARTA A SEGUIR:\n\n");
printf("Cidade01: ");
scanf("%s", cidade01);
printf("Insira população01: ");
scanf("%f", &populacao01);
printf("Insira tamnho da Area:");
scanf("%f", &area01);
printf("Insira PIB cidade01:");
scanf("%f", &pib01);
printf("Insira numero de turistas:");
scanf("%f", &turistas01);



//PERGUNTAS CIDADE02\\\\\\\\\;

printf("Cidade02: ");
scanf("%s", cidade02);
printf("Insira população02: ");
scanf("%f", &populacao02);
printf("Insira tamnho da Area02:");
scanf("%f", &area02);
printf("Insira PIB cidade02:");
scanf("%f", &pib02);
printf("Insira numero de turistas:");
scanf("%f", &turistas02);

//PERGUNTAS CIDADE03//


printf("Cidade03: ");
scanf("%s", cidade03);
printf("Insira população03: ");
scanf("%f", &populacao03);
printf("Insira tamnho da Area:");
scanf("%f", &area03);
printf("Insira PIB cidade03:");
scanf("%f", &pib03);
printf("Insira numero de turistas:");
scanf("%f", &turistas03);

//PERGUNTAS CIDADE04//


printf("Cidade04: ");
scanf("%s", cidade04);
printf("Insira população04: ");
scanf("%f", &populacao04);
printf("Insira tamnho da Area:");
scanf("%f", &area04);
printf("Insira PIB cidade04:");
scanf("%f", &pib04);
printf("Insira numero de turistas:");
scanf("%f", &turistas04);

//IMPRESSAO DE RESPOSTAS//

printf("Cidade01: %s  ", cidade01);
printf("População01: %f  ", populacao01);
printf("Area01: %f  ", area01);
printf("Pib01: %f  ", pib01);
printf("Turistas01: %f  \n", turistas01);


printf("Cidade02: %s  ", cidade02);
printf("População02: %f  ", populacao02);
printf("Area02: %f  ", area02);
printf("Pib02: %f  ", pib02);
printf("Turistas02: %f  \n", turistas02);


printf("Cidade03: %s  ", cidade03);
printf("População03: %f  ", populacao03);
printf("Area03: %f  ", area03);
printf("Pib03: %f  ", pib03);
printf("Turistas03: %f  \n", turistas03);


printf("Cidade04: %s  ", cidade04);
printf("População04: %f  ", populacao04);
printf("Area04: %f  ", area04);
printf("Pib04: %f  ", pib04);
printf("Turistas04: %f  \n", turistas04);


    return 0;
}
