#include<stdio.h>
int main()
{
    int arr[4][5][3];
    
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

    // printing array
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("[ ");
            for (int k = 0; k < 3; k++)
            {
                printf("%d ", arr[i][j][k]);
            }
            printf(" ]");
        }
        printf("\n");
    }
    return 0;
}