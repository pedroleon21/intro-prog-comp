#include<stdio.h>
int primo(int num)
{
    int i;
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;

}
int main()
{
    int op=1,num;
    while(op)
    {
        printf("\n digite o numero: ");
        scanf("%d",&num);
        if(primo(num))
        {
            printf("\n o num %d é primo", num);
        }
        else{printf("\n o num %d não é primo", num);}
    }
}
