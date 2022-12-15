#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill(int n, int k, int a[n][k])
{
    int i, j;
    for (i = 0; i < n; i++)
        for(j = 0; j<k; j++)
            a[i][j] = rand () % 101;
}

double answer(int n, int k, int a[n][k]){
    int i, j, sled=0, skal=0;
    double ans;
    for (i = 0; i < n; i++){
        for(j = 0; j<k; j++){
            if (i == j){
                sled +=a[i][j];
            }
            skal+=a[i][j]*a[j][i];        
        } 
    }
    //printf("sled = %d", sled);
    ans = (double)sled / skal;
    return ans;
}
int main()
{
    srand(time(NULL));
    int A, B;
    printf("Матрица размером А*A \n");
    printf("A -> ");
    scanf("%d", &A);
    B = A;
    int a[A][B];
    fill(A, B, a);
    int i, j;
    for (i = 0; i < A; i++){
        for(j = 0; j<B; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("%lf\n", answer(A, B, a));
    return 0;
}
