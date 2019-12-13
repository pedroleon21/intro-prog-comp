//chalinger: http://codeforces.com/contest/381/problem/A
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int sj,j,i,dm,sz,*vet,vetsz=2,vind=0;
    char str[2981];
    scanf("%d",&sz);
    fgets(str,2981,stdin);
    sz=strlen(str);
    sz--;
    str[sz]='\0';
    vet= (int*)calloc(vetsz,sizeof(int));
    for(i=0; i<sz; i++)
    {
        if(vind >= vetsz-1)
        {
            vetsz++;
            vet= (int*)realloc(vet,sizeof(int)*vetsz);
        }
        if(i==0 || str[i] == ' ')
        {
            vet[vind]=atoi(&str[i]);
            vind++;
        }
    }
    vind--;
    //free(str);
    i=0;j=vind;
    vind=2;
    dm=sj=0;
    while(i<=j)
    {
        if(vind%2 == 0)
        {
            if(vet[i] > vet[j])
            {
                sj+=vet[i];
                i++;
            }
            else
            {
                sj+=vet[j];
                j--;
            }
        }
        else
        {
            if(vet[i] > vet[j])
            {
                dm+=vet[i];
                i++;
            }
            else
            {
                dm+=vet[j];
                j--;
            }
        }
        vind++;
    }
    printf("%d %d",sj,dm);
    return 0;
}
