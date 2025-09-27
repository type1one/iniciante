#include <stdio.h>
#include <string.h>

/*
    Cadastro de Territórios
    -----------------------
    Programa simples para treinar struct em C.
    Ele pede pro usuário digitar as informações de 5 territórios
    (nome, cor do exército e quantidade de tropas)
    e depois mostra tudo na tela.
*/

// Criei a struct que guarda as infos de cada território
struct Territorio {
    char nome[30];   // nome do território
    char cor[10];    // cor do exercito
    int tropas;      // número de tropas
};

int main() {
    struct Territorio t[5]; // vetor pra guardar os 5 territorios
    int i;

    printf("=== Cadastro de Territórios ===\n");
    printf("Vamos registrar 5 territórios com suas informações.\n");

    // Cadastro de cada território
    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d\n", i + 1);

        printf("Nome: ");
        scanf(" %29[^\n]", t[i].nome); // lê até 29 caracteres

        printf("Cor do exército: ");
        scanf(" %9[^\n]", t[i].cor); // lê até 9 caracteres

        printf("Quantidade de tropas: ");
        scanf("%d", &t[i].tropas);
    }

    // Mostrando o que foi cadastrado
    printf("\n=== Territórios cadastrados ===\n");
    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome..............: %s\n", t[i].nome);
        printf("Cor do exército...: %s\n", t[i].cor);
        printf("Quantidade tropas.: %d\n", t[i].tropas);
    }

    printf("\nCadastro finalizado!\n");
    return 0;
}
