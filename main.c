#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno aluno;

    printf("=== Sistema de Cadastro de Alunos ===\n\n");
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]s", aluno.nome);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Digite a nota do aluno: ");
    scanf("%f", &aluno.nota);

    return 0;
}