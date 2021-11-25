#include <stdio.h>
#include <math.h>

#define CombustivelBase 350.f

int main()
{
    char op;
    float combustivel, soma=0, duracao, peso;

    while(scanf("%c", &op) != EOF)
    {
        switch (op)
        {
        case 'A':
            scanf("%f %f\n", &duracao, &peso);
            combustivel = CombustivelBase + duracao*peso/10;
            break;
        
        case 'B':
            scanf("%f %f\n", &duracao, &peso);
            combustivel = CombustivelBase + duracao*pow(peso/1500, 2);
            break;

        case 'C':
            scanf("%f\n", &duracao);
            combustivel = CombustivelBase + pow(duracao, 3);
            break;

        default:
            printf("Operação desconhecida\n");
            continue;
            break;
        }
        soma += combustivel;
        printf("%.2f\n", combustivel);
    }

    printf("%.2f (total)\n", soma);

    return 0;
}
