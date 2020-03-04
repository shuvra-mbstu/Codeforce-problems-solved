#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, ans, na = 0, j;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);
    for(i  = 0; i < n; i++)
    {
        if(s[i] == 'a')
        {
            na++;
        }
    }
    ans = fabs(n/2 - na);
    printf("%d\n", ans);
    if(ans == 0)
    {
        printf("%s\n", s);
    }
    else
    {
    for(i = 0; i < ans; i++)
    {
        s[i] = 'a';

    }
    for(i = ans; i < n; i++)
    {
        s[i] = 'b';

    }
    printf("%s\n", s);
    }


}
