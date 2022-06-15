#include <stdio.h>

int i = 13, soma = 0, k = 0;

int main()
{

    while (k < i)
    {
        k = k + 1;
        soma = soma + k;
        printf("a k %.2d\n", k);
        printf("a soma %.2d\n", soma);
    }
    printf("a soma %.2d\n", soma);

    return 0;
}
