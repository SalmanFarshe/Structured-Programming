#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    gets(str);
    int length = 0, i = 0;
    while (str[i] != '\0')
    {
        length++;
        i++;
    }
    printf("%d", length);
    return 0;
}