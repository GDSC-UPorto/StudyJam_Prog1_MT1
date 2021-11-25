#include <stdio.h>

int main()
{
    float tempo, maior=0, menor=6, soma=0;
    int min, seg, mil;

    while(scanf("%f", &tempo) != EOF)
    {
        //printf("%f\n", tempo);
        if(tempo<4 || tempo>6) continue;
        maior = tempo > maior ? tempo : maior;
        menor = tempo < menor ? tempo : menor;
        soma += tempo;
    }

    min = soma/60;
    seg = (int)soma%60;
    mil = (soma-min*60-seg)*1000;

    printf("Tempo minimo de enchimento: %.2fs\n", menor);
    printf("Tempo máximo de enchimento: %.2fs\n", maior);
    printf("Tempo total: %d minuto(s), %d segundo(s), %d milésmios.\n", min, seg, mil);

    return 0;
}