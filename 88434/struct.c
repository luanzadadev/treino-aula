#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){

    setlocale(LC_ALL, "portuguese");

            char nome[200];
            int idade;

                printf("Digite o nome do aluno: ");
                gets(nome);

                printf("Digite a idade do aluno: ");
                scanf("%d", &idade);

                printf("\nExibindo dados do aluno...\n");


                printf("\nNome do aluno: %s\n", nome);
                printf("Idade do aluno %d\n", idade);












    return 0;

}