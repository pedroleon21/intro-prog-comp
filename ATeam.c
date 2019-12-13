#include<stdio.h>
int main()
{
    int d,qtd,a,b,c;
    scanf("%d",&qtd);
    d=0;
    while(qtd>0)
    {
        scanf("%d %d %d",&a,&b,&c);
        qtd--;
        if((a+b+c)>=2)
        {
            d++;
        }
    }
    printf("%d\n",d);
    return 0;
}
