#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, soma;

    system("cls");

    printf("    Insira o primeiro numero: ");
    scanf("%d", &x);

    printf("    Insira o segundo numero:  ");
    scanf("%d", &y);

    soma = x + y;
    
    puts("");
    printf("    %d + %d = %d\n", x, y, soma);

    getchar();
}