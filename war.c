#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Definindo o número máximo de territórios que podem ser cadastrados
#define MAX_TERRITORIO 5

// Estrutura para armazenar as informações de cada território
struct Territorio {
    char nome[30];
    char corExercito[10];
    int tropas;
};

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    struct Territorio locais[MAX_TERRITORIO];
    int quantidadeLocais = 0;
    
    //Mensagem de boas-vindas e instruções para o cadastro dos territórios
    printf("*****************\n");
    printf("Seja vem vindo ao Jogo War!\n");
    printf("Vamos iniciar com o cadastro dos Territórios. \n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*\n");

        // Loop para cadastrar os territórios, solicitando o nome, cor do exército e quantidade de tropas
        for (int i = 0; i < MAX_TERRITORIO; i++){
            printf("Insira o nome do Território: ");
            fgets(locais[quantidadeLocais].nome, sizeof(locais[quantidadeLocais].nome), stdin);
            printf("Insira a cor do Território: ");
            fgets(locais[quantidadeLocais].corExercito, sizeof(locais[quantidadeLocais].corExercito), stdin);
            printf("Insira a quantidade de Tropas: ");
            scanf("%d", &locais[quantidadeLocais].tropas);
            limparBufferEntrada();
            quantidadeLocais++;
            }
        // Loop para exibir as informações dos territórios cadastrados        
        for (int i = 0; i < quantidadeLocais; i++) {
                printf("*-*-*-*-*-*-*-*-*-*-*-*\n");                
                printf("Território %d:\n", i + 1);
                printf("Nome: %s", locais[i].nome);
                printf("Cor do Exercito: %s", locais[i].corExercito);
                printf("Quantidade de Tropas: %d\n", locais[i].tropas);                
            }    

    return 0;
}