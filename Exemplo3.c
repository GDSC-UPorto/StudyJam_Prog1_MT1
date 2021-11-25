#include <stdio.h>

int main()
{
    char op;
    float c, ux, uy, uz, vx, vy, vz;
    int add = 0, mult = 0, prod = 0; 

    while(scanf("%c", &op) != EOF)
    {
        switch (op)
        {
        case 'A':
            scanf("%f %f %f %f %f %f\n", &ux, &uy, &uz, &vx, &vy, &vz);
            printf("u + v = (%f, %f, %f)\n", ux+vx, uy+vy, uz+vz);
            add++;
            break;
        
        case 'B':
            scanf("%f %f %f %f\n", &c, &ux, &uy, &uz);
            printf("c * u = (%f, %f, %f)\n", ux*c, uy*c, uz*c);
            mult++;
            break;

        case 'C':
            scanf("%f %f %f %f %f %f\n", &ux, &uy, &uz, &vx, &vy, &vz);
            printf("u . v = %f\n", ux*vx+uy*vy+uz*vz);
            prod++;
            break;

        default:
            printf("Operação desconhecida\n");
            break;
        }
    }

    printf("\nAdicao de vetores: %d\n", add);
    printf("Produto de um escalar: %d\n", mult);
    printf("Produto escalar de vetores: %d\n", prod);

    return 0;
}