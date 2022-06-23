#include <stdio.h>

int main()
{

    int a, b, fib, s;

    a = 0;
    b = 1;

    printf("Informe qual numero gostaria de saber se faz parte do conjunto\n", s);
    scanf("%d", &s);

    do
    {
        fib = a + b;
        a = b;
        b = fib;

    } while (fib < s);

    if (fib == s)
    {
        printf("Numero informado pertence a sequencia fibonacci,  %d\n", fib);
    }
    else
    {
        printf("Numero informado nao pertence a sequencia fibonacci numero mais proximo da sequencia é: %d\n", fib);
    }

    return 0;
}
