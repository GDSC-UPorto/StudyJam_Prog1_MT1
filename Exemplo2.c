#include <stdio.h>

int main()
{
    float max, min, maior=0;
    int id, mes, ano;

    while(scanf("%d %f %f", &id, &max, &min) != EOF)
    {
        if(max-min > maior)
        {
            //printf("%d\n\n", id);
            maior = max-min;
            ano = 2018 + (int) (id-1)/12;
            mes = id%12 == 0 ? 12 : id%12;
        }
    }

    printf("Maior amplitude de velocidade: %.2f\n", maior);
    printf("Registada no mes %d do ano %d\n", mes, ano);

    return 0;
}