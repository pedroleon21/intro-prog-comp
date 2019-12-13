#include<stdio.h>
#include<string.h>
void printi(char str1[]);
int main()
{
    char str1[128];
    str1[0]='\0';
    printf("\ndigite a palavra: ");
    fflush(stdin);
    fgets(str1,128,stdin);
    str1[strlen(str1)-1]=' ';
    printf(" %s\n",str1);
    printi(str1);
}


void printi(char str1[])
{
    int i,j,k,l;
    k=strlen(str1);
    i=j=0;
    while(i<k)
    {
        if(str1[i]==' ')
        {
            l=i;
            while(l>=j)
            {
                printf("%c",str1[l]);
                l--;
            }j=i;
        }i++;
    }
}
