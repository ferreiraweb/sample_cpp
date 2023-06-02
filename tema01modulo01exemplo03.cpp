// Programa ficha do Aluno
// Declaração de Biblioteca

#include <stdio.h> // Funções de I/O
#include <conio.h> // Funções de manipulação de caracteres na tela

int main(void)
{
    // int matricula;
    // char nome[50];
    // float nota;

    // float vnotas[20]; // vetor de 20 posições
    // float mnotas[10][2];

    // Declaração de struct
    // struct <identificador>
    //{
    // <listagem dos tipos e membros>
    //}

    struct ficha_aluno
    {
        int matricula;
        char nome[50];
        char disciplina[30];
        float nota;
    };

    // Declaração da variável aluno do tipo struct ficha_aluno

    struct ficha_aluno aluno;

    printf("\n Ficha do Aluno");

    printf("Matricula do aluno: ");
    scanf("%d", &aluno.matricula);

    printf("Nome do aluno: ");
    scanf("%s", &aluno.nome);

    printf("Disciplina do aluno: ");
    scanf("%s", &aluno.disciplina);

    printf("Informe a nota do aluno: ");
    scanf("%f", &aluno.nota);

    printf("\n Ficha do alunao\n: ");

    printf("\n Matricula: %d\n: ", aluno.matricula);
    printf(" Nome: %d\n: ", aluno.nome);
    printf(" Disciplina: %s\n: ", aluno.disciplina);
    printf(" Nota: %.2f\n: %s\n", aluno.nota);

    return (0);
}