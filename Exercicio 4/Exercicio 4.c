#include <stdio.h>


int main()
{
    float SP, RJ, MG, ES, Outros, Total;

    SP = 67836.43;
    RJ = 36678.66;
    MG = 29229.88;
    ES = 27165.48;
    Outros = 19849.53;
    Total = SP + RJ + MG + ES + Outros;
    printf("%f\n\n", Total);

    // Calculo do percentual


    SP = (SP / Total * 100);
    printf("Percentual faturamento SP = %.2f%%\n", SP);

    RJ = (RJ / Total * 100);
    printf("Percentual faturamento RJ = %.2f%%\n", RJ);

    MG = (MG / Total * 100);
    printf("Percentual faturamento MG = %.2f%%\n", MG);

    ES = (ES / Total * 100);
    printf("Percentual faturamento ES = %.2f%%\n", ES);

    Outros = (Outros / Total * 100);
    printf("Percentual faturamento Outros estados não exceto os descritos anteriormente = %.2f%%\n", Outros);

    return 0;
}
