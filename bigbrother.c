#include<stdio.h>
int main()
{
    int a,b,c=0;;
    scanf("%d %d",&a,&b);
    while(a<=b)
    {
        c++;
        a=a*3;
        b=b*2;
    }
    printf("%d\n",c);
}
