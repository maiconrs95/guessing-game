#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // App Header
    printf("*************\n");
    printf("* Bem vindo *\n");
    printf("*************\n");
    printf("\n\n");

    int seconds = time(0); // EPOCH: 01/01/1970
    srand(seconds);

    int secret_number = rand() % 100;
    int chute;
    int tries = 1;
    double points = 1000;
    int win = 0;
    int tries_limit = 0;
    int level = 0;

    printf("Escolha a dificuldade:\n");
    printf("(1) Easy:\n");
    printf("(2) Normal:\n");
    printf("(3) Hard:\n");
    printf("\n");

    scanf("%d", &level);

    switch (level)
    {
    case 1:
        tries_limit = 20;
        break;
    case 2:
        tries_limit = 15;

    default:
        break;
    }

    for (int i = 1; i <= tries_limit; i++)
    {
        printf("Tentativa %d. Qual é o seu chute?\n\n", tries);
        scanf("%d", &chute);

        int is_imputed_number_negative = (chute < 0);

        if (is_imputed_number_negative)
        {
            printf("Você não pode usar números negativos. Tente novamente!\n");
            continue;
        }

        int is_imputed_number_equals_secret_number = (chute == secret_number);
        int is_imputed_number_gt_secret_number = (chute > secret_number);

        if (tries_limit == i)
        {
            break;
        }

        if (is_imputed_number_equals_secret_number)
        {
            win = 1;
            break;
        }

        else if (is_imputed_number_gt_secret_number)
        {
            printf("Seu chute foi maior que o número secreto, tente novamente!\n");
        }
        else
        {
            printf("Seu chute foi menor que o número secreto, tente novamente!\n");
        }

        tries++;

        double lost_points = abs(chute - secret_number) / (double)2;
        points = points - lost_points;
    }

    if (win)
    {
        printf("Você acertou em %d tentativas!\n", tries);
        printf("Fim de jogo!\n");
        printf("Total de pontos: %.1f \n", points);
    }
    else
    {
        printf("Você perdeu. Tente novamente!");
    }
}
