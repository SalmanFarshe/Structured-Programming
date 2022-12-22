#include<stdio.h>
int main()
{
    int arr[4][3], total[4], sum = 0;
    
    // getting input
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // calvulation
    for (int i = 0; i < 4; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }
        total[i] = sum;
    }

    // printing total
    for (int i = 0; i < 4; i++)
    {
        printf("%d ", total[i]);
    }
    return 0;
}