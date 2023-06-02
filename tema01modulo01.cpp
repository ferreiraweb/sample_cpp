
#include <stdio.h>

static int a = 0; // variável global, alocação estática

void incrementa(void)
{
    int b = 0;        // variável local, alocação estática
    static int c = 0; // variável local, alocação estática

    printf("a: %d, b:%d, c: %d\n", a, b, c);

    a++;
    b++;
    c++;
}

int main(void)
{
    int i;
    for (i = 0; i < 5; i++)
        incrementa();
    // system("pause");

    int quantidade = 5;

    int *pt_q = &quantidade; // cria ponteiro e atribui a ele o endereço (&) da variável quantidade

    *pt_q = 42; // altera o valor da variável pelo ponteiro.

    printf("pt - conteudo: %d, endereco: %d", *pt_q, &pt_q);

    return (0);
}