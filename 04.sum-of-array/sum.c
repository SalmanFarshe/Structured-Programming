#include<stdio.h>
int main()
{
    int num[10], sum = 0, i;

    for (i = 0; i < 10; i++)
    {
        num[i] = i;
        sum = sum + num[i];
    }
    
    printf("%d", sum);

    return 0;
}