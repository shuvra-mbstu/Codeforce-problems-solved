#include<stdio.h>
#include<string.h>
int len;
char str[50];
void recursive_function(int n)
{

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
    scanf("%s",&str);
    len=strlen(str);
    recursive_function(0);
}
