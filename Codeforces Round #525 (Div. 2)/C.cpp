#include<stdio.h>
#include<string.h>
void recursive_function(int n)
{
    int len;
    if(n==len-1)
    {
        printf("%c",str[n]);
        return ;

    }
    else
    {
        recursive_function(n+1);
        printf("%c",str[n]);
    }
}
int main()
{
    char str[50];
    int len;
    scanf("%s",&str);
    len=strlen(str);
    recursive_function();
}
