#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int i,width,ptts=0,sz,*vet,vetsz=2,vetid;
    char *str;
    str=(char*)malloc(sizeof(char)*8);
    str[0]='\0';
    fgets(str,sizeof(char)*8,stdin);
    sz=strlen(str);
    sz--;
    str[sz]='\0';
    for(i=0;i<strlen(str);i++)
    {
        if(i==0) width=atoi(str);
        if(str[i] == ' ') ptts=atoi(&str[i]);
    }
    free(str);
    str=(char*)malloc(sizeof(char)*width);
    fgets(str,width,stdin);
    sz=strlen(str);
    sz--;
    str[sz]='\0';
    vet=(int*)calloc(vetsz,sizeof(int));
    for(i=0;i<sz;i++)
    {
        if(vetid >= vetsz-1)
        {
            vetsz++;
            vet=(int*)realloc(vet,sizeof(int)*vetsz);
        }
        if(i==0 || str[i] == ' ')
        {
            vet[vetid]=atoi(&str[i+1]);
            vetid++;
        }
    }

    free(str);
    free(vet);
    return 0;
}
