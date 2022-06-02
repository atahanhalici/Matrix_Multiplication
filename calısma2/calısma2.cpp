#include <iostream>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int m1[100][100];
    int m2[100][100];
    int c[100][100];
    int i, j, k, l, m,t=0;
    printf("Satir sayisi kac olsun: ");
    scanf_s("%d", &k);
    printf("1. Matrisin Sutun sayisi kac olsun: ");
    scanf_s("%d", &l);
    printf("2. Matrisin Sutun sayisi kac olsun: ");
    scanf_s("%d", &m);
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < l; j++)
        {
            printf("1. Matrisin %d-%d degeri: ",i+1,j+1);
            scanf_s("%d", &m1[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("2. Matrisin %d-%d degeri: ", i + 1, j + 1);
            scanf_s("%d", &m2[i][j]);
        }
        printf("\n");
    }
    printf("Birinci matris:\n");
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < l; j++)
        {
            printf("%d  ",m1[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Ikinci matris:\n");
    for (i = 0; i < l; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d  ", m2[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("Matrisler carpimi:\n");
    for (i = 0; i < k; i++)
    {
        for (j = 0; j < m; j++)
        {
            for (k = 0; k < l; k++)
            {
                t = (m1[i][k] * m2[k][j]) + t;
            }
            c[i][j] = t;
            t = 0;
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    system("pause");
}