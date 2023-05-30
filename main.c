#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, x, soma = 0;

    printf("Insira quantidade de linhas");
    scanf("%d", &n);

    int v[n];

    for (int i = 0; i < n; i++)
    {
        if (i != 0)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%d ", v[j]);
            }
            printf("\n");
        }

        printf("numero que o chefe falou: ");
        scanf("%d", &x);

        if (x == 0)
        {
            i -= 2;
        }
        else
        {
            v[i] = x;
        }
    }
    for (int i = 0; i < n; i++)
    {
        soma += v[i];
    }
    printf("SOMA: %d", soma);
}