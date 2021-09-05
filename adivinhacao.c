#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // App Header
    printf("*************\n");
    printf("* Bem vindo *\n");
    printf("*************\n");

    int seconds = time(0); // EPOCH: 01/01/1970
    srand(seconds);

    int secret_number = rand() % 100;
    int chute;
    int tries = 1;
    double points = 1000;

    while (1)
    {
        printf("Tentativa %d. Qual é o seu chute?  \n", tries);
        scanf("%d", &chute);

        int is_imputed_number_negative = (chute < 0);

        if (is_imputed_number_negative)
        {
            printf("Você não pode usar números negativos. Tente novamente!\n");
            continue;
        }

        int is_imputed_number_equals_secret_number = (chute == secret_number);
        int is_imputed_number_gt_secret_number = (chute > secret_number);

        if (is_imputed_number_equals_secret_number)
        {
            printf("Awe, Você acertou!!! O número secreto é: %d \n", chute);
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

    printf("Você acertou em %d tentativas!\n", tries);
    printf("Fim de jogo!\n");
    printf("Total de pontos: %.1f \n", points);
}
