#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int walkvar,sizeofstr;
    char str[103],str2[103],c,d;
    str2[0]=str[0]='\0';

    fgets(str,103,stdin);

    fgets(str2,103,stdin);
    sizeofstr=strlen(str);
    str[sizeofstr-1]='\0';
    str2[sizeofstr-1]='\0';
    for(walkvar=0; walkvar<sizeofstr; walkvar++)
    {
        c=str[walkvar];
        d=str2[walkvar];
        if(isupper(c))
        {
            str[walkvar]=tolower(c);
        }
        if(isupper(d))
        {
            str2[walkvar]=tolower(d);
        }
    }
    c=str[0];
    d=str2[0];
    for(walkvar=0; walkvar<sizeofstr && c == d; walkvar++)
    {
        c=str[walkvar];
        d=str2[walkvar];
    }
    if(c==d) printf("0\n");
    if(c>d) printf("1\n");
    if(c<d) printf("-1\n");
    return 0;
}
