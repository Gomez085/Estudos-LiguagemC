// Cálculo da média do aluno

#include <stdio.h>

int main(void) {
float media;
    printf("Qual a média do aluno? ");
    scanf("%f", &media);
    if (media > 10 || media < 0)
    {
        printf("Valor inválido.");
        return (0);
    }
    if (media >= 9)
    {
        printf("Conceito A, APROVADO.");
    }
    else if (media >= 7.5 && media < 9)
    {
        printf("Conceito B, APROVADO.");
    }
    else if (media >= 6 && media < 7.5)
    {
        printf("Conceito C, APROVADO.");
    }
    else if (media >= 4 && media < 6)
    {
        printf("Conceito D, REPROVADO.");
    }
    else if (media < 4)
    {
        printf("Conceito E, REPROVADO.");
    }
}
