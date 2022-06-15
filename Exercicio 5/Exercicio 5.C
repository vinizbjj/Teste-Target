#include <stdio.h>
#include <string.h>

int main()
{
    char frase[20];
    char vet;
    int i, j;

    printf("Qualquer frase de ate 20 caracteres: ");
    scanf("%s", frase);

    i = 0;
    j = strlen(frase) - 1;

    while (i < j)
    {
        vet = frase[i];
        frase[i] = frase[j];
        frase[j] = vet;
        i++;
        j--;
    }

    printf("%s\n", frase);

    return 0;
}
