#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, tam, p = 0, m = 0, p2 = 0, m2 = 0;

    printf("qunatidade camisas\n");
    scanf("%d", &n);

    int vtam[n];

    printf("1 pequeno 2 medio\n\n");
    for (int i = 0; i < n; i++)

    {
        scanf("%d", &vtam[i]);
        if (vtam[i] == 1)
        {
            p++;
        }
        else if (vtam[i] == 2)
        {
            m++;
        }
        else
        {
            break;
        }
    }
    printf("quantidade de camisas p\n");
    scanf("%d", &p2);
    printf("quantidade de camisas m\n");
    scanf("%d", &m2);

    if (p == p2 && m == m2)
    {
        printf("S");
    }
    else
    {
        printf("N");
    }
}