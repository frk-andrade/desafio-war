#include stdio.h
#include string.h
#include stdin.h

#define MAX_TERRITORIO 5;

struct Territorio {
    char nome[30];
    char corExercito[10];
    int tropas;
}

void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '/n' && c != EOF);
}

int main() {
    struct Territorio locais[MAX_TERRITORIO];
    int quantidadeLocais = 0;
    
    printf("*****************\n");
    printf("Seja vem vindo ao Jogo War!\n");
    printf("Vamos iniciar com o cadastro dos Territórios. \n");
    printf("*-*-*-*-*-*-*-*-*-*-*-*\n");
    
    for (i = 0; i < locais; i++){
        printf("Insira o nome do Território: \n");
        fgets(locais[quantidadeLocais].nome, stdin);
        printf("Insira a cor do Território: \n");
        fgets(locais[quantidadeLocais].corExercito, stdin);
        printf("Insira a quantidade de Tropas: \n");
        scanf("%d", &locais[quantidadeLocais].tropas);
        limparBufferEntrada();

    }
    
    return 0;
}