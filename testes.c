#include<stdio.h>

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

printf("cidade2");
scanf("%s", &cidade02) ;
printf("pib cidade2");
scanf("%f", &pib_per_capita2);

//IMPRESSAO DE RESPOSTAS//

printf("Cidade01: %s  ", cidade01);
printf("População01: %.3f  ", populacao01);
printf("Area01: %.1f  ", area01);
printf("Pib01: %.3f Bi ", pib01);
printf("Turistas01: %.3f  ", turistas01);
densidade_populacional1 = populacao01 / area01 ;
printf("Densidade Populacional de %s é: %.3f  ", cidade01 , densidade_populacional1);
pib_per_capita1 = pib01 / populacao01 ;
printf ("Pib Per Capita: %.3f/n" , pib_per_capita1);

printf("Duelo cidade %s, e cidade %s\n\n," , cidade01 , cidade02 );

printf("RESPOSTA É: %f, \n\n" , pib_per_capita1 > pib_per_capita2);

    return 0;
}
