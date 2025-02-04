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
    float pib01 , pib02, pib03 , pib04 ;
    float turistas01, turistas02, turistas03, turistas04 ;
    float densidade_populacional1 , densidade_populacional2 , densidade_populacional3, densidade_populacional4 ;
    float pib_per_capita1 , pib_per_capita2 , pib_per_capita3 , pib_per_capita4 ;
    int resultado01 , resultado02;



//PERGUNTAS CIDADE01\\\\\\\\\;
printf("REALIZE PREENCHIMENTO DE CADA CARTA A SEGUIR:\n\n");
printf("Cidade01: ");
scanf("%s", &cidade01);
printf("Insira população01: ");
scanf("%f", &populacao01);
printf("Insira tamanho da Area: ");
scanf("%f", &area01);
printf("Insira PIB cidade01: ");
scanf("%f", &pib01);
printf("Insira numero de turistas: ");
scanf("%f", &turistas01);




//PERGUNTAS CIDADE02\\\\\\\\\;

printf("Cidade02: ");
scanf("%s", &cidade02);
printf("Insira população02: ");
scanf("%f", &populacao02);
printf("Insira tamnho da Area02: ");
scanf("%f", &area02);
printf("Insira PIB cidade02: ");
scanf("%f", &pib02);
printf("Insira numero de turistas: ");
scanf("%f", &turistas02);

//PERGUNTAS CIDADE03//


printf("Cidade03: ");
scanf("%s", &cidade03);
printf("Insira população03: ");
scanf("%f", &populacao03);
printf("Insira tamnho da Area: ");
scanf("%f", &area03);
printf("Insira PIB cidade03: ");
scanf("%f", &pib03);
printf("Insira numero de turistas: ");
scanf("%f", &turistas03);

//PERGUNTAS CIDADE04//


printf("Cidade04: ");
scanf("%s", &cidade04);
printf("Insira população04: ");
scanf("%f", &populacao04);
printf("Insira tamnho da Area: ");
scanf("%f", &area04);
printf("Insira PIB cidade04: ");
scanf("%f", &pib04);
printf("Insira numero de turistas: ");
scanf("%f", &turistas04);

//IMPRESSAO DE RESPOSTAS//

printf("Cidade01: %s  ", cidade01);
printf("População01: %.3f  ", populacao01);
printf("Area01: %.1f  ", area01);
printf("Pib01: %.3f Bi ", pib01);
printf("Turistas01: %.3f ", turistas01);
densidade_populacional1 = populacao01 / area01 ;
printf("Densidade Populacional de %s é: %f", cidade01 , densidade_populacional1);
pib_per_capita1 = pib01 / populacao01 ;
printf ("Pib Per Capita: %f\n\n" , pib_per_capita1);

printf("Cidade02: %s  ", cidade02);
printf("População02: %.3f  ", populacao02);
printf("Area02: %.1f  ", area02);
printf("Pib02: %.3f  ", pib02);
printf("Turistas02: %.3f ", turistas02);
densidade_populacional2 = populacao02 / area02 ;
printf("Densidade Populacional de %s é: %f", cidade02 , densidade_populacional2);
pib_per_capita2 = pib02 / populacao02 ;
printf ("Pib Per Capita: %f\n\n" , pib_per_capita2);


printf("Cidade03: %s  ", cidade03);
printf("População03: %.3f  ", populacao03);
printf("Area03: %.1f  ", area03);
printf("Pib03: %.3f  ", pib03);
printf("Turistas03: %.3f ", turistas03);
densidade_populacional3 = populacao03 / area03 ;
printf("Densidade Populacional de %s é: %f", cidade03 , densidade_populacional3);
pib_per_capita3 = pib03 / populacao03 ;
printf ("Pib Per Capita: %f\n\n" , pib_per_capita3);

printf("Cidade04: %s  ", cidade04);
printf("População04: %.3f  ", populacao04);
printf("Area04: %.1f  ", area04);
printf("Pib04: %.3f ", pib04);
printf("Turistas04: %.3f ", turistas04);
densidade_populacional4 = populacao04 / area04 ;
printf("Densidade Populacional de %s é: %f", cidade04 , densidade_populacional4);
pib_per_capita4 = pib04 / populacao04 ;
printf ("Pib Per Capita: %f\n\n" , pib_per_capita4);

resultado01 = (int) densidade_populacional1 > densidade_populacional2;
resultado02 = (int) densidade_populacional3 > densidade_populacional4;

printf("DUELO CIDADES 1 X 2:\n SE A RESPOSTA FOR (1) SINALIZA VITORIA DA CARTA DE %s, SE RESPOSTA FOR (0) %s\n" , cidade01 , cidade02 );
printf("Densidade Populacional de %s: %.3f \nDensidade populacional %s: %.3f\n", cidade01 , densidade_populacional1, cidade02 , densidade_populacional2 );
printf("Resultado: %d\n\n", resultado01);


printf("DUELO CIDADES 3 X 4:\n SE A RESPOSTA FOR (1) SINALIZA VITORIA DA CARTA DE %s, SE RESPOSTA FOR (0) %s\n" , cidade01 , cidade02 );
printf("Densidade Populacional de %s: %.3f \nDensidade populacional %s: %.3f\n", cidade03 , densidade_populacional3, cidade04 , densidade_populacional4 );
printf("Resultado: %d", resultado02);


return 0;

}