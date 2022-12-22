#include<stdio.h>
int main()
{
    int arr[4][5][3], total[4][5], sum = 0;
    
    // getting input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    // calculation
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            sum = 0;
            for (int k = 0; k < 3; k++)
            {
                sum = sum + arr[i][j][k];
            }
            total[i][j] = sum;
        }
    }

    // printing total
    for (int i = 0; i < 4; i++)
    {
        printf("[");
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", total[i][j]);
        }
        printf("]");
        printf("\n");
    }
    return 0;
}