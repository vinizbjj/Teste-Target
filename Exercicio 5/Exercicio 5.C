#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    char vet;
    int i, j;

    printf("Qualquer frase de ate 100 caracteres: ");

    scanf("%[^\n]", frase);

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
