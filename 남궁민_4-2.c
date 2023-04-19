#include <stdio.h>

int main(void)
{
    int N, X;
    scanf_s("%d %d", &N, &X);
    int A[10001];

    for (int i = 0; i < N; i++)
    {
        scanf_s("%d", &A[i]);
        if (A[i] < X) 
            printf("%d ", A[i]);
    }

    return 0;
}