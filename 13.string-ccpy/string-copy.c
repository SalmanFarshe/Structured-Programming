#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    char str2[100];
    gets(str1);
    gets(str2);
    for (int i = 0; i < strlen(str1); i++)
    {
        str1[i] = str2[i];
    }
    printf("string 1 = %s", str1);
    return 0;
}