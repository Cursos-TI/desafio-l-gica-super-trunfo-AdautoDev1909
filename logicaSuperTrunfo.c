#include <stdio.h>

int main(){
  //variáveis usada para a funcionalidade do jogo
    char estado1, estado2;
    char codigo1[50],codigo2[50],cidade1[50],cidade2[100];
    unsigned long int populacao1, populacao2, densidade_pib1, densidade_pib2;
    int pontoT1, pontoT2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2;
    float pibpc1, pibpc2;
    int resultado1, resultado2, superpoder1, superpoder2;
    
    
    
    
            //introdução do jogo
        printf("Vamos jogar Super Trunfo Mestre!\n");
        printf("Você irá comparar duas cartas de cidades.\n");
        printf("Preencha as informações das cartas abaixo:\n");
    
            //entrada de dados da carta 1
      printf("Carta 1: Digite A INICIAL do seu estado: \n");
        scanf("%s", &estado1);

      printf("Digite o código da sua carta(inicial com numero de 01 a 04): \n");
       scanf(" %s", codigo1);

      printf("Digite o nome da cidade: \n");
       scanf(" %s", cidade1);

      printf("Diga o número de habitantes da sua cidade: \n");
       scanf(" %u", &populacao1);

      printf("Insira o tamanho(área) da sua cidade: \n");
       scanf(" %f", &area1);

       printf("Digite o PIB da sua cidade: \n");
        scanf(" %f", &pib1);

       printf("Digite a quantidade de ponto turísticos que há na cidade: \n");
        scanf(" %d", &pontoT1);

                //entrada de dados da carta 2
            printf("\nAgora vamos inserir os dados da Segunda carta!!\n");

          
         printf("\nCarta 2: Digite A INICIAL do seu estado: \n");
        scanf("%s", &estado2);

        printf("Digite o código da sua carta(inicial com numero de 01 a 04): \n");
         scanf(" %s", codigo2);

        printf("Digite o nome da cidade: \n");
         scanf(" %s", cidade2);

        printf("Diga o número de habitantes da sua cidade: \n");
         scanf(" %u", &populacao2);

        printf("Insira o tamanho(área) da sua cidade: \n");
         scanf(" %f", &area2);

         printf("Digite o PIB da sua cidade: \n");
          scanf(" %f", &pib2);

         printf("Digite a quantidade de ponto turísticos que há na cidade: \n");
          scanf(" %d", &pontoT2);

          //processamento dos dados
          superpoder1 = pontoT1 + populacao1 + area1 + pib1;
          superpoder2 = pontoT2 + populacao2 + area2 + pib2;  
          densidade1 = populacao1 / area1;
          densidade2 = populacao2 / area2;
            pibpc1 = pib1 / populacao1; 
            pibpc2 = pib2 / populacao2;

            densidade_pib1 = densidade1 + pibpc1;
            densidade_pib2 = densidade2 + pibpc2;

        printf("\nInformações das cartas:\n");



          //saída de dados
        printf("Carta 1: Estado(inicial) %s\n", &estado1);

        printf("Código: %s\n", codigo1);

        printf("Cidade: %s\n", cidade1);
        
        printf("População: %u\n", populacao1);
        
        printf("Área: %.6f km²\n ", area1);
        
        printf("PIB: %f\n", pib1);
        
        printf("Ponto Turístico: %d\n", pontoT1);
        
        printf("Densidade Populacional: %f\n", densidade1);
        
        printf("PIB per capita: %.9f\n", pibpc1);
        
        printf("Carta 2: Estado(inicial) %s\n", &estado2);
        
        printf("Código: %s\n", codigo2);
        
        printf("Cidade: %s\n", cidade2);
        
        printf("População: %u\n", populacao2);
        
        printf("Área: %.f km²\n", area2);
        
        printf("PIB: %.f\n", pib2);
        
        printf("Ponto Turístico: %d\n", pontoT2);
        
        printf("Densidade Populacional: %f\n", densidade2);
        
        printf("PIB per capita: %f\n", pibpc2);
        
        //comparação dos dados
        printf("\nComparando as cartas:\n");

        
        printf("\nA carta 1 tem mais pontos turísticos que a carta 2? %d\n", pontoT1 > pontoT2);
        
        printf("A carta 1 tem mais população que a carta 2? %d\n", populacao1 > populacao2);
        
        printf("A carta 1 tem mais área que a carta 2? %d\n", area1 > area2);
        
        printf("A carta 1 tem mais PIB que a carta 2? %d\n", pib1 > pib2);
        
        printf("A carta 1 tem mais densidade populacional que a carta 2? %d\n", densidade1 > densidade2);
        
        printf("A carta 1 tem mais PIB per capita que a carta 2? %  d\n", pibpc1 > pibpc2);
        
        printf("A carta 1 tem mais densidade populacional que a carta 2? %d\n", densidade_pib1 > densidade_pib2);
        
        printf("A carta 1 tem mais superpoder que a carta 2? %d\n", superpoder1 > superpoder2); 

        printf("\nA carta 2 tem mais super poder que a carta 1? %d\n", superpoder2 > superpoder1);
        
                if (superpoder1 > superpoder2)
                {
                    printf("\nA carta 1 venceu!!!\n");
                }else{
                    printf("\nA carta 2 Venceu!!!\n");
                }
                
        

        

        
        //finalização do jogo
        printf("\nObrigado por jogar Super Trunfo Mestre!\n");
        return 0;

}