#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int walkvar,sizeofstr,countup,countlw;
    char str[128],c;
    str[0]='\0';
    fflush(stdin);
    fgets(str,128,stdin);
    str[strlen(str)-1]='\0';
    sizeofstr=strlen(str);
    countlw=countup=0;
    for(walkvar=0; walkvar<sizeofstr; walkvar++)
    {
        c=str[walkvar];
        if(isupper(c)) countup++;
        if(islower(c)) countlw++;
    }
    if(countup<=countlw)
    {
        for(walkvar=0; walkvar<sizeofstr; walkvar++)
        {
            c=str[walkvar];
            if(isupper(c))
            {
                str[walkvar]=tolower(c);
            }
        }
    }
    else
    {
        for(walkvar=0; walkvar<sizeofstr; walkvar++)
        {
            c=str[walkvar];
            if(islower(c))
            {
                str[walkvar]=toupper(c);
            }
        }
    }
    printf("\n%s\n",str);
    return 0;
}
