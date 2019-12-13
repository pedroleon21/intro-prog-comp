#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *ch;
    int sizeofstring;
    scanf("%d",&sizeofstring);
    ch=(char*)calloc(sizeofstring,sizeof(char));
    ch[0]=99;
    ch[1]=98;
    ch[2]=97;
    ch[3]='\0';
    fflush(stdin);
    fgets(ch,sizeofstring,stdin);
    printf("%s",ch);
}
