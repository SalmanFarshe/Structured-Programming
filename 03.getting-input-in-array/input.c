#include<stdio.h>
int main()
{
    int num1[5];

    // user given input
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num1[i]);
    }

    // printing user inputed array
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", num1[i]);
    }

    return 0;
}