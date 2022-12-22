#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    int x = 0;
    for (int i = 0; i < strlen(str2); i++)
    {
        if (str1[i] == str2[i])
        {
            x++;
        }
    }
    if (x == strlen(str2))
    {
        printf("%d", 0);
    }
    else
    {
        printf("%d", 1);
    }
    return 0;
}