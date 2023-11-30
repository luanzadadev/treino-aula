#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct dados_livro

{
       char nome[200];
       char autor[200];
       char cate[200];
       float preco;



};

    struct dados_livro livro[3];
    int main(){

            setlocale(LC_ALL, "portuguese");

        int i;


        for ( i = 0; i < 3; i++)
        {
            printf("\n\nDigite o nome do livro: \n");
            gets(livro[i].nome);
            printf("\n\nDigite o nome do autor do livro: \n");
            gets(livro[i].autor);
            printf("\n\nDigite a categoria do livro: \n");
            gets(livro[i].cate);
            printf("\n\nDigite o preço do livro: \n");
            scanf("%f", &livro[i].preco);

            fflush(stdin);

        }



        for ( i = 0; i < 3; i++)
        {
            printf("Nome do livro: %s", livro[i].nome);
            printf("Nome do autor: %s", livro[i].autor);
            printf("Categoria do livro: %c", livro[i].cate);
            printf("Preço do livro: %f", livro[i].preco);
        }
        


        







        return 0;
    } 

    