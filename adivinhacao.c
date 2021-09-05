#include <stdio.h>

int main()
{
    // App Header
    printf("*************\n");
    printf("* Bem vindo *\n");
    printf("*************\n");

    int secret_number = 59;
    int chute;

    for (int i = 1; i <= 3; i++)
    {
        printf("Tentativa %d de %d \n", i, 3);
        printf("Qual é o seu chute? \n");
        scanf("%d", &chute);

        int acertou = (chute == secret_number);

        if (acertou)
        {
            printf("Awe, Você acertou!!! O número secreto é: %d \n", chute);
        }
        else
        {
            int maior = chute > secret_number;

            if (maior)
            {
                printf("Seu chute foi maior que o número secreto, tente novamente!\n");
            }
            else
            {
                printf("Seu chute foi menor que o número secreto, tente novamente!\n");
            }
        }
    }
}
