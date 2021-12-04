#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float preco[10], mcusto[10][5], custoTotalProduto[10],custoTotalArmazem[5], custofinal[10];
    int estoque[10][5], qtarmazem[5], menor=500, local, somaproduto[10], totalprodutos=0;
    int i, j;


        printf("\n*************************************************************\n");
        printf("\n******************Valor dos produtos*************************\n");
        printf("\n*************************************************************\n");

    system("pause");

    for(j=0; j<10; j++)
    {
        preco[j] = rand()%50;
    }



    for(i=0; i<10; i++)
    {
        printf("\n Valor produto %d --> R$ %.2f",i+1, preco[i]);
    }





    for(i=0; i<10; i++)
    {
        for(j=0; j<5; j++)
        {
            estoque[i][j] =  rand()%10;

        }
    }

        printf("\n**************************************************************\n");
        printf("\n**********Quantidade de produtos por armazem****************\n");
        printf("\n*************************************************************\n");
        system("pause");

    printf("\n------------------------------------------------------------------------------------------------------------\n");
    printf("\n------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t arm 01 \t arm 02 \t arm 03 \t arm 04 \t arm 05 ");

    for(i=0; i<10; i++)
    {
        printf("\n\n");

        printf("produto %d:\t",i+1);
        for(j=0; j<5; j++)
        {

            printf("\t %d\t",estoque[i][j]);

        }
    }
    printf("\n------------------------------------------------------------------------------------------------------------\n");
    printf("\n------------------------------------------------------------------------------------------------------------\n");


        printf("\n*****************************************************************\n");
        printf("\n**********Quantidade total produtos por armazem******************\n");
        printf("\n*****************************************************************\n");

    system("pause");



    for(i=0; i<5; i++)
    {


        qtarmazem[i]=0;
        for(j=0; j<10; j++)
        {

            qtarmazem[i]=qtarmazem[i]+estoque[i][j];



        }
        totalprodutos=totalprodutos+qtarmazem[i];
        printf("\n\n");
        printf("armazem %d, %d produtos",i+1, qtarmazem[i]);


    }


      printf("\n*************************************************************\n");
        printf("\n*****Quantidade total de produtos E menor estoque***********\n");
        printf("\n*************************************************************\n");
    system("pause");





        for(i=0; i<5; i++){

        if(qtarmazem[i]<menor){
            menor = qtarmazem[i];
            local = i+1;
        }


        }
        printf("\n\n");
        printf("O menor estoque e de %d no armazem %d ", menor, local);


    printf("\n\n");


    for(i=0; i<10; i++)
        {
            for(j=0; j<5; j++)

                mcusto[i][j] = estoque[i][j] *preco[i];


        }


        printf("\n*************************************************************\n");
        printf("\n*************Custo de cada armazem***************************\n");
        printf("\n*************************************************************\n");


    system("pause");

    printf("\n-------------------------------------Matriz custo-----------------------------------------------------------\n");
    printf("\n------------------------------------------------------------------------------------------------------------\n");
    printf("\t\t\t arm 01 \t arm 02 \t arm 03 \t arm 04 \t arm 05 ");

    for(i=0; i<10; i++)
    {
        printf("\n\n");

        printf("produto %d:\t",i+1);
        for(j=0; j<5; j++)
        {

            printf("\t%.2f\t",mcusto[i][j]);

        }
    }
    printf("\n------------------------------------------------------------------------------------------------------------\n");
    printf("\n------------------------------------------------------------------------------------------------------------\n");

    system("pause");


        printf("\n*************************************************************\n");
        printf("\n***************Custo total cada armazem**********************\n");
        printf("\n*************************************************************\n");
        system("pause");

        for(j=0; j<5; j++){

            custoTotalArmazem[j]=0;

                for(i=0; i<10; i++){

                custoTotalArmazem[j]=custoTotalArmazem[j]+ mcusto[i][j];
                }

        }

        for(j=0; j<5; j++){
            printf("\n\n");
            printf("\nArmazem %d, custo total R$ %.2f\n", j+1, custoTotalArmazem[j]);
        }

        system("pause");


        printf("\n*************************************************************\n");
        printf("\n***************Custo total de cada produto*******************\n");
        printf("\n*************************************************************\n");
        system("pause");


        for(i=0; i<10; i++)
        {


        custoTotalProduto[i]=0;
        for(j=0; j<5; j++)
        {

            custoTotalProduto[i]=custoTotalProduto[i]+mcusto[i][j];


        }
        printf("\n\n");
        printf("Produto %d, custo total R$ %.2f ",i+1, custoTotalProduto[i]);
        }

        for(i=0;i<10;i++)
        {
            somaproduto[i]=0;
        for(j=0;j<5;j++){
            somaproduto[i]=somaproduto[i]+estoque[i][j];

        }



        }

        printf("\n*************************************************************\n");
        printf("\n***************Matriz resultante final **********************\n");
        printf("\n*************************************************************\n");
        system("pause");

        for(i=0;i<10;i++){

            custofinal[i]=0;
            for(j=0;j<5;j++){

                    custofinal[i]=preco[i]*somaproduto[i];

            }
        }






    printf("\n--------------------------------------------Resultante------------------------------------------------------\n");
    printf("\n------------------------------------------------------------------------------------------------------------\n");
    printf("Nr \t custo\t\t armazem 01 \t armazem 02 \t armazem 03 \t armazem 04 \t armazem 05\t Total");

    for(i=0; i<10; i++)
    {
        printf("\n\n");
        printf("%d - \tR$ %.2f ",i+1, preco[i]);

        for(j=0; j<5; j++)
        {

            printf("\t\t%d",estoque[i][j]);

        }
        printf("\tR$ %.2f",custofinal[i]);
    }
    printf("\n------------------------------------------------------------------------------------------------------------\n");
    printf("\n------------------------------------------------------------------------------------------------------------\n");






    return 0;
}

