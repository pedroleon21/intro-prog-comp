#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cnt,mem=0,nw,mark=0;
    scanf("%d",&cnt);
    for(cnt;cnt>0;cnt--)
    {
        scanf("%d",&nw);
        if(nw!=mem)
        {
            mem=nw;
            mark++;
        }
    }
    printf("%d",mark);
}
