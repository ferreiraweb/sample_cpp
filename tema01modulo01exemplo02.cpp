#include <stdio.h>
#include <conio.h>
int main(void)
{
    // v_num é a variável que
    // será apontada pelo ponteiro
    int v_num = 10;

    // declaração de variável ponteiro
    int *ptr;

    // atribuindo o endereço da variável v_num ao ponteiro
    ptr = &v_num;

    printf("Utilizando ponteiros\n\n");
    printf("Conteudo da variavel v_num: %d\n", v_num);
    printf("Endereco da variavel v_num: %x \n", &v_num);
    printf("Conteudo da variavel ponteiro ptr: %x", ptr);

    typedef struct
    {
        char rua[50];
        char numero[5];
        char CEP[8];
        char bairro[30];
    } endereco;

    // local.bairro = "Olavo Bilac";

    // struct
    struct aluno
    {
        int v_nmat;      // número da matrícula
        float v_nota[3]; // notas
        float v_media;   // media
        endereco moradia;
    };

    struct aluno felipe;

    felipe.v_media = 120;

    felipe.v_nmat = 120;
    // felipe.moradia.bairro = "Olavo Bilac";

    felipe.v_nota[0] = 8.5;
    felipe.v_nota[1] = 7.2;
    felipe.v_nota[2] = 5.4;
    felipe.v_media = (felipe.v_nota[0] + felipe.v_nota[1] + felipe.v_nota[2]) / 3.0;
    printf("Matricula:/d\n", felipe.v_nmat);
    printf("Media: %2f\n", felipe.v_media);

    getch();
    return (0);
}