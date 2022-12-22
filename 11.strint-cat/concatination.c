#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100] = {"Salman"};
    char str2[100] = {" Farshe"};
    int i = 0, length = strlen(str1);
    while (str2[i] != '\0')
    {
        str1[length + i] = str2[i];
        i++;
    }
    printf("%s", str1);
    return 0;
}