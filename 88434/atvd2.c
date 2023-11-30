#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    struct dados_morador
    {
        char nome[200];
        int idade;
        char endereco[200];
        
    };

   
    struct dados_morador morador;
   
    printf("\nSolicitando dados do usuario... \n");

    printf("Digite o nome do usuario: ");
    gets(morador.nome);

    printf("Digite a idade do usuario: \n");
    scanf("%d" ,&morador.idade);

    
    printf("Digite o endereço: ");
    gets(morador.endereco);

    printf("\nExibindo dados do usuario...\n");

    printf("\nNome do usuario: %s\n", morador.nome);
    printf("Idade do usuario: %d\n", morador.idade);
    printf("Endereço do usuario: %s\n", morador.endereco);
   

   

   
   

    return 0;
}