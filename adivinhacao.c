#include <stdio.h>

int main()
{
    // App Header
    printf("*************\n");
    printf("* Bem vindo *\n");
    printf("*************\n");

    int secret_number = 59;
    int chute;

    printf("Qual é o seu chute? ");
    scanf("%d", &chute);
    printf("Seu chute foi %d ", chute);
}
