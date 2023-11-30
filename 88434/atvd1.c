#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    setlocale(LC_ALL, "portuguese");

    struct dados_usuario
    {
        char nome[200];
        int idade;
        float peso;
        float altura;
    };

   
    struct dados_usuario usuario;
   
    
    
    printf("\nSolicitando dados do usuario... \n");

    printf("Digite o nome do usuario: ");
    gets(usuario.nome);

  
    printf("Digite a idade do usuario: \n");
    scanf("%d" ,&usuario.idade);

    printf("Digite o peso do usuario: ");
    scanf("%f", &usuario.peso);

    printf("Digite a altura do usuario: ");
    scanf("%f", &usuario.altura);

    printf("\nExibindo dados do usuario...\n");

    printf("\nNome do usuario: %s\n", usuario.nome);
    printf("Idade do usuario: %d\n", usuario.idade);
    printf("Peso do usuario: %.1f\n", usuario.peso);
    printf("Altura do usuario: %.1f\n", usuario.altura);

   

   
   

    return 0;
}