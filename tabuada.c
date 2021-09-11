#include <stdio.h>

int main()
{
    int number = 0;

    printf("Insira o número que deseja ver a tabuada:\n");
    scanf("%d", &number);

    for (int i = 1; i <= 10; i++)
    {
        int multiplied = (number * i);

        printf("%dx%i=%d\n", number, i, multiplied);
    }
}