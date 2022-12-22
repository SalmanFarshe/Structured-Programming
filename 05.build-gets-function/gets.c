#include<stdio.h>
int main()
{
    char s[100], ch;
    int i = 0;

    while (ch != '\n')
    {
        scanf("%c", &ch);
        s[i] = ch;
        i++;
    }
    s[i] = '\0';
    
    printf("%s", s);

    return 0;
}