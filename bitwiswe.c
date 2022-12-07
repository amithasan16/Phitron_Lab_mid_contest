#include <stdio.h>
#include<string.h>
int main()
{
    int a, b,i, sum = 0;
    char s[21];
    scanf(" %s", s);
    int n = strlen(s);

    for (i = 0; i < n ; i++)
    {
        
    }
    scanf("%d %d", &a, &b);

    for (i = 0; i < n; i++)
    {
        if (s[i] == '+')
        {
            sum += a + b;
        }
        else
        {
            sum += a * b;
        }
    }
    printf("%d\n", sum);
}