#include<string.h>
#include<stdio.h>

int main()
{
    char str[10];
    fgets(str,10,stdin);
    printf("\n%s",str);
}
